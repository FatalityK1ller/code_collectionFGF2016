void
DateTimeTimeSpanExample()
{
    // (1)
    DateTime dt;
    AppAssert(dt.GetYear() == 1 && dt.GetMonth() == 1 && dt.GetDay() == 1 &&
              dt.GetHour() == 0 && dt.GetMinute() == 0 && dt.GetSecond() == 0 &&
              dt.GetMillisecond() == 0);

    // (2)
    dt.SetValue(2013, 8, 4);
    AppAssert(dt.GetYear() == 2013 && dt.GetMonth() == 8 && dt.GetDay() == 4 &&
              dt.GetHour() == 0 && dt.GetMinute() == 0 && dt.GetSecond() == 0 &&
              dt.GetMillisecond() == 0);

    // (3)
    DateTime dt2(dt);
    if (dt == dt2)
    {
        AppLogTag("PTAP", "dt2 is definitely the same as dt");
    }

    // (4)
    dt.AddHours(13);
    dt.AddMinutes(29);
    dt.AddSeconds(13);
    dt.AddMilliseconds(300);
    if (dt > dt2)
    {
        AppLogTag("PTAP", "dt is definitely greater than dt2")
    }

    // (5)
    dt.SetValue(dt.GetTicks() + 60 * DateTime::GetTicksPerSecond());

    // (6)
    TimeSpan ts = dt.GetTimeOfDay();
    dt.Subtract(ts);
    if (dt == dt2)
    {
        AppLogTag("PTAP", "dt is the same as dt2");
    }

    // (7)
    DateTime dt3;
    DateTime::Parse(dt.ToString(), dt3);
    AppAssert(dt == dt3);

    // (8)
    TimeSpan ts2(0, 13, 30, 13, 300);
    AppAssert(ts2.GetDays() == 0 && ts2.GetHours() == 13 &&
              ts2.GetMinutes() == 30 && ts2.GetSeconds() == 13 &&
              ts2.GetMilliseconds() == 300);
    if (ts == ts2)
    {
        AppLogTag("PTAP", "ts is definitely same to ts2");
    }

    // (9)
    TimeSpan oneDay(TimeSpan::NUM_OF_TICKS_IN_DAY);

    // (10)
    ts2 = oneDay + ts;
    AppAssert(ts2.GetDays() == 1 && ts2.GetHours() == 13 &&
              ts2.GetMinutes() == 30 && ts2.GetSeconds() == 13 &&
              ts2.GetMilliseconds() == 300);
    AppAssert(ts2 > ts);
    AppAssert(ts2 - ts == oneDay);
}

