#include <unique_ptr.h>
#include <FBase.h>

using namespace Tizen::Base;
using namespace Tizen::Base::Collection;

// Listing 11-4
void
YourClass::ArrayListSample(void)
{
    ArrayList list(SingleObjectDeleter); // (1)

    list.Add(new Integer(1)); // (2) 1
    list.Add(new Integer(2)); // (2) 1,2
    list.Add(new Integer(3)); // (2) 1,2,3

    Integer* pInt = static_cast< Integer* >(list.GetAt(0)); // (3)

    if (pInt->Equals(Integer(1)))
    {
        AppLogTag("PTAP", "Apparently Integer(1) is stored at index 0");
    }
    else
    {
        AppAssertf(false, "Cannot reach here!");
    }

    list.InsertAt(new Integer(4), 1); // (4) 1,4,2,3
    list.Remove(Integer(3)); // (5) 1,4,2
    list.RemoveAt(0); // (6) 4,2

    if (list.IsRandomAccessible()) // (7)
    {
        list.Sort(IntegerComparer()); // (8) 2,4
    }

    // Uses an enumerator to access elements in the list
    std::unique_ptr< IEnumerator > pEnum = list.GetEnumeratorN(); // (9)
    Object* pObj = null;
    while (pEnum->MoveNext() == E_SUCCESS) // (10)
    {
        Integer* pInt2 = static_cast< Integer* >(pEnum->GetCurrent()); // (11)
        AppLogTag("PTAP", "Integer value = %d", pInt2->value);
    }
} // (12)

// Listing 11-5
void
MyClass::HashMapSample(void)
{
    HashMap map(SingleObjectDeleter); // (1)

    // Constructs a HashMap instance with default capacity,
    // load factor, hash code provider, and comparer
    map.Construct(); // (2)

    map.Add(new String(L"Zero"),
            new Integer(0)); // (3) ({Zero:0})
    map.Add(new String(L"One"),
            new Integer(1)); // (3) ({Zero:0},{one:1})
    map.Add(new String(L"Two"),
            new Integer(2)); // (3) ({Zero:0},{one:1},{Two:2})

    // (4) Gets a value with the specified key
    Integer* pValue = static_cast< Integer* >(map.GetValue(String(L"Zero")));

    // (5) Removes the value with the specified key
    map.Remove(String(L"Zero")); // ({one:1},{Two:2})

    // (6) Uses a map enumerator to access elements in the map
    std::unique_ptr< IMapEnumerator > pMapEnum = map.GetMapEnumeratorN();
    String* pKey = null;
    while (pMapEnum->MoveNext() == E_SUCCESS) // (7)
    {
        pKey = static_cast< String* >(pMapEnum->GetKey()); // (8)
        pValue = static_cast< Integer* >(pMapEnum->GetValue()); // (9)
        AppLogTag("PTAP", "%ls = %d", pKey->GetPointer(), pValue->value);
    }
} // (10)

// Listing 11-6
void
MyClass::MultiHashMapSample(void)
{
    MultiHashMap map(SingleObjectDeleter); // (1)

    // Constructs a MultiHashMap instance with default values for
    // capacity, load factor, hash code provider, and comparer
    map.Construct(); // (2)

    map.Add(new String(L"Zero"),
            new Integer(0)); // (3) {Zero:0}
    map.Add(new String(L"One"),
            new Integer(1)); // (3) {Zero:0},{One:1}
    map.Add(new String(L"Two"),
            new Integer(2)); // (3) {Zero:0},{One:1},{Two:2}
    map.Add(new String(L"Two"),
            new Integer(20)); // (3) {Zero:0},{One:1},{Two:2,20}

    Integer* pValue = null;
    // (4) Gets values with the specified key
    unique_ptr< IEnumerator > pValueEnum(map.GetValuesN(String(L"Two")));
    while(pValueEnum->MoveNext() == E_SUCCESS)
    {
        pValue = static_cast< Integer* > (pValueEnum->GetCurrent());
        AppLogTag("PTAP", "Two ==> %d", pValue->value);
    }

    // (5) Removes values with the specified key
    map.Remove(String(L"Two")); // {Two:2,20} removed

    // (6) Uses an enumerator to access elements in the map
    unique_ptr< IMapEnumerator > pMapEnum(map.GetMapEnumeratorN());
    String* pKey = null;
    while (pMapEnum->MoveNext() == E_SUCCESS) // (7)
    {
        pKey = static_cast< String* > (pMapEnum->GetKey()); // (8)
        pValue = static_cast< Integer* > (pMapEnum->GetValue()); // (9)
        AppLogTag("PTAP", "%ls ==> %d", pKey->GetPointer(), pValue->value);
    }
} // (10)

