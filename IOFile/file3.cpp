#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
// fstream myFile("data.txt",ios::in);
// char a[80];
// while(!myFile.eof())
// {
//     myFile>>a;
//     cout<<a<<" ";
// }
fstream myFile;
char a[100]="Xin chao cac ban";
myFile.open("data.txt",ios::out);
myFile<<a;
myFile.close();

return 0;
}