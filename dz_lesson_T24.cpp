#include <iostream>
#include "Time.h"
#include "Schedule.h"
using namespace std;

int main()
{
    /*
    Time t1;
    Time t2(14, 30, 45, true);
    Time t3(2, 15, 0, false);
    Time t4 = t2;

    cout << "t1: ";
    t1.showTime();

    cout << "t2: ";
    t2.showTime();

    cout << "t3 (am/pm): ";
    t3.showTime();

    cout << "t4 (copy of t2): ";
    t4.showTime();
    if (t2 == t4) {
        cout << "t2 == t4 Yes" << endl;
    }
    else {
        cout << "t2 == t4 No" << endl;
    }

    if (t2 != t3) {
        cout << "t2 != t3 Yes" << endl;
    }
    else {
        cout << "t2 != t3? No" << endl;
    }

    if (t2 > t3) {
        cout << "t2 > t3 Yes" << endl;
    }
    else {
        cout << "t2 > t3 No" << endl;
    }

    if (t2 < t3) {
        cout << "t2 < t3 Yes" << endl;
    }
    else {
        cout << "t2 < t3 No" << endl;
    }

    if (t2 >= t4) {
        cout << "t2 >= t4 Yes" << endl;
    }
    else {
        cout << "t2 >= t4 No" << endl;
    }

    if (t2 <= t4) {
        cout << "t2 <= t4 Yes" << endl;
    }
    else {
        cout << "t2 <= t4? No" << endl;
    }

    cout << "\nt1.tickTime():" << endl;
    t1.tickTime();
    t1.tickTime();
    t1.tickTime();
    t1.showTime();

    cout << "t1.untickTime():" << endl;
    t1.untickTime();
    t1.untickTime();
    t1.showTime();

    cout << "\nt2 += 5.0 s:" << endl;
    t2 += 5.0f;
    t2.showTime();

    cout << "t2 - 10.0 s:" << endl;
    Time t5 = t2 - 10.0f;
    t5.showTime();

    cout << "\nt2 += 30 m:" << endl;
    t2 += 30;
    t2.showTime();

    cout << "t2 - 45 m:" << endl;
    Time t6 = t2 - 45;
    t6.showTime();

    cout << "\nt2 += 10 h:" << endl;
    t2 += 10L;
    t2.showTime();

    cout << "t2 - 13 h" << endl;
    Time t7 = t2 - 13L;
    t7.showTime();

    if (t7.valid()) {
        cout << "\nt7 is valid time" << endl;
    }
    else {
        cout << "\nt7 is invalid time" << endl;
    }
    */

    cout << "-------------------------------------\n";

    Time start(9, 0, 0, true);
    Schedule schedule(start, 45, 10, 20, 2, 6);
    schedule.generateSchedule();
}