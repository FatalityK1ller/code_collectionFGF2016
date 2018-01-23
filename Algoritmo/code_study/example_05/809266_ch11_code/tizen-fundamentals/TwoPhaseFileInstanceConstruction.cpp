File file;
String filePath(L"data/list.txt");
result r = file.Construct(filePath, "r"); // open the file in read-only mode
TryReturnTag(
    "PTAD", r == E_SUCCESS,
    "[%ls] Failed to open file(%ls)",
    GetErrorMessage(r), filePath.GetPointer()
    );
// Now you can use 'file' object

