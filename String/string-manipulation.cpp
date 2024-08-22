#include <iostream>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <cstring>
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
 cout<<"xuat chuoi 2:"<<puts(string2)<<"so phan tu="<<sizeof(string2)/sizeof(char)<<endl;
 cout<<"xuat noi 2 chuoi:"<<strcat(string2,string1)<<endl<<strlen(string2);
 cout<<"xuat noi 2 chuoi:"<<strncat(string2,string1,1)<<endl<<strlen(string2)<<endl;
 cout<<"so sanh 2 chuoi:"<<strcmp(string2,string1)<<endl;
 cout<<"so sanh 2 chuoi k phan biet hoa thuong:"<<strcmp(string2,string1)<<endl;

 cout<<"chuyen thanh chu hoa chuoi 1:\n";
 for (int x=0; x<strlen(string1); x++)
        putchar(toupper(string1[x]));
cout<<"chuyen thanh chu hoa chuoi 2:\n";
 for (int x=0; x<strlen(string2); x++)
        putchar(toupper(string2[x]));
return 0;
}