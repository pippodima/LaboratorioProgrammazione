#include "gtest/gtest.h"

#include "../Date.h"
#include "../Agenda.h"

TEST(Date, setDay) {

    Date d(20,2,2333);
    //ASSERT_EQ(d.setDay(30),28);
}

TEST(Agenda, howmanytodo){
    Agenda a("name");
    Date d(20,2,2333);

    ToDo t("todoname",d);
    ASSERT_EQ(a.howManyTodo(),0);
    a.addTodo(t);
    ASSERT_EQ(a.howManyTodo(),1);

}

TEST(Todo,Checktodo){
    Date d(20,2,2333);
    ToDo t("testname",d);

    ASSERT_EQ(t.isCheck(),false);
    t.setCheck();
    ASSERT_EQ(t.isCheck(),true);
    ASSERT_EQ(t.getName(),"testname");
    ASSERT_EQ(t.getStringDate(),"20/2/2333");


}