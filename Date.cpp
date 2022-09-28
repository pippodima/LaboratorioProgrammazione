//
// Created by pippo on 26/08/2022.
//

#include "Date.h"

Date::Date(int d, int m, int y) {
    if(y<0)
        throw runtime_error("Year < 0");
    if(d<0)
        throw runtime_error("Day < 0");
    if(m<0 || m>12)
        throw runtime_error("Month number not valid");
    year=y;
    month=m;
    if(d>getMaxDays(year))
        throw runtime_error("Number of days not valid");
    day=d;
}

int Date::getMaxDays(int year) {
    short unsigned int maxDay = 31;
    switch (month) {
        case 4: //April
        case 6: //June
        case 9: //September
        case 11: //November
            maxDay = 30;
            break;
        case 2: {

            if (year % 4 == 0) {
                if (year % 100 == 0) {
                    if (year % 400 == 0) {
                        maxDay = 29;
                    } else {
                        maxDay = 28;
                    }
                } else {
                    maxDay = 29;
                }
            } else {
                maxDay = 28;
            }
        }
    }
    return maxDay;

}

unsigned short Date::getDay() const {
    return day;
}

void Date::setDay(unsigned short day) {
    if(day>getMaxDays(Date::year))
        throw runtime_error("number of days not valid");

    Date::day = day;
}

unsigned short Date::getMonth() const {
    return month;
}

void Date::setMonth(unsigned short month) {
    if (month<0||month>12)
        throw runtime_error("month number not valid");
    int maxDay=31;
    switch (month) {
        case 4: //April
        case 6: //June
        case 9: //September
        case 11: //November
            maxDay = 30;
            break;
        case 2: {

            if (year % 4 == 0) {
                if (year % 100 == 0) {
                    if (year % 400 == 0) {
                        maxDay = 29;
                    } else {
                        maxDay = 28;
                    }
                } else {
                    maxDay = 29;
                }
            } else {
                maxDay = 28;
            }
        }
    }
    if(day<=maxDay)
        Date::month = month;
    else
        throw runtime_error("Too many days for this month");
}

unsigned short Date::getYear() const {
    return year;
}

void Date::setYear(unsigned short year) {
    if (year<0)
        throw runtime_error("Year < 0");
    Date::year = year;

}

string Date::printDate() const {

    return to_string(day)+"/"+ to_string(month)+"/"+ to_string(year);
}