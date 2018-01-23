// Base exception class
#include <exception> // for 'std::exception' type
#include <FBase.h> // for 'result' type

class YourExceptionBase
    : public std::exception
{
public:
    virtual const char* what() const;
    virtual result GetResult() const;
};

// Exception fence
void
YourClass::OnSomeEventReceived(result r)
{
    try
    {
        // your code
        char* pBuf = new char[MAX_BUF_SZ]; // use of plain new
        SomeMethodThrowingYourException();
        // other code
    }
    catch (const YourExceptionBase& yourEx)
    {
        // exception handling
        SetLastResult(yourEx.GetResult());
    }
    catch (const std::bad_alloc& oomEx)
    {
        // exception handling
        SetLastResult(E_OUT_OF_MEMORY);
    }
    // You can map each standard exception into Tizen native framework's exception
    catch (const std::exception& stdEx)
    {
        // uncaught standard exception, which can not be mapped to
        // Tizen native framework's exception, reaches here
        SetLastResult(E_UNKNOWN);
    }
    catch (...)
    {
        // absorbs other unknown exceptions
        SetLastResult(E_UNKNOWN);
    }
}

