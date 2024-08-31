#include <iostream>
// #include <stdlib.h>
using namespace std;
class Student{

  private:
  string id;
  string name;
  int age;
  public:
  //constructor
  Student(){
    id="0001";
    name="John";
    age=18;
  }

  void Learn(){
    cout<<"Learn C++"<<endl;
  };
  void Play(){
    cout<<"Play game"<<endl;
  }
  void Info(){
    cout<<"ID:"<<id<<"-Name:"<<name<<"-Age:"<<age<<endl;
  }
};

int main(){

    Student studentA;
    //cout<<studentA.name; name is private

    studentA.Learn();
    studentA.Play();
    studentA.Info();
    return 0;
}