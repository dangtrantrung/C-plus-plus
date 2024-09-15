#ifndef student_h
#define student_h
#include <iostream>
#include "Person.h"
using namespace std;

class Student:public Person{
protected:
    double GPA;
public:
    Student(string name="unknown",double GPA=0);
    virtual bool havePrize() const;
    virtual void info()const;

};
#endif
