/*
 * SumEvent.cpp
 *
 *  Created on: Nov 9, 2013
 *      Author: yskim
 */

#include <unique_ptr.h>
#include "SumEvent.h"

void SumEventListener::OnSumEventReceived(const SumEventArg& arg)
{
    AppLogTag("PTAP", "sum = %d, average = %f", arg.sum, arg.avg);
}
