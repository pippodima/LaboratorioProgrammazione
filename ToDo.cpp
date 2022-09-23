//
// Created by pippo on 26/08/2022.
//

#include "ToDo.h"

ToDo::ToDo(string name, Date date) : name(name), date(date) {}

const string &ToDo::getName() const {
    return name;
}

void ToDo::setName(const string &name) {
    ToDo::name = name;
}

bool ToDo::isCheck() const {
    return check;
}

void ToDo::setCheck() {
    check = !check;
}

string ToDo::stateCheck() const {
    if(check)
        return "fatto ";
    else
        return "da fare ";

}

const Date &ToDo::getDate() const {
    return date;
}

void ToDo::setDate(const Date &date) {
    ToDo::date = date;
}
void ToDo::printStringDate() const {
    cout<<to_string(date.getDay())+"/"+ to_string(date.getMonth())+"/"+ to_string(date.getYear())<<endl;
}

string ToDo::getStringDate() const{
    string d = to_string(date.getDay())+"/"+ to_string(date.getMonth())+"/"+ to_string(date.getYear());
    return d;
}

string ToDo::printTodo() const{

    return date.printDate()+" " + name + " "+stateCheck();
}