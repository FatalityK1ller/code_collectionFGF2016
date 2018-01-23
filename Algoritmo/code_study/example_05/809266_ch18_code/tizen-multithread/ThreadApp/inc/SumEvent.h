/*
 * SumEvent.h
 *
 *  Created on: Nov 9, 2013
 *      Author: yskim
 */

#ifndef SUM_EVENT_H_
#define SUM_EVENT_H_

#include <FBaseRt.h>

class SumEvent;

struct SumEventArg
    : public Tizen::Base::Runtime::IEventArg
{
    int sum;
    double avg;
};

class SumEventListener
    : public Tizen::Base::Runtime::IEventListener
{
public:
    void OnSumEventReceived(const SumEventArg& arg);
};

class SumEvent
    : public Tizen::Base::Runtime::Event
{
protected:
    virtual void FireImpl(Tizen::Base::Runtime::IEventListener& listener, const Tizen::Base::Runtime::IEventArg& arg)
    {
        SumEventListener* pListener = dynamic_cast< SumEventListener* >(&listener);
        pListener->OnSumEventReceived(dynamic_cast< const SumEventArg& >(arg));
    }
};

#endif /* SUM_EVENT_H_ */
