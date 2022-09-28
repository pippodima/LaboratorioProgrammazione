#include <iostream>
#include "ToDo.h"
#include "Date.h"
#include "Agenda.h"
using namespace std;

int main() {
    Agenda agenda("Impegni");


    Date d(31,3,2000);
    ToDo t("compleanno Alberto",d);

    //d.setMonth(9); //ERRORE
    d.setDay(25);

    agenda.howManyTodo();  //test n1
    cout<<endl;


    Date d2(15,1,2018);
    ToDo t2("cena sushi",d2);

    agenda.addTodo(t);

    agenda.howManyTodo();  //test n2
    cout<<endl;

    agenda.addTodo(t2);

    agenda.printAgenda();
    cout<<endl;

    agenda.changeCheck("cena sushi");
    agenda.printAgenda();
    cout<<endl;

    //agenda->removeTodo("cena sushi");
    //agenda->printAgenda();

    agenda.howManyTodo(); //test n3
    cout<<endl;


    agenda.remainingTodo();

    cout<<d.printDate()<<endl;

    agenda.findTodobyname("cena sushi");

    return 0;
}
