#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>

using namespace std;

class dayType {
private:
    string day;
    static const string aDay[7];

public:
    dayType(const string& initialDay);
    // Returns the day the user chose
    void setDay(const string& newDay);
    // Purpose: determines whether the string inputted by the user is a member of dayType::aDay
    // Preconditions: The user must have inputted a string
    // Postconditions: It will output the day chosen, if a day wasn't inputted, it will output "Sunday"
    void printDay() const;
    // Purpose: Prints the day for the "after adding 3 days" "after adding 30 days" and "after adding 365 days" parts
    // Precons: none
    // Postconditions: Day will be printed
    string getDay() const;
    // Purpose: Returns the day it was given
    // Preconditions: None
    // Postconditions: Returns day
    string getNextDay() const;
    // Purpose: Indexs dayType:aDay and finds the next day given the current day
    // Preconditions: day must be defined
    // Postconditions: Returns the next day
    string getPrevDay() const;
    // Purpose: Indexs dayType:aDay and finds the previous day given the current day
    // Preconditions: day must be defined
    // Postconditions: Returns the previous day
    void addDays(int numDays);
    // Purpose: It will find the future day if you add numDays to the current day
    // Preconditions: numDays must be defined
    // Postconditions: Returns the day it will be
};

#endif