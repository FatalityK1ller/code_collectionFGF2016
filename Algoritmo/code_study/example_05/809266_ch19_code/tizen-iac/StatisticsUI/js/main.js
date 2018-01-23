/*
 *      Copyright 2012  Samsung Electronics Co., Ltd
 *
 *      Licensed under the Flora License, Version 1.1 (the "License");
 *      you may not use this file except in compliance with the License.
 *      You may obtain a copy of the License at
 *
 *              http://floralicense.org/license
 *
 *      Unless required by applicable law or agreed to in writing, software
 *      distributed under the License is distributed on an "AS IS" BASIS,
 *      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *      See the License for the specific language governing permissions and
 *      limitations under the License.
 */

var app = tizen.application.getCurrentApplication();
var gServiceAppId = "pnyZLRCKmg.StatisticsServiceApp";
var gServicePortName = "STATISTICS_PORT";
var gLocalMessagePortName = "RESPONSE_PORT";

var gLocalMessagePort;
var gRemoteMessagePort;

var gWatchId;

var isStarting = false;
var isStarted = false;
var noData = false;

function showAlert(message) {
    var alertPopup = $("#alert-popup");
    alertPopup.find("#message").html(message);
    alertPopup.popup("open", {positionTo: "window"});
}

function writeToScreen(message) {
    var today = new Date(),
        time = today.getFullYear() + "-" + (today.getMonth() + 1) + "-" + today.getDate() + " "
                + today.getHours() + ":" + today.getMinutes() + ":" + today.getSeconds() + "." + today.getMilliseconds(),
        str = '<li class="ui-li-has-multiline ui-li-text-ellipsis">'
                + message
                + '<span class="ui-li-text-sub">'
                + time
                + '</span></li>';

    $("#logs").append(str).listview("refresh");
}

function sendRequest(command) {
    gRemoteMessagePort.sendMessage([
        { key: "request", value: command }
        ], gLocalMessagePort);
    writeToScreen("Sending a " + command + " request");
}

function sendData() {
    gRemoteMessagePort.sendMessage([
        { key: "request", value: "calculate" },
        { key: "data", value: "1,2,3,4,5,6,7,8,9,10" }
        ], gLocalMessagePort);
    writeToScreen("Sending a calculate request");
}

function calculate() {
    sendData();
}

function calculateNoData() {
    gRemoteMessagePort.sendMessage([
        { key: "request", value: "calculate" }
        ], gLocalMessagePort);
    writeToScreen("Sending a calculate request");
}

function onReceive(data, remote) {
    var message;
    var average;
    var sum;

    for (var i in data) {
        if(data[i].key == "response")
            message = data[i].value;
        else if (data[i].key == "average")
            average = data[i].value;
        else if (data[i].key == "sum")
            sum = data[i].value;
    }

    if (message)
        writeToScreen("Received: " + message);
    else
        writeToScreen("Received: unknown");

    if (message == "result") {
        writeToScreen("&nbsp;&nbsp;Average: " + average);
        writeToScreen("&nbsp;&nbsp;Sum: " + sum);
    }
    else if (message == "exit") {
        if (gRemoteMessagePort)
            gRemoteMessagePort = null;
        if (gLocalMessagePort) {
            gLocalMessagePort.removeMessagePortListener(gWatchId);
            gLocalMessagePort = null;
        }
        isStarted = false;
    }
}

function startMessagePort() {
    try {
        // gLocalMessagePort = tizen.messageport.requestLocalMessagePort(gLocalMessagePortName);
        gLocalMessagePort = tizen.messageport.requestTrustedLocalMessagePort(gLocalMessagePortName);
        gWatchId = gLocalMessagePort.addMessagePortListener(onReceive);
    }
    catch (e) {
        gLocalMessagePort = null;
        writeToScreen(e.name);
    }

    try {
        // gRemoteMessagePort = tizen.messageport.requestRemoteMessagePort(gServiceAppId, gServicePortName);
        gRemoteMessagePort = tizen.messageport.requestTrustedRemoteMessagePort(gServiceAppId, gServicePortName);

    }
    catch (e) {
        gRemoteMessagePort = null;
        writeToScreen(e.name);
    }

    isStarting = false;
    isStarted = true;

    if (noData)
        calculateNoData();
    else
        calculate();
}

function launchServiceApp() {
    function onSuccess() {
        console.log("Service App launched successfully!");
        console.log("Restart...");
        start();
    }

    function onError(err) {
        console.log("Service Applaunch failed");
        isStarting = false;
        showAlert("Failed to launch StatisticsServiceApp!");
    }

    try {
        console.log("Launching [" + gServiceAppId + "] ...");
        tizen.application.launch(gServiceAppId, onSuccess, onError);
    }
    catch (exc) {
        console.log("Exception while launching StatisticsServiceApp: " + exc.message);
        showAlert("Exception while launching StatisticsServiceApp:<br>" + exc.message);
    }
}

function start() {
    function onGetAppsContextSuccess(contexts) {
        for (var i = 0; i < contexts.length; i++) {
            var appInfo = tizen.application.getAppInfo(contexts[i].appId);
            if (appInfo.id == gServiceAppId) {
                console.log("Service App running");
                break;
            }
        }
        if (i >= contexts.length) {
            console.log("Service App not running. Launching it");
            launchServiceApp();
        }
        else {
            startMessagePort();
        }
    }

    function onGetAppsContextError(err) {
        console.log("getAppsContext exc");
    }

    try {
        tizen.application.getAppsContext(onGetAppsContextSuccess, onGetAppsContextError);
    }
    catch (exc) {
        writeToScreen("Get AppContext Error");
    }
}

function makeSureServiceAppRunning()
{
    if (gLocalMessagePort) {
        writeToScreen("Cannot start: already running");
    }
    else if (isStarting) {
        writeToScreen("Cannot start: service is starting");
    }
    else {
        isStarting = true;
        start();
    }
}

$(document).delegate("#main", "pageinit", function() {
    $("#btn-calc").bind("click", function() {
        noData = false;
        if (!isStarted) {
            makeSureServiceAppRunning();
        }
        else {
            calculate();
        }
        return false;
    });
    $("#btn-no-data").bind("click", function() {
        noData = true;
        if (!isStarted) {
            makeSureServiceAppRunning();
        }
        else {
            calculateNoData();
        }
        return false;
    });
    $("#btn-stop").bind("click", function() {
        if(isStarting) {
            writeToScreen("Cannot stop: service is starting");
        }
        else if(gRemoteMessagePort) {
            sendRequest("exit");
        }
        else {
            writeToScreen("Cannot stop: not running");
        }
        return false;
    });
    $("#btn-clear").bind("click", function() {
        $("#logs").empty().listview("refresh");
        return false;
    });
    $(window).on('tizenhwkey', function (e) {
        if (e.originalEvent.keyName === "back") {
            if ($.mobile.activePage.attr('id') === 'main') {
                tizen.application.getCurrentApplication().exit();
            }
            else {
                history.back();
            }
        }
    });
});

