#include <iostream>
#include "dayType.h"
#include "implementation.cpp"

using namespace std;

/*
* Basically the code should ask you what day you want to start with, you can input any day of the week. If you don't input a day, it will default to Sunday.
* After inputting the day, the code will print the day you inputted, and print the previous and next days.
* It will then set the day to Monday, and index 3 days after monday, 30 days after monday, and 365 days after monday.
* It will print the day for all 3.
*/

int main() {
    string startingDay;
    cout << "Please input the day you would like to start with:" << endl;
    cin >> startingDay;

    dayType day(startingDay);

    cout << "Starting day: ";
    day.printDay();

    cout << "Previous day: ";
    day.getPrevDay();
    cout << day.getPrevDay() << endl;

    cout << "Next day: ";
    day.getNextDay();
    cout << day.getNextDay() << endl;

    dayType day2("Monday");

    cout << "From constructor with parameters: " << day2.getDay() << endl;

    cout << "After adding 3 days: ";
    day2.addDays(3);
    day2.printDay();

    cout << "After adding 30 days: ";
    day2.addDays(30);
    day2.printDay();

    cout << "After adding 365 days: ";
    day2.addDays(365);
    day2.printDay();

    return 0;
}
