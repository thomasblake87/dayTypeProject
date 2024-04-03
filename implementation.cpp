#include "dayType.h"
#include <iostream>

using namespace std;

const string dayType::aDay[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

dayType::dayType(const string& initialDay) {
    setDay(initialDay);
}

void dayType::setDay(const string& newDay) {
    bool dayIsValid = false;
    for (int i = 0; i < 7; ++i) {
        if (aDay[i] == newDay) {
            dayIsValid = true;
            break;
        }
    }
    if (dayIsValid == true) {
        day = newDay;
    }
    else {
        day = "Sunday";
    }
    
}

void dayType::printDay() const {
    cout << day << endl;
}

string dayType::getDay() const {
    return day;
}

string dayType::getNextDay() const {
    int index;
    for (int i = 0; i < 7; ++i) {
        if (aDay[i] == day) {
            index = i;
            break;
        }
    }
    return aDay[(index + 1) % 7];
}

string dayType::getPrevDay() const {
    int index;
    for (int i = 0; i < 7; ++i) {
        if (aDay[i] == day) {
            index = i;
            break;
        }
    }
    return aDay[(index + 6) % 7];
}

void dayType::addDays(int numDays) {
    int index;
    for (int i = 0; i < 7; ++i) {
        if (aDay[i] == day) {
            index = i;
            break;
        }
    }
    index = (index + numDays) % 7;
    if (index < 0) {
        index += 7;
    }
    day = aDay[index];
}