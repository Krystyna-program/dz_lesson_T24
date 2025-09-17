#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
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
}