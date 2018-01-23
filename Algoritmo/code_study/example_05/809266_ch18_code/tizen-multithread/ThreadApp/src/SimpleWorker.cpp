/*
 * SimpleWorker.cpp
 *
 *  Created on: Nov 11, 2013
 *      Author: yskim
 */

#include <unique_ptr.h>
#include <vector>
#include <numeric>
#include <FBase.h>
#include "SimpleWorker.h"

using Tizen::Base::Runtime::Thread;

SimpleWorker::SimpleWorker(
    std::unique_ptr< std::vector< int > > pData
    )
    : __pData(std::move(pData))
{
}

result
SimpleWorker::Construct()
{
    return Thread::Construct();
}

SimpleWorker::~SimpleWorker()
{
}

Tizen::Base::Object*
SimpleWorker::Run()
{
    AppLogTag("PTAP", "Entered");
    __sum = std::accumulate(__pData->begin(), __pData->end(), 0);
    __avg = static_cast< double >(__sum) / __pData->size();
    AppLogTag(
        "PTAP", "sum = %d, average = %f", __sum, __avg
        );

    return null;
}

int
SimpleWorker::GetSum() const
{
    return __sum;
}

double
SimpleWorker::GetAverage() const
{
    return __avg;
}
