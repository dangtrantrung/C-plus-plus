#include "Person.h"
#include "Student.h"
#include "Teacher.h"

int main(){

Student t0;
t0.info();
Student t("Superman",10);
t.info();
Student t1("Superman1",8);
t1.info();
Teacher h0;
h0.info();
Teacher h("Iron man",2);
h.info();
Teacher h1("Iron man1",4);
h1.info();
return 0;
}
