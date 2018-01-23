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

#include <numeric>
#include <FApp.h>
#include <unique_ptr.h>
#include "StatisticsMessagePort.h"

using namespace Tizen::App;
using namespace Tizen::Base;
using namespace Tizen::Base::Collection;
using namespace Tizen::Io;

const RequestId APP_EXIT = 0;

StatisticsMessagePort::StatisticsMessagePort(void)
    : __pLocalMessagePort(null)
{
}

StatisticsMessagePort::~StatisticsMessagePort(void)
{
}

result
StatisticsMessagePort::Construct()
{
    __pLocalMessagePort = MessagePortManager::RequestTrustedLocalMessagePort(L"STATISTICS_PORT");
    // __pLocalMessagePort = MessagePortManager::RequestLocalMessagePort(L"STATISTICS_PORT");
    TryReturnTag(
        "PTAP", __pLocalMessagePort != null, E_FAILURE,
        "[%s] Failed to get LocalMessagePort instance.",
        GetErrorMessage(GetLastResult())
        );
    result r = __pLocalMessagePort->AddMessagePortListener(*this);
    TryReturnTag(
        "PTAP", r == E_SUCCESS, E_FAILURE,
        "[%s] Failed to add a listener", GetErrorMessage(r)
        );
    AppLogTag(
        "PTAP", "LocalMessagePort(\"%ls\") is ready !!!",
        __pLocalMessagePort->GetName().GetPointer()
        );

    return E_SUCCESS;
}

std::vector<int>
StatisticsMessagePort::Parse(const String& str)
{
    Tizen::Base::Utility::StringTokenizer strTok(str, L",");
    String elem;
    int val;
    std::vector<int> rv;
    while (strTok.HasMoreTokens())
    {
        strTok.GetNextToken(elem);
        AppLogTag("PTAP", "Parsing %ls...", elem.GetPointer());
        Integer::Parse(elem, val);
        AppLogTag("PTAP", "Parsed value = %d", val);
        rv.push_back(val);
    }
    return rv;
}

void
StatisticsMessagePort::OnMessageReceivedN(RemoteMessagePort* pRemoteMessagePort, IMap* pMessage)
{
    AppLogTag("PTAP", "OnMessageReceivedN is invoked");
    std::unique_ptr<IMap> pReceivedMessage(pMessage);

    std::unique_ptr<HashMap> pMap(new HashMap(SingleObjectDeleter));
    pMap->Construct();

    String* pRequest = static_cast<String *>(pMessage->GetValue(String(L"request")));
    TryCatchTag(
        "PTAP", pRequest && (*pRequest == L"exit" || *pRequest == "calculate"),
        pMap->Add(new String(L"response"), new String(L"unsupported")),
        "Invalid message"
        );
    AppLogTag("PTAP", "request = %ls", pRequest->GetPointer());

    if (*pRequest == L"exit")
    {
        pMap->Add(new String(L"response"), new String(L"exit"));
        App* pApp = App::GetInstance();
        pApp->SendUserEvent(APP_EXIT, null);
    }
    else if (*pRequest == L"calculate")
    {
        String* pData = static_cast<String *>(pMessage->GetValue(String(L"data")));
        TryCatchTag(
            "PTAP", pData,
            pMap->Add(new String(L"response"), new String(L"missing data")),
            "Missing data"
            );
        AppLogTag("PTAP", "data = %ls", pData->GetPointer());

        std::vector<int> data = Parse(*pData);
        int sum = std::accumulate(data.begin(), data.end(), 0);
        double avg = sum / static_cast< double >(data.size());
        AppLogTag("PTAP", "Sending result: sum = %d, avg = %f", sum, avg);
        pMap->Add(new String(L"response"), new String(L"result"));
        pMap->Add(new String(L"average"), new String(Double::ToString(avg)));
        pMap->Add(new String(L"sum"), new String(Integer::ToString(sum)));
    }

CATCH:
    pRemoteMessagePort->SendMessage(__pLocalMessagePort, pMap.get());
}
