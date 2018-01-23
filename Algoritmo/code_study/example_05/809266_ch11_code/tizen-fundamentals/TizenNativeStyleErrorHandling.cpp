#include <new> // for 'std::nothrow'

void
YourClass::OnSomeEventReceived(result r)
{
    // your code
    char* pBuf = new (std::nothrow) char[MAX_BUF_SZ];
    if (!pBuf)
    {
        SetLastResult(E_OUT_OF_MEMORY);
        return;
    }
    result ret = SomeMethod();
    // other code
}

