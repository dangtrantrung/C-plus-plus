#include <iostream>
// #include <stdlib.h>
using namespace std;
int abs1(int a){
  if(a<0)
  return -a;
  else
  return a;
}

float abs1(float a){
  if(a<0)
  return -a;
  else
  return a;
}

int main(){
    int a=6;
    float b=-4.6;
    char c='a';
  cout<<"tri tuyet doi cua so int la "<<abs1(a)<<endl;
    cout<<"tri tuyet doi cua so float la "<<abs1(b)<<endl;
    cout<<"tri tuyet doi cua ky tu la "<<abs1(c)<<endl;

    return 0;
}