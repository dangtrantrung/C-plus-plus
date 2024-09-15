#ifndef person_h
#define person_h
#include <iostream>
using namespace std;
//abstract class-interface
class Person{
protected:
    string name;
public:
    Person(string name);
    virtual bool havePrize() const=0;
    virtual void info()const =0;

};
#endif // person_h
