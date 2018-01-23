/*
 * Worker.h
 *
 *  Created on: Nov 9, 2013
 *      Author: ys71.kim
 */
#ifndef WORKER_H_
#define WORKER_H_

#include <unique_ptr.h>
#include <vector>
#include <FBase.h>

struct Result
{
    int sum;
    double avg;
};

class Worker
    : public Tizen::Base::Runtime::IRunnable
{
public:
    Worker();
    virtual ~Worker();
    std::unique_ptr< std::vector< int > > CalculateAsync(
        std::unique_ptr< std::vector< int > > pData
        );
    bool IsDone() const;
    Result Get() const;
    void Quit();

private:
    virtual Tizen::Base::Object* Run();
    void CalculateImpl(std::unique_ptr< std::vector< int > > pData);

    enum ReqType
    {
        REQ_TYPE_NONE,
        REQ_TYPE_CALC,
        REQ_TYPE_QUIT
    };

    // mutex for __req, __pData, __running, __r
    mutable Tizen::Base::Runtime::Mutex __m;
    Tizen::Base::Runtime::Monitor __mon;
    ReqType __req;
    std::unique_ptr< std::vector< int > > __pData;
    bool __running;
    Result __r;
};

#endif /* WORKER_H_ */
