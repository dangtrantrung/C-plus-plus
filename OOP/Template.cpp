#include <iostream>
// #include <stdlib.h>
using namespace std;
template <class T>
T MyAbs(T x){
  return x>0?x:(-x);
}
template <class T>
T Max(T a, T b){
  return  a>b?a:b;
}
int main(){
cout<<MyAbs(4)<<endl;
cout<<MyAbs(-3.4)<<endl;
cout<<Max(2,5)<<endl;
cout<<Max(3.4,-8.9)<<endl;
cout<<Max('a','c')<<endl;

    return 0;
}