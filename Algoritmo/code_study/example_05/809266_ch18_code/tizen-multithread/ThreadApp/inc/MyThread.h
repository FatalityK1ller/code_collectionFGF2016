/*
 * MyThread.h
 *
 *  Created on: Nov 3, 2013
 *      Author: yskim
 */

#ifndef MYTHREAD_H_
#define MYTHREAD_H_

#include <unique_ptr.h>
#include <vector>
#include <FBaseRt.h>

struct AddEventArg
    : public Tizen::Base::Runtime::IEventArg
{
    std::vector< int > vi;
    Tizen::Base::Runtime::Event* pEvent;
};

class AddEventListener
    : public Tizen::Base::Runtime::IEventListener
{
public:
    void OnAddEventReceived(const AddEventArg& pArg);
};

class AddEvent
    : public Tizen::Base::Runtime::Event
{
protected:
    virtual void FireImpl(Tizen::Base::Runtime::IEventListener& listener, const Tizen::Base::Runtime::IEventArg& arg)
    {
        AddEventListener* pListener = dynamic_cast< AddEventListener* >(&listener);
        pListener->OnAddEventReceived(dynamic_cast< const AddEventArg& >(arg));
    }
};

class MyThread
    : public Tizen::Base::Runtime::EventDrivenThread
{
public:
    MyThread();
    ~MyThread();
    result Construct();
    virtual bool OnStart();
    virtual void OnStop();
    virtual void OnUserEventReceivedN(
        RequestId reqId,
        Tizen::Base::Collection::IList* pArgs
        );

    AddEvent* GetEvent() const
    {
        return __pAddEvent.get();
    }

private:
    std::unique_ptr< AddEvent > __pAddEvent;
    std::unique_ptr< AddEventListener > __pAddEventListener;
};

#endif /* MYTHREAD_H_ */
