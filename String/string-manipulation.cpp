#include <iostream>
#include <string.h>
#include <stdio.h>
#define MAX 255
using namespace std;


int main(){
//   char string1[20],string2[20];
//  cout<<"nhap chuoi 1:";gets(string1);
//  strcpy(string2,string1);
//  cout<<"xuat chuoi 2:"<<puts(string2);
 char string1[20],string2[20];
 cout<<"nhap chuoi 1:";gets(string1);
 strncpy(string2,string1,20);
 cout<<"xuat chuoi 2:"<<puts(string2)<<"so phan tu="<<sizeof(string2)/sizeof(char);

  return 0;
}