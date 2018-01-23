/*
 * YourWidget.cpp
 *
 *  Created on: Nov 12, 2013
 *      Author: yskim
 */

#include <vector>
#include <numeric>
#include <unique_ptr.h>
#include <FBaseRt.h>
#include "YourWidget.h"

using std::unique_ptr;
using std::vector;
using std::accumulate;
using Tizen::Base::Runtime::Thread;
using Tizen::Base::Runtime::Timer;

YourWidget::YourWidget()
    : __pWorker(new Worker())
    , __pThread(new Thread())
{
}

void
YourWidget::Construct()
{
    __pThread->Construct(*__pWorker);
    __timer.Construct(*this);
    __pThread->Start();
}

YourWidget::~YourWidget()
{
    __pWorker->Quit();
    __pThread->Join();
}

void
YourWidget::Run()
{
    // Prepare worker thread data
    static const int NELEM = 10000000;
    unique_ptr< vector< int > > pData(new vector< int >(NELEM));
    pData->assign(NELEM, 3);

    // WorkerThread
    __pWorker->CalculateAsync(std::move(pData));
    __timer.StartAsRepeatable(100);
}

bool
YourWidget::CheckCalcResult()
{
    if (__pWorker->IsDone())
    {
        Result r = __pWorker->Get();
        AppLogTag("PTAP", "sum = %d, average = %f", r.sum, r.avg);
        return true;
    }
    else
    {
        AppLogTag("PTAP", "Calculation not yet done.");
        return false;
    }
}

void
YourWidget::OnTimerExpired(Timer& timer)
{
    AppLogTag("PTAP", "Entered");
    if (CheckCalcResult())
    {
        timer.Cancel();
    }
}
