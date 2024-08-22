#include <iostream>
#include <string>
#include <stdio.h>
#define MAX 255
using namespace std;


int main(){
  char *ptrstring[5];
  for (int i=0;i<5;i++)
  {
    //cout<<"name"<<i<<":";cin>>list[i];
    ptrstring[i]=new char[20];
  }
  for (int i=0;i<5;i++)
  {
    cout<<"input string i "<<gets(ptrstring[i])<<endl;
  }
  for (int i=0;i<5;i++)
  {
    cout<<"ouput string i= "<<ptrstring[i]<<endl;
  }

  return 0;
}