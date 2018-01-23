// Traditional resource cleanup
char*
ReadFile(const char* pFilePath)
{
    FILE* pFile = fopen(pFilePath, "r");
    if (!pFile)
    {
        return null;
    }

    fseek(pFile, 0L, SEEK_END);
    long sz = ftell(pFile);
    fseek(pFile, 0L, SEEK_SET);

    char* pData = new (std::nothrow) char[sz];
    if (!pData)
    {
        fclose(pFile); // For pFile
        return null;
    }

    fread(pData, sizeof(char), sz, pFile);
    if (ferror(pFile))
    {
        delete [] pData; // For pData
        fclose(pFile); // For pFile
        return null;
    }

    fclose(pFile); // For pFile
    return pData;
}

// Tizen native-style resource cleanup
char*
ReadFile(const char* pFilePath)
{
    FILE* pFile = fopen(pFilePath, "r");
    TryReturnTag(
        "PTAP", pFile,
        null, "Failed to open file %s", pFilePath
        );

    fseek(pFile, 0L, SEEK_END);
    long sz = ftell(pFile);
    fseek(pFile, 0L, SEEK_SET);

    char* pData = new (std::nothrow) char[sz];
    TryCatchTag("PTAP", pData, , "Memory allocation failure");

    fread(pData, sizeof(char), sz, pFile);
    TryCatchTag("PTAP", !ferror(pFile),
    delete [] pData, "Failed to read file");

    fclose(pFile); // For pFile
    return pData;

CATCH:
    fclose(pFile); // For pFile
    return null;
}

// RAII-style resource cleanup
char*
ReadFile(const char* pFilePath)
{
    File file; // (1)
    result r = file.Construct(pFilePath, "r"); // (1)
    TryReturnTag(
        "PTAP", r == E_SUCCESS,
        null, "Failed to open file %s", pFilePath
        );

    file.Seek(FILESEEKPOSITION_END, 0L);
    int sz = file.Tell();
    file.Seek(FILESEEKPOSITION_BEGIN, 0L);

    unique_ptr< char[] > pData(new (std::nothrow) char[sz]); // (2)
    TryReturnTag("PTAP", pData, null, "Memory allocation failure");

    file.Read(pData[0], sz);
    TryReturnTag(
        "PTAP", GetLastResult() == E_SUCCESS,
        null, "Failed to read file"
        ); // (3)
    // fclose(pFile); (4)
    return pData.release(); // (5)

// CATCH: (3)
    // fclose(pFile);
    // return null;
} // (6)

