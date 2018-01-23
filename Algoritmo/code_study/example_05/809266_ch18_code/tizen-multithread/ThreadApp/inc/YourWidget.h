/*
 * YourWidget.h
 *
 *  Created on: Nov 12, 2013
 *      Author: yskim
 */

#ifndef YOUR_WIDGET_H_
#define YOUR_WIDGET_H_

#include <unique_ptr.h>
#include <FBaseRt.h>
#include "Worker.h"

class YourWidget
    : public Tizen::Base::Runtime::ITimerEventListener
{
public:
    YourWidget();
    void Construct();
    virtual ~YourWidget();
    void Run();
    virtual void OnTimerExpired(Tizen::Base::Runtime::Timer& timer);

private:
    bool CheckCalcResult();

    std::unique_ptr< Worker > __pWorker;
    std::unique_ptr< Tizen::Base::Runtime::Thread > __pThread;
    Tizen::Base::Runtime::Timer __timer;
};

#endif /* WORKER_CLIENT_EXAMPLE_H_ */
