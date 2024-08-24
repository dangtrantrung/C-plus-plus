#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main(){
char ch[]="Hello,world",*p;
p=ch; //assign address of first element ch[0] of ch array to pointer
//third element of array ch[2] or *(p+2)
cout<<ch[2]<<"or"<<*(p+2)<<endl;
cout<<ch[1]<<"or"<<*(p+1)<<endl;
int numbers[5],*p1;
p1=numbers;*p1=10;
p1++;*p1=20;
p1=&numbers[2];*p1=30;
p1=numbers+3;*p1=40;
p1=numbers;*(p1+4)=50;
for (int i=0;i<5;i++)cout<<numbers[i]<<",";



return 0;
}
