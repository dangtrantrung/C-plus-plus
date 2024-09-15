#include "Person.h"
#include "Student.h"

Student::Student(string name,double GPA):Person(name){
this->GPA=GPA;
}
bool Student::havePrize() const{
return this->GPA>=9;
}
void Student::info() const{

cout<<"Name of Student:"<<name<<", GPA:"<<GPA<<", Prize:"<<this->havePrize()<<endl;

}
