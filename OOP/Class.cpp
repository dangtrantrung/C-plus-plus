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
class People{
  private:
    string name;
    int age;
  protected:
     string favourite[5];
  public:
  People(){
   name="abc";
   age=19;
  }
  //~ destructor
  ~People(){
    cout<<"Destroy object";
  }
  void Talk(){
    cout<<"Hello"<<endl;
  }
  virtual void Info() {
    cout<<"Name:"<<name<<"-Age:"<<age<<endl;
  }

};
// class Man:private People{
//     string adrress;
//     int exp;
// };
class Man:public People{
    string address="bdf";
    int exp=15;
    public:
    void Info() override {
         cout<<"address:"<<address<<"exp:"<<exp<<endl;
    }
};

int main(){

    Student studentA;
    //cout<<studentA.name; name is private

    studentA.Learn();
    studentA.Play();
    studentA.Info();
    People a;
    a.Info();
    a.Talk();
    Man man;
    man.Info();//private, override

    return 0;
}