#include "gtest/gtest.h"

#include "../Date.h"
#include "../Agenda.h"
using namespace std;

TEST(Date, setDate) {

    Date d(31,3,2333);
    ASSERT_EQ(d.getDay(),31);
    ASSERT_EQ(d.getMonth(),3);
    ASSERT_EQ(d.getYear(),2333);

    ASSERT_THROW(d.setMonth(9), runtime_error);
    ASSERT_EQ(d.getMonth(),3); //test passato perche rimane a marzo

    d.setDay(25);
    ASSERT_EQ(d.getDay(),25);
    d.setYear(1900);
    ASSERT_EQ(d.getYear(),1900);

}

TEST(Agenda, howmanytodo){
    Agenda a("name");
    Date d(20,2,2333);

    ToDo t("todoname",d);
    ASSERT_EQ(a.howManyTodo(),0);
    a.addTodo(t);
    ASSERT_EQ(a.howManyTodo(),1);

    ASSERT_EQ(a.remainingTodo(),1);
    a.changeCheck("todoname");
    ASSERT_EQ(a.remainingTodo(),0);


}

TEST(Todo,Checktodo){
    Date d(20,2,2333);
    ToDo t("testname",d);

    ASSERT_EQ(t.isCheck(),false);
    t.setCheck();
    ASSERT_EQ(t.isCheck(),true);
    ASSERT_EQ(t.getName(),"testname");
    ASSERT_EQ(t.getStringDate(),"20/2/2333");

    Agenda a("Agendatest");
    a.addTodo(t);

    ASSERT_EQ(a.findTodobyname("testname")->getName(),"testname");

    ASSERT_THROW(a.findTodobyname("test"),runtime_error);
    ASSERT_THROW(a.findTodobydate("123/123/123"),runtime_error);

}