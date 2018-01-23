/*
 * MyThread.cpp
 *
 *  Created on: Nov 3, 2013
 *      Author: yskim
 */

#include <unique_ptr.h>
#include <numeric>
#include "MyThread.h"
#include "SumEvent.h"

MyThread::MyThread()
    : __pAddEvent()
    , __pAddEventListener(new AddEventListener())
{
}

MyThread::~MyThread()
{
}

result
MyThread::Construct()
{
    return EventDrivenThread::Construct();
}

bool
MyThread::OnStart()
{
    AppLogTag("PTAP", "Starting...");
    __pAddEvent.reset(new AddEvent());
    __pAddEvent->AddListener(*__pAddEventListener);
    return true;
}

void
MyThread::OnStop()
{
    AppLogTag("PTAP", "Stopping...");
}

void
MyThread::OnUserEventReceivedN(RequestId reqId, Tizen::Base::Collection::IList* pArgs)
{
    AppLogTag("PTAP", "Event received");
    delete pArgs;
}

void
AddEventListener::OnAddEventReceived(const AddEventArg& arg)
{
    AppLogTag("PTAP", "Entered");
    SumEventArg* pSum = new SumEventArg();
    pSum->sum = std::accumulate(arg.vi.begin(), arg.vi.end(), 0);
    pSum->avg = static_cast< double >(pSum->sum) / arg.vi.size();
    AppLogTag("PTAP", "Returning sum = %d & average = %f",
        pSum->sum, pSum->avg);
    arg.pEvent->Fire(*pSum);
}
