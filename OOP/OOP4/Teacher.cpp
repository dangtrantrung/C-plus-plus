#include "Person.h"
#include "Teacher.h"
Teacher::Teacher(string name,int numPapers):Person(name){
this->numPapers=numPapers;
}
bool Teacher::havePrize() const{
return this->numPapers>=3;
}
void Teacher::info() const{

cout<<"Name of Teacher:"<<name<<", Papers:"<<numPapers<<", Prize:"<<this->havePrize()<<endl;

}
