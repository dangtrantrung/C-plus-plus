#ifndef teacher_h
#define teacher_h
#include <iostream>
#include "Person.h"
using namespace std;
class Teacher:public Person{
protected:
    int numPapers;
public:
    Teacher(string name="unknown",int numPapers=0);
    virtual bool havePrize() const;
    virtual void info()const;

};
#endif

