#include <iostream>
#include <fstream>
using namespace std;

int main(){
fstream myFile1;
myFile1.open("data.dat",ios::in|ios::binary);
bool flag1=myFile1.fail();
if(flag1==true) cout<<"File 1 khong ton tai"<<endl;
else cout<<"mo file 1 thanh cong"<<endl;
fstream myFile2;
myFile2.open("data.txt",ios::in);
bool flag2=myFile2.fail();
if(flag2==true) cout<<"File 2 khong ton tai"<<endl;
else cout<<"mo file 2 thanh cong"<<endl;

return 0;
}