//
// Copyright (c) 2012 Samsung Electronics Co., Ltd.
//
// Licensed under the Flora License, Version 1.1 (the License);
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://floralicense.org/license/
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an AS IS BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include <new>
#include <vector>
#include <unique_ptr.h>
#include <FBase.h>
#include <FApp.h>
#include <FIo.h>
#include <FSystem.h>
#include <FText.h>
#include <FLocales.h>
#include "ButtonPanel.h"

using namespace std;
using namespace Tizen::Base;
using namespace Tizen::Base::Collection;
using namespace Tizen::App;
using namespace Tizen::Io;
using namespace Tizen::Ui::Controls;
using namespace Tizen::Graphics;
using namespace Tizen::System;
using namespace Tizen::Text;
using namespace Tizen::Locales;

ButtonPanel::ButtonPanel(void)
    : __pLabel(null)
{
}

ButtonPanel::~ButtonPanel(void)
{
}

result
ButtonPanel::Initialize(const Tizen::Graphics::Rectangle& rect)
{
    return Panel::Construct(rect);
}

result
ButtonPanel::OnInitializing(void)
{
    // Create a Label
    __pLabel = new (std::nothrow) Label();
    __pLabel->Construct(Rectangle(45, 190, 600, 80), L"Button");
    __pLabel->SetName(L"Label1");
    __pLabel->SetTextVerticalAlignment(ALIGNMENT_MIDDLE);
    __pLabel->SetTextHorizontalAlignment(ALIGNMENT_LEFT);
    result r = AddControl(__pLabel);

    // Create a Button
    Button *pButton = new (std::nothrow) Button();
    pButton->Construct(Rectangle(20, 290, 680, 160));
    pButton->SetText(L"Change Text");
    pButton->SetActionId(ID_BUTTON);
    pButton->AddActionEventListener(*this);
    r = AddControl(pButton);

    return r;
}

void
PredefinedDirectoryExample()
{
    AppLog("App root: %ls", Tizen::App::App::GetInstance()->GetAppRootPath().GetPointer());
    AppLog("App data: %ls", (Tizen::App::App::GetInstance()->GetAppRootPath() + L"data/").GetPointer());
    AppLog("App data: %ls", Tizen::App::App::GetInstance()->GetAppDataPath().GetPointer());
    AppLog("App resource: %ls", (Tizen::App::App::GetInstance()->GetAppRootPath() + L"res/").GetPointer());
    AppLog("App resource: %ls", Tizen::App::App::GetInstance()->GetAppResourcePath().GetPointer());
    AppLog("App shared: %ls", (Tizen::App::App::GetInstance()->GetAppRootPath() + L"shared/").GetPointer());
    AppLog("App resource: %ls", Tizen::App::App::GetInstance()->GetAppSharedPath().GetPointer());
    AppLog("App shared data: %ls", (Tizen::App::App::GetInstance()->GetAppSharedPath() +L"data/").GetPointer());
    AppLog("App shared resource: %ls", (Tizen::App::App::GetInstance()->GetAppSharedPath() + L"shared/").GetPointer());
    AppLog("App shared trusted: %ls", (Tizen::App::App::GetInstance()->GetAppSharedPath() + L"trusted/").GetPointer());
    AppLog("Images: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_IMAGES).GetPointer());
    AppLog("Sounds: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_SOUNDS).GetPointer());
    AppLog("Videos: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_VIDEOS).GetPointer());
    AppLog("Camera: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_CAMERA).GetPointer());
    AppLog("Downloads: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_DOWNLOADS).GetPointer());
    AppLog("Others: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_OTHERS).GetPointer());
    AppLog("System ringtones: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_SYSTEM_RINGTONES).GetPointer());
    AppLog("External images: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_EXTERNAL_IMAGES).GetPointer());
    AppLog("External sounds: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_EXTERNAL_SOUNDS).GetPointer());
    AppLog("External videos: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_EXTERNAL_VIDEOS).GetPointer());
    AppLog("External camera: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_EXTERNAL_CAMERA).GetPointer());
    AppLog("External downloads: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_EXTERNAL_DOWNLOADS).GetPointer());
    AppLog("External others: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_EXTERNAL_OTHERS).GetPointer());
    AppLog("Applications: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_APPLICATIONS).GetPointer());
    AppLog("External applications: %ls", Tizen::System::Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_EXTERNAL_APPLICATIONS).GetPointer());
}

void
CreateFile(const String& filePath)
{
    File file;
    file.Construct(filePath, "w+");
    file.Write(L"Created a new file\n");
    file.Write(L"And wrote two lines\n");
}

String
ReadFileByEncoding(const String& filePath, const Encoding* pEncoding)
{
    File file;
    file.Construct(filePath, "r");
    FileAttributes attrs;
    File::GetAttributes(filePath, attrs);
    ByteBuffer buf;
    buf.Construct(static_cast< int >(attrs.GetFileSize()));
    file.Read(buf);

    String decodedStr;
    pEncoding->GetString(buf, decodedStr);
    return decodedStr;
}

void
ReadAndPrintFile(const String& filePath)
{
    File file;
    file.Construct(filePath, "r");
    String line;
    while (file.Read(line) != E_END_OF_FILE)
    {
        AppLogTag("PTAP", "%ls", line.GetPointer());
    }
}

void
BasicFileOpExample()
{
    String filePath(App::GetInstance()->GetAppDataPath() + L"sample.txt");
    CreateFile(filePath);
    AppLogTag("PTAP", "%ls has been successfully created", filePath.GetPointer());
    ReadAndPrintFile(filePath);
    File::Remove(filePath);

    filePath = Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_OTHERS) + L"sample.txt";
    CreateFile(filePath);
    AppLogTag("PTAP", "%ls has been successfully created", filePath.GetPointer());
    ReadAndPrintFile(filePath);
    File::Remove(filePath);
}

void
CreateBinaryFile(const String& filePath)
{
    static const int BUFFER_SIZE = 10;

    File file;
    file.Construct(filePath, "w+");

    // (1)
    ByteBuffer buf;
    buf.Construct(BUFFER_SIZE);
    for (byte i = 0; i < BUFFER_SIZE; ++i)
    {
        buf.SetByte('A' + i);
    }

    // (2)
    buf.SetPosition(0);

    // (3)
    file.Write(buf);
}

void
ReadAndPrintBinaryFile(const String& filePath)
{
    File file;
    // (4)
    file.Construct(filePath, "r");
    FileAttributes attrs;
    File::GetAttributes(filePath, attrs);
    int fileSize = static_cast< int >(attrs.GetFileSize());
    ByteBuffer buf;
    buf.Construct(fileSize);

    // (5)
    file.Read(buf);
    buf.SetPosition(0);
    // (6)
    for (int i = 0; i < fileSize; ++i)
    {
        AppLogTag("PTAP", "%c", buf[i]);
    }
}

void
BinaryFileOpExample()
{
    String filePath(App::GetInstance()->GetAppDataPath() + L"sample.bin");
    CreateBinaryFile(filePath);
    AppLogTag("PTAP", "%ls has been successfully created", filePath.GetPointer());
    ReadAndPrintBinaryFile(filePath);
    File::Remove(filePath);
}

void
FileAttrExample()
{
    String filePath(App::GetInstance()->GetAppDataPath() + L"sample.txt");
    CreateFile(filePath);
    AppLogTag("PTAP", "%ls has been successfully created", filePath.GetPointer());

    // (1)
    FileAttributes attrs;
    File::GetAttributes(filePath, attrs);
    AppLogTag(
        "PTAP", "%ls: size = %lld, last modified at %ls, ext = %ls",
        filePath.GetPointer(), attrs.GetFileSize(),
        attrs.GetLastModifiedTime().ToString().GetPointer(),
        File::GetFileExtension(filePath).GetPointer()
    );

    // (2)
    filePath = App::GetInstance()->GetAppResourcePath();
    File::GetAttributes(filePath, attrs);
    if (attrs.IsDirectory())
    {
        AppLogTag("PTAP", "%ls is a directory", filePath.GetPointer());
    }
    else
    {
        AppLogTag("PTAP", "%ls is not a directory", filePath.GetPointer());
    }
    if (attrs.IsReadOnly())
    {
        AppLogTag("PTAP", "%ls is read-only", filePath.GetPointer());
    }
    else
    {
        AppLogTag("PTAP", "%ls is not read-only", filePath.GetPointer());
    }
    if (attrs.IsHidden())
    {
        AppLogTag("PTAP", "%ls is hidden", filePath.GetPointer());
    }
    else
    {
        AppLogTag("PTAP", "%ls is not hidden", filePath.GetPointer());
    }

    // (3)
    File::Remove(filePath);
}

void
FileManagementExample()
{
    // (1)
    String srcFilePath(App::GetInstance()->GetAppDataPath() + L"tmp.txt");
    CreateFile(srcFilePath);
    AppLogTag(
        "PTAP", "%ls has been successfully created",
        srcFilePath.GetPointer()
    );

    // (2)
    String destFilePath(
                Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_OTHERS)
                + File::GetFileName(srcFilePath)
                );
    result r = File::Copy(srcFilePath, destFilePath, true);
    if (r == E_FILE_ALREADY_EXIST)
    {
        AppLogTag(
            "PTAP", "%ls already exists in the destination directory",
            destFilePath.GetPointer()
        );
        return;
    }
    else if (IsFailed(r))
    {
        AppLogTag(
            "PTAP", "Copying %ls has been failed",
            destFilePath.GetPointer()
        );
        return;
    }
    AppLogTag(
        "PTAP", "%ls is successfully copied",
        destFilePath.GetPointer()
    );

    // (3)
    File::Remove(srcFilePath);
    AppLogTag("PTAP", "%ls is removed", srcFilePath.GetPointer());

    // (4)
    String renamedFilePath(
                Environment::GetPredefinedPath(PREDEFINED_DIRECTORY_OTHERS)
                + L"README.txt"
                );
    File::Move(destFilePath, renamedFilePath);
    AppLogTag(
        "PTAP", "%ls has been renamed to %ls",
        destFilePath.GetPointer(), renamedFilePath.GetPointer()
    );

    // (5)
    File::Remove(renamedFilePath);
    AppLogTag("PTAP", "%ls is removed", renamedFilePath.GetPointer());
}

void FileDecodeExample()
{
    ReadAndPrintFile(
        App::GetInstance()->GetAppSharedPath()
            + L"data/windows-korean-text.txt"
        );
    String str =
        ReadFileByEncoding(
            App::GetInstance()->GetAppSharedPath()
                + L"data/windows-korean-text.txt",
            unique_ptr< Encoding >(
                Encoding::GetEncodingN(L"KSC5601")
                ).get()
            );
    AppLogTag("PTAP", "decoded: %ls", str.GetPointer());
}

int UpdateReaderCount(File& file, int diff)
{
    File countFile;
    countFile.Construct(file.GetName() + L".cnt", "rw");
    ByteBuffer buf;
    buf.Construct(sizeof(int));
    countFile.Read(buf);
    std::unique_ptr<IntBuffer> pIntBuf(buf.AsIntBufferN());
    (*pIntBuf)[0] += diff;
    countFile.Seek(FILESEEKPOSITION_BEGIN, 0);

    std::unique_ptr<FileLock> pCountFileLock(countFile.LockN(FILE_LOCK_EXCLUSIVE));
    countFile.Write(buf);

    return (*pIntBuf)[0];
}

class ImageDatabaseManager
{
public:
    // (1)
    static ImageDatabaseManager& GetInstance()
    {
        static ImageDatabaseManager inst;
        return inst;
    }

    void AddImage(const String& imagePath)
    {
        ImageMetadata data = GetImageMetadata(imagePath);
        // (5)
        String insertStmt = L"INSERT INTO imagedb "
            "(Path, Title, Width, Height) VALUES (?, ?, ?, ?)";
        // (6)
        std::unique_ptr<DbStatement> pStmt(__db.CreateStatementN(insertStmt));
        // (7)
        pStmt->BindString(0, data.path);
        pStmt->BindString(1, data.title);
        pStmt->BindInt(2, data.width);
        pStmt->BindInt(3, data.height);
        // (8)
        __db.ExecuteStatementN(*pStmt);
    }

    void UpdateImage(const String& imagePath)
    {
        ImageMetadata data = GetImageMetadata(imagePath);
        // (9)
        String updateStmt = L"UPDATE imagedb SET Title = ?, "
            "Width = ?, Height = ? WHERE Path = ?";
        std::unique_ptr<DbStatement> pStmt(__db.CreateStatementN(updateStmt));
        pStmt->BindString(0, data.title);
        pStmt->BindInt(1, data.width);
        pStmt->BindInt(2, data.height);
        pStmt->BindString(3, data.path);
        __db.ExecuteStatementN(*pStmt);
    }

    void RemoveImage(const String& imagePath)
    {
        // (10)
        String updateStmt = L"DELETE FROM imagedb WHERE Path = ?";
        std::unique_ptr<DbStatement> pStmt(__db.CreateStatementN(updateStmt));
        pStmt->BindString(0, imagePath);
        __db.ExecuteStatementN(*pStmt);
    }

    std::unique_ptr< IList > GetAllImagesN()
    {
        std::unique_ptr< IList > pList(new ArrayList());
        // (11)
        String selectStmt = L"SELECT Path, Title, Width, Height FROM imagedb";
        // (12)
        std::unique_ptr<DbEnumerator> pEnum(__db.QueryN(selectStmt));
        // (13)
        while (pEnum->MoveNext() == E_SUCCESS)
        {
            ImageMetadata* pData = new ImageMetadata();
            pEnum->GetStringAt(0, pData->path);
            pEnum->GetStringAt(1, pData->title);
            pEnum->GetIntAt(2, pData->width);
            pEnum->GetIntAt(3, pData->height);
            pList->Add(pData);
        }
        return std::move(pList);
    }

public: // (14)
    struct ImageMetadata
        : public Object // (14)
    {
        String path;
        String title;
        int width;
        int height;
    };

private:
    ImageDatabaseManager()
    {
        // (2)
        const static String dbPath =
            App::GetInstance()->GetAppDataPath() + L"image.db";
        // (3)
        __db.Construct(dbPath, "a+");

        // (4)
        String crStmt = L"CREATE TABLE IF NOT EXISTS imagedb "
            "(Path TEXT PRIMARY KEY "
            "Title TEXT, Width INTEGER, Height INTEGER)";
        __db.ExecuteSql(crStmt, true);
    }

    ImageMetadata GetImageMetadata(const String& imagePath)
    {
        ImageMetadata data;
        data.path = imagePath;
        data.title = File::GetFileName(imagePath);
        data.width = 1024;
        data.height = 768;
        return data;
    }

    Database __db;
};

class DirectoryMonitor
    : public IFileEventListener // (1)
{
public:
    DirectoryMonitor(const vector<String>& monitoredFileExtList)
        : __monitoredFileExtList(monitoredFileExtList)
    {
        // (2)
        __mgr.Construct(*this);
    }

    // (1)
    virtual void OnFileEventOccurred(
        const unsigned long events,
        const String& path,
        const unsigned int eventId
    )
    {
        if (!IsMonitoredFileType(path))
        {
            return;
        }

        if (events & FILE_EVENT_TYPE_CREATE)
        {
            AppLogTag("PTAP", "%ls is created", path.GetPointer());
            // (3)
            AddFile(path);
            // (5) Add the file from some database
            ImageDatabaseManager::GetInstance().AddImage(path);
        }
        else if (events & FILE_EVENT_TYPE_DELETE)
        {
            AppLogTag("PTAP", "%ls is deleted", path.GetPointer());
            // (4)
            RemoveFile(path);
            // (5) Remove the file from some database
            ImageDatabaseManager::GetInstance().RemoveImage(path);
        }
        else if (events & FILE_EVENT_TYPE_MODIFY)
        {
            // (5) Update the database for the file
            ImageDatabaseManager::GetInstance().UpdateImage(path);
        }
    }

    void AddDirectory(const String& dirPath)
    {
        // (2)
        __mgr.AddPath(dirPath, MONITORED_EVENTS_ON_DIR);
    }

    // (3)
    void AddFile(const String& filePath)
    {
        __mgr.AddPath(filePath, MONITORED_EVENTS_ON_FILE);
    }

    // (4)
    void RemoveFile(const String& filePath)
    {
        __mgr.RemovePath(filePath);
    }

    bool IsMonitoredFileType(const String& filePath)
    {
        return true;
    }

private:
    static const unsigned long MONITORED_EVENTS_ON_DIR =
        FILE_EVENT_TYPE_CREATE | FILE_EVENT_TYPE_DELETE;
    // (3)
    static const unsigned long MONITORED_EVENTS_ON_FILE =
        FILE_EVENT_TYPE_MODIFY;
    FileEventManager __mgr; // (2)
    vector<String> __monitoredFileExtList;
};

class GalleryView
    : public IDeviceEventListener       // (1)
{
public:
    result Construct()
    {
        // ... other initialization
        // (2)
        return DeviceManager::AddDeviceEventListener(
            DEVICE_TYPE_STORAGE_CARD, *this);
    }

    void Scan(const String& dirPath)
    {
        AppLogTag(
            "PTAP", "Started to scan %ls",
            dirPath.GetPointer()
            );
        // ... Do some useful things.
        // For example, update in-memory image list
        AppLogTag(
            "PTAP", "Scanning %ls is done",
            dirPath.GetPointer()
            );
    }

    void Refresh()
    {
        AppLogTag("PTAP", "Refreshing the view");
    }

    // ... Assume that there are other methods for GalleryView

    // (3)
    virtual void OnDeviceStateChanged(
        DeviceType deviceType,
        const String& state
        )
    {
        if (deviceType == DEVICE_TYPE_STORAGE_CARD)
        {
            if (state == L"Mounted")
            {
                AppLogTag("PTAP", "An external MMC inserted");
                Scan(Environment::GetExternalStoragePath());
                Refresh();
            }
            else if (state == L"Unmounted")
            {
                AppLogTag("PTAP", "An external MMC removed");
                Scan(Environment::GetExternalStoragePath());
                Refresh();
            }
        }
    }
};

void TextEncodingExample()
{
    unique_ptr< IList > pEncodingList(Encoding::GetAvailableEncodingsN());
    IteratorT< String* > iter =
        StlConverter::GetBeginIterator< String* >(pEncodingList.get());
    IteratorT< String* > end =
        StlConverter::GetEndIterator< String* >(pEncodingList.get());
    for (;iter != end; ++iter)
    {
        AppLogTag("PTAP", "available: %ls", (*iter)->GetPointer());
        unique_ptr< Encoding > pEnc(Encoding::GetEncodingN(*(*iter)));
        AppAssert(*(*iter) == pEnc->GetEncodingType());
        AppLogTag(
            "PTAP", "returned: %ls",
            pEnc->GetEncodingType().GetPointer()
            );
    }

    unique_ptr< Encoding > pEnc(Encoding::GetEncodingN(L"shift_jis"));
    if (pEnc)
    {
        AppLogTag(
            "PTAP", "Returned encoding instance's type = %ls",
            pEnc->GetEncodingType().GetPointer()
            );
    }
    else
    {
        AppLogTag(
            "PTAP", "[%s] shift_jis is unknown encoding type",
            GetErrorMessage(GetLastResult())
            );
    }

    AppLogTag(
        "PTAP", "Latin1Encoding's encoding type = %ls",
        Latin1Encoding().GetEncodingType().GetPointer()
        );
    AppLogTag(
        "PTAP", "Ucs2Encoding's encoding type = %ls",
        Ucs2Encoding().GetEncodingType().GetPointer()
        );
    AppLogTag(
        "PTAP", "Utf8Encoding's encoding type = %ls",
        Utf8Encoding().GetEncodingType().GetPointer()
        );
    AppLogTag(
        "PTAP", "AsciiEncoding's encoding type = %ls",
        AsciiEncoding().GetEncodingType().GetPointer()
        );
    AppLogTag(
        "PTAP", "GsmEncoding's encoding type = %ls",
        GsmEncoding().GetEncodingType().GetPointer()
        );
}

void
StringEncodeExample()
{
    // (1)
    String jaText(
L"<html>\n"
L"<head>\n"
L"<meta http-equiv=\"content-language\" content=\"ja\">\n"
L"<meta http-equiv=\"content-type\" content=\"text/html; charset=ISO-2022-JP\">\n"
L"</head>\n"
L"<body>\n"
L"ABCDE あいうえお\n"
L"</body>\n"
L"</html>\n"
        );
    AppLogTag("PTAP", "jaText = %ls", jaText.GetPointer());

    // (2)
    unique_ptr <Encoding> pEnc(
        Encoding::GetEncodingN(L"ISO-2022-JP")
        );
    unique_ptr <ByteBuffer> pBuf(pEnc->GetBytesN(jaText));

    // (3)
    String jaTextFilePath(
        App::GetInstance()->GetAppSharedPath()
            + L"data/iso-2022-jp.html"
        );
    File jaTextFile;
    jaTextFile.Construct(jaTextFilePath, "w");
    jaTextFile.Write(*pBuf);
}

void
LocalesExample()
{
    LocaleManager localeManager;
    localeManager.Construct();
    // (1)
    unique_ptr< IList > pLocaleList(localeManager.GetAvailableLocalesN());
    AppLogTag("PTAP", "Available locales: ");
    unique_ptr< IEnumerator > pEnum(pLocaleList->GetEnumeratorN());
    while (pEnum->MoveNext() == E_SUCCESS)
    {
        AppLogTag(
            "PTAP", "%ls",
            static_cast< Locale* >(pEnum->GetCurrent())
                ->GetLocaleCodeString().GetPointer()
            );
    }
}

void
LanguagesExample()
{
    LocaleManager localeManager;
    localeManager.Construct();
    // (1)
    unique_ptr< IList > pLangList(localeManager.GetAvailableLanguagesN());
    AppLogTag("PTAP", "Available languages: ");
    unique_ptr< IEnumerator > pEnum(pLangList->GetEnumeratorN());
    while (pEnum->MoveNext() == E_SUCCESS)
    {
        AppLogTag(
            "PTAP", "%ls",
            static_cast< String* >(pEnum->GetCurrent())
                ->GetPointer() // (2)
            );
    }
}

void
TimeZonesExample()
{
    LocaleManager localeManager;
    localeManager.Construct();
    // (1)
    unique_ptr< IList > pLangList(localeManager.GetAvailableTimeZonesN());
    AppLogTag("PTAP", "Available timezones: ");
    unique_ptr< IEnumerator > pEnum(pLangList->GetEnumeratorN());
    while (pEnum->MoveNext() == E_SUCCESS)
    {
        AppLogTag(
            "PTAP", "%ls",
            static_cast< String* >(pEnum->GetCurrent())
                ->GetPointer() // (2)
            );
    }
}

void
GetSystemLocaleExample()
{
    LocaleManager localeManager;
    localeManager.Construct();
    Locale locale = localeManager.GetSystemLocale();
    AppLogTag(
        "PTAP", "system locale = %ls",
        locale.GetLocaleCodeString().GetPointer()
        );
}

void
DisplayCurrency()
{
    LocaleManager localeManager;
    localeManager.Construct();
    // (1)
    Locale locale = localeManager.GetSystemLocale();
    // (2)
    unique_ptr< NumberFormatter > pFormatter(
        NumberFormatter::CreateCurrencyFormatterN(locale)
        );
    String str;
    double d1 = 123456789.543;
    // (3)
    pFormatter->Format(d1, str);
    AppLogTag(
        "PTAP", "%f => %ls in %ls",
        d1, str.GetPointer(),
        locale.GetLocaleCodeString().GetPointer()
        );
}

void
DisplayCurrentDateTime()
{
    LocaleManager localeManager;
    localeManager.Construct();
    // (1)
    Locale locale = localeManager.GetSystemLocale();
    // (2)
    unique_ptr< DateTimeFormatter > pFormatter(
        DateTimeFormatter::CreateDateTimeFormatterN(locale, DATE_TIME_STYLE_FULL)
        );
    DateTime today;
    // (3)
    SystemTime::GetCurrentTime(TIME_MODE_UTC, today);
    String str;
    // (4)
    pFormatter->Format(today, str);
    AppLogTag(
        "PTAP", "%ls => %ls in %ls",
        today.ToString().GetPointer(), str.GetPointer(),
        locale.GetLocaleCodeString().GetPointer()
        );
}

void
ButtonPanel::OnActionPerformed(const Tizen::Ui::Control& source, int actionId)
{
    switch(actionId)
    {
    case ID_BUTTON:
        {
            __pLabel->SetText(L"Button is clicked!");
            AppLog("Button is pressed! \n");
#if 0
            // chapter 17 #1
            PredefinedDirectoryExample();

            // chapter 17 #2
            BasicFileOpExample();

            // chapter 17 #3
            BinaryFileOpExample();

            // chapter 17 #4
            FileAttrExample();

            // chapter 17 #5
            FileManagementExample();

            TextEncodingExample();

            FileDecodeExample();

            StringEncodeExample();
            LocalesExample();
            LanguagesExample();
            TimeZonesExample();
            GetSystemLocaleExample();

#endif

            DisplayCurrency();
            DisplayCurrentDateTime();
        }
        break;
    }
    Invalidate(true);
}
