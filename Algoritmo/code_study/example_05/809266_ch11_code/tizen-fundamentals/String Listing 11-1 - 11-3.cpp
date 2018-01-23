#include <FBase.h>

using namespace Tizen::Base;

// Listing 11-1
void
CreateString()
{
    String str1(L"ABC"); // (1)
    String str2("DEF"); // (2)
    String str3(str2); // (3)
    AppLogTag("PTAP", "str1 = %ls", str1.GetPointer()); // (4)
    AppLogTag("PTAP", "str2 = %ls", str2.GetPointer()); // (4)
    AppLogTag("PTAP", "str3 = %ls", str3.GetPointer()); // (4)
}

// Listing 11-2
void CompareAndSearchString()
{
    String s1(L"ABCD");
    String s2(L"abcd");

    // (1)
    TryLogTag(
        "PTAP",
        !s1.Equals(s2, false),
        "%ls == %ls in case-insensitive comparison",
        s1.GetPointer(), s2.GetPointer()
        );

    // (1)
    TryLogTag(
        "PTAP",
        s1.Equals(s2, true),
        "%ls != %ls in case-sensitive comparison",
        s1.GetPointer(), s2.GetPointer()
        );

    // (2)
    TryLogTag(
        "PTAP",
        s1 == s2,
        "comparision with operator==() : %ls != %ls",
        s1.GetPointer(), s2.GetPointer()
        );

    // (3)
    TryLogTag(
        "PTAP",
        s1.CompareTo(s2) <= 0,
        "comparision with CompareTo() method : %ls > %ls",
        s1.GetPointer(), s2.GetPointer()
        );

    // (3)
    TryLogTag(
        "PTAP",
        String::Compare(s2, s1) >= 0,
        "comparision with Compare() method : %ls < %ls",
        s2.GetPointer(), s1.GetPointer()
        );

    String str(L"String can be used to do various searching tasks");
    AppLogTag("PTAP", "str = %ls", str.GetPointer());

    // (4)
    if (str.Contains(L"various"))
    {
        AppLogTag("PTAP", "str contains \"various\"");
    }
    else
    {
        AppLogTag("PTAP", "str does not contain \"various\"");
    }

    // (5)
    if (str.StartsWith(L"String", 0))
    {
        AppLogTag("PTAP", "str starts with \"String\"");
    }
    else
    {
        AppLogTag("PTAP", "str does not starts with \"String\"");
    }

    // (6)
    if (str.EndsWith(L"tasks"))
    {
        AppLogTag("PTAP", "str end with \"tasks\"");
    }
    else
    {
        AppLogTag("PTAP", "str does not end with \"tasks\"");
    }

    // (7)
    int prevIdx = 0;
    int curIdx = 0;
    result r = str.IndexOf(L' ', 0, prevIdx);
    TryReturnVoidTag("PTAP", r == E_SUCCESS, "can't find space");
    String word;
    while (str.IndexOf(L' ', prevIdx + 1, curIdx) == E_SUCCESS)
    {
        AppAssert(str[curIdx] == L' ');
        int wl = curIdx - prevIdx - 1;
        if (wl >= 1)
        {
            // (8)
            str.SubString(prevIdx + 1, curIdx - prevIdx - 1, word);
            AppLogTag("PTAP", "word = %ls", word.GetPointer());
        }
        prevIdx = curIdx;
    }
    AppLogTag("PTAP", "str = %ls", str.GetPointer());
}

// Listing 11-3
void ModifyString()
{
    String str; // Initialised to empty string L""

    str.Append(L'A'); // (1) str becomes L"A"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());
    str.Append('='); // (1) str becomes L"A="
    AppLogTag("PTAP", "str = %ls", str.GetPointer());
    str.Append(10); // (1) str becomes L"A=10"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());
    str.Append(L','); // (1) str becomes L"A=10,"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());
    str.Append(L"B=20"); // (1) str becomes L"A=10,B=20"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());
    String str2(L",C=30");
    str.Append(str2); // (1) str becomes L"A=10,B=20,C=30"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());

    str.Insert(L'a', 5); // (2) str becomes L"A=10,aB=20,C=30"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());
    str.Insert('=', 6); // (2) str becomes L"A=10,a=B=20,C=30"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());
    str.Insert(12, 7); // (2) str becomes L"A=10,a=12B=20,C=30"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());
    str.Insert(L',', 9); // (2) str becomes L"A=10,a=12,B=20,C=30"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());
    str.Insert(L"b=22,", 15); // (2) str becomes L"A=10,a=12,B=20,b=22,C=30"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());
    str2 = L",c=32";
    str.Insert(str2, str.GetLength()); // (2) str becomes
                                       // L"A=10,a=12,B=20,b=22,C=30,c=32"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());

    str.Replace(L"C=30", L"D=45"); // (3) str becomes
                                   // L"A=10,a=12,B=20,b=22,D=45,c=32"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());

    // (4)
    int dpos = 0;
    str.IndexOf(L",D=45", dpos);
    str.Remove(dpos, wcslen(&str[dpos]);// str becomes L"A=10,a=12,B=20,b=22"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());

    str.Replace(L',', L'/'); // (3) str becomes L"A=10/a=12/B=20/b=22"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());
    str.ToUpperCase(); // (5) str becomes L"A=10/A=12/B=20/B=22"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());
    str.ToLowerCase(); // (6) str becomes L"a=10/a=12/b=20/b=22"
    AppLogTag("PTAP", "str = %ls", str.GetPointer());

    // (7)
    String str3(str); // str3 is same to str
    str3.Replace(L'/', L','); // str3 becomes L"a=10,a=12,b=20,b=22"
}
