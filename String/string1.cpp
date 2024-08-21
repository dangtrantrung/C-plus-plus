#include <iostream>
#include <string>
#include <stdio.h>
#define MAX 255
using namespace std;


int main(){
  char s0[MAX];
  char str[25]; // an array store 24 character and last element is NULL: \0
  char str1[]={'H','e','l','l','o'};
  char str2[]="Hello";
  char *str3="Hello";
  cout<<str<<endl;
  cout<<str1<<endl;
  cout<<str2<<endl;
  cout<<str3<<endl;
  //cin, cin.getline,gets
  char *str4;
  str4= new char[30];
  cin.getline(str4,30);
  cout<<str4<<endl;
  //gets
  char *s1;
  s1= new char[MAX];
  gets(s0);
  gets(s1);
  cout<<"chuoi 0"<<s0<<endl;
  cout<<"chuoi 1"<<s1<<endl;

  return 0;
}