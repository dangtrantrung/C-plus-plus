#include <iostream>
#include <fstream>
using namespace std;

int main(){
fstream myFile1;
char a='a',b;
myFile1.open("data.dat",ios::out|ios::binary);
cout<<"ghi vao file .\n";
myFile1.write(&a,sizeof(a));
myFile1.close();
//read file
myFile1.open("data.dat",ios::in|ios::binary);
// bool flag2=myFile1.fail();
// if(flag2==true) cout<<"File 2 khong ton tai"<<endl;
// else cout<<"mo file 2 thanh cong"<<endl;
cout<<"doc du lieu vao bo nho bien b.\n";
myFile1.read(&b,sizeof(b));
cout<<b<<" ";
myFile1.close();

return 0;
}