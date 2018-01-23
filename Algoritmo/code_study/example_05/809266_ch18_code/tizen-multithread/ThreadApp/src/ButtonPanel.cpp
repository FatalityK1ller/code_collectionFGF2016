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

#include <new>
#include <algorithm>
#include <vector>
#include <unique_ptr.h>
#include <FBase.h>

#include "ButtonPanel.h"
#include "MyThread.h"
#include "Worker.h"
#include "YourWidget.h"
#include "StatisticsCalculator.h"

using namespace Tizen::Base;
using namespace Tizen::Ui::Controls;
using namespace Tizen::Graphics;
using Tizen::Base::Runtime::Thread;
using Tizen::Base::Runtime::Timer;
using Tizen::Base::Runtime::ITimerEventListener;
using Tizen::Base::Collection::ArrayList;
using std::unique_ptr;
using std::vector;

ButtonPanel::ButtonPanel(void)
	: __pLabel(null)
    , __pMyThread()
    , __pSumEvent()
    , __pSumEventListener(new SumEventListener())
{
}

ButtonPanel::~ButtonPanel(void)
{
}

result
ButtonPanel::Initialize(const Tizen::Graphics::Rectangle& rect)
{
	return Panel::Construct(rect);
}

result
ButtonPanel::OnInitializing(void)
{
	// Create a Label
	__pLabel = new (std::nothrow) Label();
	__pLabel->Construct(Rectangle(45, 190, 600, 80), L"Button");
	__pLabel->SetName(L"Label1");
	__pLabel->SetTextVerticalAlignment(ALIGNMENT_MIDDLE);
	__pLabel->SetTextHorizontalAlignment(ALIGNMENT_LEFT);
	result r = AddControl(__pLabel);

	// Create a Button
	Button *pButton = new (std::nothrow) Button();
	pButton->Construct(Rectangle(20, 290, 680, 160));
	pButton->SetText(L"Change Text");
	pButton->SetActionId(ID_BUTTON);
	pButton->AddActionEventListener(*this);
	r = AddControl(pButton);

    AppLogTag("PTAP", "Starting thread...");
	__pMyThread.reset(new MyThread());
	__pMyThread->Construct();
	r = __pMyThread->Start();
	TryReturnTag("PTAP", r == E_SUCCESS, r, "[%s] error occurred", GetErrorMessage(r));
    AppLogTag("PTAP", "Thread successfully started");

    AppLogTag("PTAP", "Creating event...");
    __pSumEvent.reset(new SumEvent());
    r = __pSumEvent->AddListener(*__pSumEventListener);
    TryLogTag("PTAP", r == E_SUCCESS, "[%s] error occurred for AddListener", GetErrorMessage(r));
    AppLogTag("PTAP", "SumEvent successfully created");

    __pYourWidget.reset(new YourWidget());
    __pYourWidget->Construct();

    AppLogTag("PTAP", "Creating a statistics calculator");
    __pStatisticsCalculator.reset(new StatisticsCalculator());
    r = __pStatisticsCalculator->Construct();
    TryReturnTag("PTAP", r == E_SUCCESS, r, "[%s] error occurred", GetErrorMessage(r));
    AppLogTag("PTAP", "Thread successfully created");

	return r;
}

result
ButtonPanel::OnTerminating(void)
{
    AppLogTag("PTAP", "Terminating thread...");
    __pMyThread->Quit();
    __pMyThread->Join();
    //__pStatisticsCalculator->Quit();
    //__pStatisticsCalculator->Join();
    AppLogTag("PTAP", "Thread terminated");
    return E_SUCCESS;
}

void
ButtonPanel::OnResponseReceived(int sum, double average)
{
    AppLogTag("PTAP", "sum = %d, average = %f", sum, average);
}

void
SimpleWorkerExample()
{
    static const int NELEM = 10000000;

    AppLogTag("PTAP", "Creating a simple worker");
    unique_ptr< vector< int > > pData3(new vector< int >(NELEM));
    pData3->assign(NELEM, 3);
    unique_ptr< SimpleWorker > pSimpleWorker(new SimpleWorker(std::move(pData3)));
    pSimpleWorker->Construct();
    pSimpleWorker->Start();
    AppLogTag("PTAP", "Thread successfully created");
    pSimpleWorker->Join();
    AppLogTag(
        "PTAP", "sum = %d, average = %f",
        pSimpleWorker->GetSum(),
        pSimpleWorker->GetAverage()
        );
}

void
ButtonPanel::OnActionPerformed(const Tizen::Ui::Control& source, int actionId)
{
	switch(actionId)
	{
	case ID_BUTTON:
		{
			__pLabel->SetText(L"Button is clicked!");
			AppLog("Button is pressed! \n");
            static const int NELEM = 10000000;

#if 0
			SimpleWorkerExample();

			// EventDrivenThread
			result r = __pMyThread->SendUserEvent(0, null);
			TryLogTag("PTAP", r == E_SUCCESS, "[%s] error occurred", GetErrorMessage(r));

			// Prepare event data for MyThread
			AddEventArg* pArg = new AddEventArg();
			pArg->vi.reserve(NELEM);
			pArg->vi.assign(NELEM, 3);
			pArg->pEvent = __pSumEvent.get();
            // Send the request to event driven thread
            __pMyThread->GetEvent()->Fire(*pArg);

            __pYourWidget->Run();
#endif

			// Prepare request for StatisticsCalculator
            unique_ptr< vector< int > > pData2(new vector< int >(NELEM));
            pData2->assign(NELEM, 3);
            __pStatisticsCalculator->CalculateAsync(std::move(pData2), *this);
		}
		break;
	}
	Invalidate(true);
}

