#include "Schedule.h"

Schedule::Schedule(Time start, int lessonDur, int shortBr, int longBr, int longAfter, int lessons)
{
    this->startTime = Time(9, 0, 0, true);
    this->lessonDuration = lessonDur;
    this->shortBreak = shortBr;
    this->longBreak = longBr;
    this->longBreakAfter = longAfter;
    this->totalLessons = lessons;
}

void Schedule::generateSchedule() const
{
    Time currentTime = startTime;

    for (int i = 1; i <= totalLessons; ++i) {
        Time lessonStart = currentTime;
        Time lessonEnd = currentTime + lessonDuration;

        cout << "Lesson " << i << ": ";
        lessonStart.showTime();
        cout << " - ";
        lessonEnd.showTime();
        cout << endl;

        currentTime = lessonEnd;

        if (i < totalLessons) {
            if (i == longBreakAfter)
                currentTime += longBreak;
            else
                currentTime += shortBreak;
        }
    }
}