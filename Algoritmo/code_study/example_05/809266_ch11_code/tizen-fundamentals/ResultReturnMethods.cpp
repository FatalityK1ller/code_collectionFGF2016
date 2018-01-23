// Result return method
#include <FBase.h>

String str = ...;
int pos = 0;
result r = str.IndexOf(L"search_string", 0, pos);
if (r != E_SUCCESS) // if (IsFailed(r))
{
    // error handling
}

// Last result return method
#include <FBase.h>

IList* pList1 = ..., pList2 = ...;
ClearLastResult();
bool contained = pList1->ContainsAll(*pList2);
result r = GetLastResult();
if (r != E_SUCCESS) // if (IsFailed(r))
{
    // error handling
}

