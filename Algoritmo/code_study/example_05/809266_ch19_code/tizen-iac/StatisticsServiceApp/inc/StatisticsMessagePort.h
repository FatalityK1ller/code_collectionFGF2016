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

#ifndef _STATISTICS_MESSAGE_PORT_H_
#define _STATISTICS_MESSAGE_PORT_H_

#include <vector>
#include <FBase.h>
#include <FIo.h>

class StatisticsMessagePort
    : public Tizen::Io::IMessagePortListener
{
public :
    StatisticsMessagePort();
    ~StatisticsMessagePort();
    result Construct();
    virtual void OnMessageReceivedN(Tizen::Io::RemoteMessagePort* pRemoteMessagePort, Tizen::Base::Collection::IMap* pMessage);

private:
    std::vector<int> Parse(const Tizen::Base::String& str);

    Tizen::Io::LocalMessagePort* __pLocalMessagePort;
};

extern const RequestId APP_EXIT;

#endif // _STATISTICS_MESSAGE_PORT_H_
