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

#ifndef _STATISTICS_SERVICE_APP_H_
#define _STATISTICS_SERVICE_APP_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include "StatisticsMessagePort.h"

/**
 * StatisticsServiceApp must inherit from ServiceApp class
 * which provides basic features necessary to define an ServiceApp.
 */
class StatisticsServiceApp
	: public Tizen::App::ServiceApp
{
public:

	/**
	 * ServiceApp must have a factory method that creates an instance of itself.
	 */
	static Tizen::App::ServiceApp* CreateInstance(void);

	StatisticsServiceApp(void);

	virtual ~StatisticsServiceApp(void);

	virtual bool OnAppInitializing(Tizen::App::AppRegistry& appRegistry);

	virtual bool OnAppInitialized(void); 

	virtual bool OnAppWillTerminate(void);

	virtual bool OnAppTerminating(Tizen::App::AppRegistry& appRegistry, bool forcedTermination = false);

	virtual void OnLowMemory(void);

	virtual void OnBatteryLevelChanged(Tizen::System::BatteryLevel batteryLevel);

	virtual void OnUserEventReceivedN(RequestId requestId, Tizen::Base::Collection::IList* pArgs);

private:
	StatisticsMessagePort* __pMessagePort;
};

#endif // _STATISTICS_SERVICE_APP_H_
