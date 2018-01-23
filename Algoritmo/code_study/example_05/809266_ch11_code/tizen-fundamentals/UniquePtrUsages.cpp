// Basic unique_ptr usage
#include <cassert>
#include <iostream>
#include <unique_ptr.h> // (1)

// A basic class
class Foo
{
public:
    Foo()
    {
    std::cout << "Foo() called" << std::endl;
    }

    ~Foo()
    {
    std::cout << "~Foo() called" << std::endl;
    }
};

void
SomeFunction(void)
{
    // Declare and allocate the Foo class with a unique pointer
    std::unique_ptr< Foo > foo(new (std::nothrow) Foo());

    // Dynamic array with a unique pointer
    std::unique_ptr< Foo[] > foo(new (std::nothrow) Foo[2]());

    ...
} // Before leaving this function, the destructor of each unique_ptr instance is
  // called and the objects allocated by the Foo() and Foo[2] are released

// Releasing unique_ptr's resource
IEnumerator*
ArrayList::GetEnumeratorN(void) const
{
    unique_ptr< _ArrayListEnumerator > pEnum(
        new (std::nothrow) _ArrayListEnumerator(*this, __modCount)
        );
    TryReturnTag(
        "PTAD", pEnum != null,
        null, E_OUT_OF_MEMORY, "[E_OUT_OF_MEMORY]"
        );
    SetLastResult(E_SUCCESS);
    return pEnum.release();
}

// A class with a unique_ptr member variable
class ExampleClass
{
public:
    ...

private:
    unique_ptr< Index > __pRootIndex; // Declaration with unique_ptr
                                      // instead of "Index* __pRootIndex;"
};

// Constructor for a class with a unique_ptr member variable
ExampleClass::ExampleClass(void)
    : __pRootIndex(new (std::nothrow) Index)
{
    TryReturnVoidTag(
        "PTAD", __pRootIndex.get(),"[%s] Memory allocation failed.",
        GetErrorMessage(E_OUT_OF_MEMORY)
        );
};

// Destructor for a class with a unique_ptr member variable
ExampleClass::~ExampleClass(void)
{
    // delete __pRootIndex; // This statement can be removed
    // __pRootIndex = null; // This statement can be removed
};

// Moving a resource of unique_ptr
void
ExampleClass::Update(void)
{
    unique_ptr< Index > pTmpRootIndex(new (std::nothrow) Index);

    // do all necessary work with pTmpRootIndex
    //
    __pRootIndex = std::move(pTmpRootIndex); //take ownership of the object managed
                                             // by pTmpRootIndex.
}

// Custom deleter for unique_ptr
struct
FileDeleter
{
    void operator()(FILE* pFile)
    {
        fclose(pFile);
    }
};
unique_ptr< FILE, FileDeleter > pFile(fopen("data/list.txt", "r");

