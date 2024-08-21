#include <iostream>
#include <string>
#include <stdio.h>
#define MAX 255
using namespace std;


int main(){
  char arraystring [][MAX]={"AAa","bbd","CCCC"};
  char list[5][20];
  for (int i=0;i<5;i++)
  {
    //cout<<"name"<<i<<":";cin>>list[i];
    cout<<"name"<<i<<":";gets(list[i]);

  }
  for (int i=0;i<5;i++)

  {
    cout<<"string array elements "<<list[i]<<endl;
  }

  return 0;
}