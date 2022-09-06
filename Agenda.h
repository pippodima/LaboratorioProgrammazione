//
// Created by pippo on 26/08/2022.
//

#ifndef LABORATORIOPROGRAMMAZIONE_AGENDA_H
#define LABORATORIOPROGRAMMAZIONE_AGENDA_H
#include "ToDo.h"
#include "list"
#include "string"
#include "fstream"
class Agenda {
    list<ToDo> Todos;
    string agendaname;

public:
    explicit Agenda(string n):agendaname(n){};

    void addTodo(ToDo t);
    void removeTodo(string name);

    _List_iterator<ToDo> findTodobyname(string name);
    _List_iterator<ToDo> findTodobydate(string date);

    void printAgenda() const;
    void printTodo(string name);  //chiama una funzione costante
    void printTodoInDate(string date) const;

    void changeCheck(string name);

    void saveAgenda();
    void howManyTodo();
    void remainingTodo();



};


#endif //LABORATORIOPROGRAMMAZIONE_AGENDA_H
