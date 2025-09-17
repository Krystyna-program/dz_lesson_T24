#include "Time.h"
#include <iomanip>

Time::Time()
{
    this->hour = 0;
    this->minutes = 0;
    this->seconds = 0;
    this->format = false;
}

Time::Time(int hour, int minutes, int seconds, bool format)
{
    this->hour = hour;
    this->minutes = minutes;
    this->seconds = seconds;
    this->format = format;
}

Time::Time(const Time& obj)
{
    this->hour = obj.hour;
    this->minutes = obj.minutes;
    this->seconds = obj.seconds;
    this->format = obj.format;
}

Time& Time::operator=(const Time& obj)
{
    if (this != &obj)
    {
        this->hour = obj.hour;
        this->minutes = obj.minutes;
        this->seconds = obj.seconds;
        this->format = obj.format;
    }
    return *this;
}

void Time::setHour(int hour)
{
    this->hour = hour;
}

int Time::getHour() const
{
    return hour;
}

void Time::setMinutes(int minutes)
{
    this->minutes = minutes;
}

int Time::getMinutes() const
{
    return minutes;
}

void Time::setSeconds(int seconds)
{
    this->seconds = seconds;
}

int Time::getSeconds() const
{
    return seconds;
}

void Time::setFormat(bool format)
{
    this->format = format;
}

bool Time::getFormat() const
{
    return format;
}

bool Time::valid() const
{
    return (hour >= 0 && hour < 24) &&
        (minutes >= 0 && minutes < 60) &&
        (seconds >= 0 && seconds < 60);
}

void Time::tickTime()
{
    seconds++;
    if (seconds >= 60)
    {
        seconds = 0;
        minutes++;
        if (minutes >= 60)
        {
            minutes = 0;
            hour++;
            if (hour >= 24)
            {
                hour = 0;
            }
        }
    }
}

void Time::untickTime()
{
    seconds--;
    if (seconds < 0)
    {
        seconds = 59;
        minutes--;
        if (minutes < 0)
        {
            minutes = 59;
            hour--;
            if (hour < 0)
            {
                hour = 23;
            }
        }
    }
}

void Time::showTime() const
{
    if (format)
    {
        if (hour < 10) cout << "0";
        cout << hour << ":";

        if (minutes < 10) cout << "0";
        cout << minutes << ":";

        if (seconds < 10) cout << "0";
        cout << seconds << endl;
    }
    else
    {
        int displayHour = hour % 12;
        if (displayHour == 0) {
            displayHour = 12;
        }
        if (displayHour < 10) cout << "0";
        cout << displayHour << ":";

        if (minutes < 10) cout << "0";
        cout << minutes << ":";

        if (seconds < 10) cout << "0";
        cout << seconds;

        if (hour < 12)
            cout << " AM" << endl;
        else
            cout << " PM" << endl;
    }
}

bool Time::operator==(const Time& obj) const&
{
    if (this->format == obj.format && this->minutes == obj.minutes && this->seconds == obj.seconds && this->hour == obj.hour) {
        return true;
    }
    else {
        return false;
    }
}

bool Time::operator!=(const Time& obj) const&
{
    if (this->format != obj.format || this->minutes != obj.minutes || this->seconds != obj.seconds || this->hour != obj.hour) {
        return true;
    }
    else {
        return false;
    }
}

bool Time::operator>(const Time& obj) const&
{
    if (this->hour > obj.hour) {
        return true;
    }
    else if (this->hour == obj.hour && this->minutes > obj.minutes) {
        return true;
    }
    else if (this->hour == obj.hour && this->minutes == obj.minutes && this->seconds > obj.seconds) {
        return true;
    }
    else if (this->hour == obj.hour && this->minutes == obj.minutes && this->seconds == obj.seconds && this->format > obj.format) {
        return true;
    }
    else {
        return false;
    }
}

bool Time::operator<(const Time& obj) const&
{
    return !(*this > obj) && !(*this == obj);
}

bool Time::operator>=(const Time& obj) const&
{
    return (*this > obj) || (*this == obj);
}

bool Time::operator<=(const Time& obj) const&
{
    return (*this < obj) || (*this == obj);
}

//Time& Time::operator+=(float s)
//{
//    // TODO: insert return statement here
//}
//
//Time& Time::operator-=(float s)
//{
//    // TODO: insert return statement here
//}
//
//Time& Time::operator+=(int m)
//{
//    // TODO: insert return statement here
//}
//
//Time& Time::operator-=(int m)
//{
//    // TODO: insert return statement here
//}
//
//Time& Time::operator+=(long h)
//{
//    // TODO: insert return statement here
//}
//
//Time& Time::operator-=(long h)
//{
//    // TODO: insert return statement here
//}
//
//Time Time::operator+(float s) const&
//{
//    return Time();
//}
//
//Time Time::operator-(float s) const&
//{
//    return Time();
//}
//
//Time Time::operator+(int m) const&
//{
//    return Time();
//}
//
//Time Time::operator-(int m) const&
//{
//    return Time();
//}
//
//Time Time::operator+(long h) const&
//{
//    return Time();
//}
//
//Time Time::operator-(long h) const&
//{
//    return Time();
//}
