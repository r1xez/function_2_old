#include <iostream>
using namespace std;


bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    else {
        return 31; 
    }
}


int daysBetweenDates(int day1, int month1, int year1, int day2, int month2, int year2) {
    
    int totalDays = 0;

    
    for (int year = year1; year < year2; ++year) {
        totalDays += isLeapYear(year) ? 366 : 365; 
    }

   
    for (int month = month1; month <= 12; ++month) {
        if (month == month1) {
            totalDays -= daysInMonth(month, year1) - day1 + 1; 
        }
        else {
            totalDays -= daysInMonth(month, year1); 
        }
    }

   
    for (int month = 1; month < month2; ++month) {
        totalDays += daysInMonth(month, year2);
    }
    totalDays += day2;

    return totalDays; 
}

int main() {
    int day1, month1, year1, day2, month2, year2;
    cout << "Enter first date (day month year): ";
    cin >> day1 >> month1 >> year1;
    cout << "Enter second date (day month year): ";
    cin >> day2 >> month2 >> year2;

    int difference = daysBetweenDates(day1, month1, year1, day2, month2, year2);
    cout << "Difference in days: " << difference << endl;

    return 0;
}
