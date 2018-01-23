/*
 * SimpleWorker.h
 *
 *  Created on: Nov 11, 2013
 *      Author: yskim
 */

#ifndef SIMPLE_WORKER_H_
#define SIMPLE_WORKER_H_

#include <vector>
#include <unique_ptr.h>
#include <FBase.h>

class SimpleWorker
    : public Tizen::Base::Runtime::Thread
{
public:
    SimpleWorker(std::unique_ptr< std::vector< int > > pData);
    result Construct();
    virtual ~SimpleWorker();
    int GetSum() const;
    double GetAverage() const;

private:
    virtual Tizen::Base::Object* Run();

    std::unique_ptr< std::vector< int > > __pData;
    int __sum;
    double __avg;
};

#endif /* SIMPLE_WORKER_H_ */
