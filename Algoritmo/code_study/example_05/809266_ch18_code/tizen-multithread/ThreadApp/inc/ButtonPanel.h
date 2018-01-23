//
// Copyright (c) 2012 Samsung Electronics Co., Ltd.
//
// Licensed under the Flora License, Version 1.1 (the License);
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://floralicense.org/license/
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an AS IS BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef _BUTTON_PANEL_H_
#define _BUTTON_PANEL_H_

#include <unique_ptr.h>
#include <FGraphics.h>
#include <FUi.h>
#include <FBaseRt.h>
#include "MyThread.h"
#include "SumEvent.h"
#include "Worker.h"
#include "StatisticsCalculator.h"
#include "SimpleWorker.h"
#include "YourWidget.h"

class ButtonPanel
	: public Tizen::Ui::Controls::Panel
	, public Tizen::Ui::IActionEventListener
	, public StatisticsCalculator::IResponseListener
{
public:
	ButtonPanel(void);
	virtual ~ButtonPanel(void);

	result Initialize(const Tizen::Graphics::Rectangle& Rect);

	virtual result OnInitializing(void);
	virtual result OnTerminating(void);
	virtual void OnActionPerformed(const Tizen::Ui::Control& source, int actionId);
	virtual void OnResponseReceived(int sum, double average);

private:
	static const int ID_BUTTON = 101;

	Tizen::Ui::Controls::Label *__pLabel;
	std::unique_ptr< MyThread > __pMyThread;
	std::unique_ptr< SumEvent > __pSumEvent;
	std::unique_ptr< SumEventListener > __pSumEventListener;
	std::unique_ptr< YourWidget > __pYourWidget;
	std::unique_ptr< StatisticsCalculator > __pStatisticsCalculator;
};

#endif
