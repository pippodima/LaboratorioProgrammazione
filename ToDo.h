//
// Created by pippo on 26/08/2022.
//

#ifndef LABORATORIOPROGRAMMAZIONE_TODO_H
#define LABORATORIOPROGRAMMAZIONE_TODO_H

#include "iostream"
#include "Date.h"
using namespace std;
class ToDo {
    string name;
    bool check=false;
    Date date;

public:
    ToDo(string name, Date date);

    const string &getName() const;
    void setName(const string &name);

    bool isCheck() const;
    void setCheck();
    string stateCheck() const;

    const Date &getDate() const;
    void setDate(const Date &date);
    void printStringDate()const;
    string getStringDate() const;
    void printTodo()const;
};


#endif //LABORATORIOPROGRAMMAZIONE_TODO_H
