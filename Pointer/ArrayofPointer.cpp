#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main(){
int *p[5];
int a=7;
p[0]=&a;
p[2]=p[0];
int b;
b=*p[0];//b=6, value at address of: a,p[0],p[2]

return 0;
}
