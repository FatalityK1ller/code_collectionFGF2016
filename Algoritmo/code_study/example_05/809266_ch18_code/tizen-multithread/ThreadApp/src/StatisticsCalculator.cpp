/*
 * StatisticsCalculator.cpp
 *
 *  Created on: Nov 10, 2013
 *      Author: yskim
 */
#include <unique_ptr.h>
#include <vector>
#include <numeric>
#include <FBase.h>
#include "StatisticsCalculator.h"

using Tizen::Base::Collection::IList;
using Tizen::Base::Collection::ArrayList;

void
StatisticsCalculator::RequestListener::OnRequestReceived(
    const RequestEventArg& arg
    )
{
    AppLogTag("PTAP", "Entered");
    ResponseEventArg* pSum = new ResponseEventArg();
    pSum->sum =
        std::accumulate(arg.pData->begin(), arg.pData->end(), 0);
    pSum->avg =
        static_cast< double >(pSum->sum) / arg.pData->size();
    AppLogTag(
        "PTAP", "Returning sum = %d & average = %f",
        pSum->sum, pSum->avg
        );
    arg.pResponseEvent->Fire(*pSum);
}

void
StatisticsCalculator::RequestEvent::FireImpl(
    Tizen::Base::Runtime::IEventListener& listener,
    const Tizen::Base::Runtime::IEventArg& arg
    )
{
    RequestListener* pListener =
        dynamic_cast< RequestListener* >(&listener);
    pListener->OnRequestReceived(
        dynamic_cast< const RequestEventArg& >(arg)
        );
}

void
StatisticsCalculator::ResponseEvent::FireImpl(
    Tizen::Base::Runtime::IEventListener& listener,
    const Tizen::Base::Runtime::IEventArg& arg
    )
{
    AppLogTag("PTAP", "Entered");
    IResponseListener* pListener =
        dynamic_cast< IResponseListener* >(&listener);
    const ResponseEventArg* pArg =
        dynamic_cast< const ResponseEventArg* >(&arg);
    pListener->OnResponseReceived(pArg->sum, pArg->avg);
    pCalc->CalculationDone(*pListener);
}

StatisticsCalculator::StatisticsCalculator()
    : __pRequestEvent()
    , __pRequestListener(new RequestListener())
    , __pResponseEvent(new ResponseEvent())
{
}

StatisticsCalculator::~StatisticsCalculator()
{
    Quit();
    Join();
}

result
StatisticsCalculator::Construct()
{
    AppLogTag("PTAP", "Creating thread...");
    result r = EventDrivenThread::Construct();
    TryReturnTag(
        "PTAP", r == E_SUCCESS, r,
        "[%s] error occurred for Start", GetErrorMessage(r)
        );
    r = Start();
    TryReturnTag(
        "PTAP", r == E_SUCCESS, r,
        "[%s] error occurred for Start", GetErrorMessage(r)
        );
    __pResponseEvent->pCalc = this;
    AppLogTag("PTAP", "Thread successfully started");

    return r;
}

bool
StatisticsCalculator::OnStart()
{
    AppLogTag("PTAP", "Starting...");
    __pRequestEvent.reset(new RequestEvent());
    AppLogTag("PTAP", "Registering request event callback");
    result r = __pRequestEvent->AddListener(*__pRequestListener);
    TryReturnTag(
        "PTAP", r == E_SUCCESS, false,
        "[%s] error occurred for AddListener", GetErrorMessage(r)
        );
    return true;
}

void
StatisticsCalculator::OnStop()
{
    AppLogTag("PTAP", "Stopping...");
}

void
StatisticsCalculator::CalculateAsync(
    std::unique_ptr< std::vector< int > > pData,
    IResponseListener& listener
    )
{
    AppLogTag("PTAP", "Entered");
    RequestEventArg* pArg = new RequestEventArg();
    pArg->pData = std::move(pData);
    pArg->pResponseEvent = __pResponseEvent.get();
    __pRequestEvent->Fire(*pArg);
    result r = __pResponseEvent->AddListener(listener);
    TryLogTag("PTAP", r == E_SUCCESS, "error occurred");
}

void
StatisticsCalculator::CalculationDone(IResponseListener& listener)
{
    AppLogTag("PTAP", "Entered");
    ArrayList* pList = new ArrayList();
    pList->Add(dynamic_cast< Object* >(&listener));
    AppLogTag("PTAP", "Request to remove the listener");
    SendUserEvent(0, pList);
}

void
StatisticsCalculator::OnUserEventReceivedN(
    RequestId reqId, IList* pArgs
    )
{
    std::unique_ptr< IList > pList(pArgs);
    IResponseListener* pListener =
        dynamic_cast< IResponseListener* >(pList->GetAt(0));
    result r = __pResponseEvent->RemoveListener(*pListener);
    TryLogTag("PTAP", r == E_SUCCESS, "error occurred");
    AppLogTag("PTAP", "Response listener removed");
}
