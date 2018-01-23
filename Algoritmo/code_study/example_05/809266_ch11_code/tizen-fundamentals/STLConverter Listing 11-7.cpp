#include <vector>
#include <tr1/unordered_map.h>
#include <algorithm>
#include <unique_ptr.h>
#include <FBase.h>

using namespace std;
using namespace std::tr1;
using namespace Tizen::Base;
using namespace Tizen::Base::Collection;

bool IsOdd(Integer* pInt)
{
    return (pInt->ToInt() % 2) == 1;
}

void InitializeList(IList& list, int elemCnt)
{
    for (int i = 0; i < elemCnt; ++i)
    {
        list.Add(new Integer(i));
    }
}

// (3)
void PrintVec(const vector< Integer* >& v1)
{
    for (vector< Integer* >::const_iterator i = v1.begin();
         i != v1.end(); ++i)
    {
        AppLogTag("PTAP", "%d", (*i)->ToInt());
    }
}

// (7)
void PrintList(const IList* pList)
{
    unique_ptr< IEnumerator > pEnum(pList->GetEnumeratorN());
    while (pEnum->MoveNext() == E_SUCCESS)
    {
        AppLogTag(
            "PTAP", "%d",
            static_cast< Integer* >(pEnum->GetCurrent())->ToInt()
            );
    }
}

// (9)
template <>
struct hash<String *>
{
    size_t operator()(String* pStr) const
    {
        return static_cast< size_t >(pStr->GetHashCode());
    }
};

// (10)
void PrintMap(const IMap* pMap)
{
    unique_ptr< IMapEnumerator > pEnum(pMap->GetMapEnumeratorN());
    while (pEnum->MoveNext() == E_SUCCESS)
    {
        AppLogTag(
            "PTAP", "%ls = %d",
            static_cast< String* >(pEnum->GetKey())->GetPointer(),
            static_cast< Integer* >(pEnum->GetValue())->ToInt()
            );
    }
}

void
MyClass::StlConverterSample()
{
    // (1) Initialise a LinkedList
    LinkedList list;
    InitializeList(list, 10); // {0,1,2,...,9}

    // (2) vector can be created through IteratorT
    vector< Integer* > v1(
        StlConverter::GetBeginIterator< Integer* >(&list),
        StlConverter::GetEndIterator< Integer* >(&list)
        );

    // (3)
    PrintVec(v1);

    // (4)
    vector< Integer* >::iterator pos =
        find_if(
            StlConverter::GetBeginIterator< Integer* >(&list),
            StlConverter::GetEndIterator< Integer* >(&list),
            IsOdd
            );
    AppAssert(IsOdd(*pos));

    // (4)
    int cnt =
        count_if(
            StlConverter::GetBeginIterator< Integer* >(&list),
            StlConverter::GetEndIterator< Integer* >(&list),
            IsOdd
            );
    AppAssert(cnt == 5);

    // (5) The case of conversion from STL Container to Collection
    vector< Integer* > v2;

    v2.push_back(new Integer(1));
    v2.push_back(new Integer(2));
    v2.push_back(new Integer(3));

    // (6)
    unique_ptr< ArrayList > pList(
        StlConverter::GetArrayListN(
            v2.begin(), v2.end(), NoOpDeleter
            )
        );

    // (7)
    PrintList(pList.get());

    // (8)
    for (vector< Integer* >::iterator i = v2.begin();
         i != v2.end(); ++i)
    {
        delete *i;
    }

    // (9)
    unordered_map< String*, Integer* > m1;
    m1.insert(make_pair(new String(L"One"), new Integer(1)));
    m1.insert(make_pair(new String(L"Two"), new Integer(2)));
    m1.insert(make_pair(new String(L"Three"), new Integer(3)));
    unique_ptr< HashMap > pMap(
        StlConverter::GetHashMapN(
            m1.begin(), m1.end(), SingleObjectDeleter
            )
        );

    // (10)
    PrintMap(pMap.get())
}

