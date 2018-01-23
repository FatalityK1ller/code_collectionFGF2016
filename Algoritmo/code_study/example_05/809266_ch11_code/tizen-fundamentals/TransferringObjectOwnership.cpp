// A method transferring object ownership
class Searcher
{
public:
    IList* SearchN(const String& criteria) const;
    // Other methods declared here
};

IList*
Searcher::SearchN(const String& criteria)
{
    // Stores search results matched to criteria to the list
    ArrayList* pList = new (std::nothrow) ArrayList();

    // Add the search results to the list
    //
    return pList;
}

void
MyClass::SomeMethod(void)
{
    Searcher searcher;
    IList* pList = searcher.SearchN(L"Most popular");
    // Delete the list in the caller side
    delete pList;
}

void
MyClass::SomeMethod(void)
{
    Searcher searcher;
    unique_ptr< IList > pList(searcher.SearchN(L"Most popular"));
    // Use pList
} // unique_ptr's destructor will release IList instance

// A callback which is given object ownership #1
void
SampleUiApp::OnUserEventReceivedN(RequestId requestId, IList* pArgs)
{
    // pArgs has been passed with ownership
    result r = E_SUCCESS;

    ... // Use pArgs

    // Delete the object
    delete pArgs;
}

// A callback which is given object ownership #2
void
SampleUiApp::OnUserEventReceivedN(RequestId requestId, IList* pArgs)
{
    // pArgs has been passed with object ownership
    unique_ptr< IList > pList(pArgs);
    result r = E_SUCCESS;

    ... // Use pArgs
} // unique_ptr's destructor will release IList instance

