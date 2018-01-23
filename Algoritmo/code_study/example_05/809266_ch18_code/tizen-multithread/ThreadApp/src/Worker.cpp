/*
 * Worker.cpp
 *
 *  Created on: Nov 9, 2013
 *      Author: ys71.kim
 */

#include <vector>
#include <numeric>
#include <unique_ptr.h>
#include <FBase.h>
#include "Worker.h"

using Tizen::Base::Runtime::MutexGuard;
using std::unique_ptr;
using std::vector;
using std::accumulate;

Worker::Worker()
    : __m(), __mon(), __req(REQ_TYPE_NONE)
    , __pData(), __running(false), __r()
{
    __m.Create();
    __mon.Construct();
}

Worker::~Worker()
{
}

unique_ptr< vector< int > >
Worker::CalculateAsync(unique_ptr< vector< int > > pData)
{
    MutexGuard lck(__m);
    if (__running)
    {
        AppLogTag("PTAP", "Thread is busy. returning the original data intact");
        return move(pData);
    }
    __pData = move(pData);
    __req = REQ_TYPE_CALC;
    __mon.Notify();
    return unique_ptr< vector< int > >();
}

bool
Worker::IsDone() const
{
    MutexGuard lck(__m);
    return !__running;
}

Result
Worker::Get() const
{
    MutexGuard lck(__m);
    return __r;
}

void
Worker::Quit()
{
    MutexGuard lck(__m);
    __req = REQ_TYPE_QUIT;
    __mon.Notify();
}

Tizen::Base::Object*
Worker::Run()
{
    AppLogTag("PTAP", "Running...");
    while (true)
    {
        AppLogTag("PTAP", "Waiting a request...");
        __mon.Wait();
        AppLogTag("PTAP", "Received a request: %d", __req);
        {
            MutexGuard lck(__m);
            __running = true;

            if (__req == REQ_TYPE_QUIT)
            {
                lck.Unlock();
                AppLogTag("PTAP", "exiting...");
                break;
            }
            else if (__req == REQ_TYPE_CALC)
            {
                unique_ptr< vector < int > > pData = std::move(__pData);
                lck.Unlock();
                CalculateImpl(std::move(pData));
            }
            else
            {
                lck.Unlock();
                AppAssert(!"unknown command");
            }
        }
    }

    return null;
}

void
Worker::CalculateImpl(unique_ptr< vector < int > > pData)
{
    AppLogTag("PTAP", "calculating...");
    int sum = accumulate(pData->begin(), pData->end(), 0);
    double avg = static_cast< double >(sum) / pData->size();
    {
        MutexGuard lck(__m);
        __r.sum = sum;
        __r.avg = avg;
        __req = REQ_TYPE_NONE;
        __running = false;
    }
    AppLogTag(
        "PTAP", "calculation done: sum = %d, average = %f",
        __r.sum, __r.avg
        );
}

