//
// Copyright (c) 2012 Samsung Electronics Co., Ltd.
//
// Licensed under the Flora License, Version 1.1 (the License);
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://floralicense.org/license
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an AS IS BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include "StatisticsServiceApp.h"

using namespace Tizen::App;
using namespace Tizen::Base;
using namespace Tizen::Base::Collection;
using namespace Tizen::System;

StatisticsServiceApp::StatisticsServiceApp(void)
    : __pMessagePort(null)
{
}

StatisticsServiceApp::~StatisticsServiceApp(void)
{
	delete __pMessagePort;
}

ServiceApp*
StatisticsServiceApp::CreateInstance(void)
{
	// Create the instance through the constructor.
	return new (std::nothrow) StatisticsServiceApp();
}

bool
StatisticsServiceApp::OnAppInitializing(AppRegistry& appRegistry)
{
	AppLog("OnAppInitializing is called.");
	result r = E_SUCCESS;

	// Initialize ServerMessagePort
	__pMessagePort = new (std::nothrow) StatisticsMessagePort();
	TryReturn(__pMessagePort != null, false, "[E_FAILURE] Failed to create __pMessagePort.");
	AppLog("__pMessagePort is created.");

	r = __pMessagePort->Construct();
	TryReturn(IsFailed(r) != true, r, "[%s] Failed to construct __pMessagePort", GetErrorMessage(r));
	AppLog("__pMessagePort is constructed.");

	return true;
}

bool
StatisticsServiceApp::OnAppInitialized(void)
{
	return true;
}

bool
StatisticsServiceApp::OnAppWillTerminate(void)
{
	return true;
}

bool
StatisticsServiceApp::OnAppTerminating(AppRegistry& appRegistry, bool forcedTermination)
{
	return true;
}

void
StatisticsServiceApp::OnLowMemory(void)
{
}

void
StatisticsServiceApp::OnBatteryLevelChanged(BatteryLevel batteryLevel)
{
}

void
StatisticsServiceApp::OnUserEventReceivedN(RequestId requestId, IList* pArgs)
{
    AppLogTag("PTAP", "OnUserEventReceivedN is called. requestId is %d", requestId);

    if (requestId == APP_EXIT)
    {
        Terminate();
    }

	delete pArgs;
}
