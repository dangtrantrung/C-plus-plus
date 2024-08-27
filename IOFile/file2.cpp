#include <iostream>
#include <fstream>
using namespace std;

int main(){
fstream myFile;
int a[10]={1,2,3,4,5,6,7,8,9,10};
myFile.open("data.dat",ios::out|ios::binary);
cout<<"ghi vao file .\n";
myFile.write(reinterpret_cast<char *>(a),sizeof(a));
myFile.close();
//read file
int b[10];
myFile.open("data.dat",ios::in|ios::binary);
// bool flag2=myFile1.fail();
// if(flag2==true) cout<<"File 2 khong ton tai"<<endl;
// else cout<<"mo file 2 thanh cong"<<endl;
cout<<"doc du lieu vao bo nho bien b.\n";
myFile.read(reinterpret_cast<char *>(b),sizeof(b));
for (int i=0;i<10;i++)cout<<b[i]<<" ";
myFile.close();

return 0;
}