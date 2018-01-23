/*
 * StatisticsCalculator.h
 *
 *  Created on: Nov 10, 2013
 *      Author: yskim
 */
#ifndef STATISTICS_CALCULATOR_H_
#define STATISTICS_CALCULATOR_H_

#include <unique_ptr.h>
#include <vector>
#include <FBaseRt.h>

class StatisticsCalculator
    : private Tizen::Base::Runtime::EventDrivenThread
{
private:
    struct ResponseEventArg
        : public Tizen::Base::Runtime::IEventArg
    {
        int sum;
        double avg;
    };

    class ResponseEvent
        : public Tizen::Base::Runtime::Event
    {
    public:
        StatisticsCalculator* pCalc;

    protected:
        virtual void FireImpl(
            Tizen::Base::Runtime::IEventListener& listener,
            const Tizen::Base::Runtime::IEventArg& arg
            );
    };

    struct RequestEventArg
        : public Tizen::Base::Runtime::IEventArg
    {
        std::unique_ptr< std::vector< int > > pData;
        Tizen::Base::Runtime::Event* pResponseEvent;
    };

    class RequestListener
        : public Tizen::Base::Runtime::IEventListener
    {
    public:
        void OnRequestReceived(const RequestEventArg& arg);
    };

    class RequestEvent
        : public Tizen::Base::Runtime::Event
    {
    protected:
        virtual void FireImpl(
            Tizen::Base::Runtime::IEventListener& listener,
            const Tizen::Base::Runtime::IEventArg& arg
            );
    };

    virtual void OnUserEventReceivedN(
        RequestId reqId,
        Tizen::Base::Collection::IList* pArgs
        );
    virtual bool OnStart();
    virtual void OnStop();

public:
    using Tizen::Base::Runtime::EventDrivenThread::Quit;
    using Tizen::Base::Runtime::EventDrivenThread::Join;

    struct IResponseListener
        : public Tizen::Base::Runtime::IEventListener
    {
        virtual void OnResponseReceived(int sum, double average) = 0;
    };

	StatisticsCalculator();
	virtual ~StatisticsCalculator();
    result Construct();
    void CalculateAsync(
        std::unique_ptr< std::vector< int > > pData,
        IResponseListener& listener
        );

private:
    void CalculationDone(IResponseListener& listener);

    std::unique_ptr< RequestEvent > __pRequestEvent;
    std::unique_ptr< RequestListener > __pRequestListener;
    std::unique_ptr< ResponseEvent > __pResponseEvent;
};

#endif /* STATISTICS_CALCULATOR_H_ */
