//
// Created by pippo on 26/08/2022.
//

#include "Agenda.h"

void Agenda::addTodo(ToDo t) {
    Todos.push_back(t);
    saveAgenda();
}

void Agenda::removeTodo(string name) {
    Todos.erase(findTodobyname(name));
    saveAgenda();
}

list<ToDo>::iterator Agenda::findTodobyname(string name) {
    for(auto i=Todos.begin() ; i!=Todos.end();i++)
        if(i->getName()==name)
            return i;
        runtime_error("Todo not found");
}

list<ToDo>::const_iterator Agenda::findTodobydate(string date) {
    /*int d,m,y;
    sscanf(date.c_str(),"%d%d%d",&d,&m,&y);*/
    for (auto i=Todos.begin() ; i!=Todos.end();i++)
        if(i->getStringDate()==date)
            return i;
    runtime_error("Todo not found");

}

void Agenda::printAgenda() const{
    int n=0;
    for (auto i=Todos.begin() ; i!=Todos.end();i++) {
        cout<<++n<< + ") "+i->printTodo();
    }
}

void Agenda::printTodo(string name) {
    findTodobyname(name)->printTodo();
}

void Agenda::printTodoInDate(string date) const{
    for (auto i=Todos.begin() ; i!=Todos.end();i++)
        if(i->getStringDate()==date)
            cout<<i->getName() +" " + i->getStringDate()<<endl;
    runtime_error("Todo not found");

}

void Agenda::changeCheck(string name) {

    findTodobyname(name)->setCheck();
    saveAgenda();
}

void Agenda::saveAgenda() {
    int n=0;
    ofstream todolist;
    todolist.open(agendaname+".txt");
    todolist<<"AGENDA\n\nNell'agenda sono presenti "<<Todos.size()<<" todo\n\n";
    for (auto i=Todos.begin() ; i!=Todos.end();i++)
        todolist<<++n<<") "<<i->getStringDate()<<" "<<i->getName()<<" "<<i->stateCheck()<<"\n\n";
    todolist.close();

}

int Agenda::howManyTodo() {
    return Todos.size();
}

int Agenda::remainingTodo() {
    //cout<<"I t odo ancora da completare sono:"<<endl;
    int n=0;
    for(auto i=Todos.begin(); i!=Todos.end();i++)
        if(!i->isCheck())
            n++;
            //cout<<i->getStringDate()<<" "<<i->getName()<<endl;
    return n;
}