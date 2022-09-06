//
// Created by pippo on 26/08/2022.
//

#ifndef LABORATORIOPROGRAMMAZIONE_DATE_H
#define LABORATORIOPROGRAMMAZIONE_DATE_H

#include "iostream"

using namespace std;
class Date {

private:

    short unsigned int day;
    short unsigned int month;
    short unsigned int year;

    int getMaxDays(int year);

public:
    Date(int d, int m, int y);

    unsigned short getDay() const;
    void setDay(unsigned short day);

    unsigned short getMonth() const;
    void setMonth(unsigned short month);

    unsigned short getYear() const;
    void setYear(unsigned short year);

    void printDate() const;
};


#endif //LABORATORIOPROGRAMMAZIONE_DATE_H
