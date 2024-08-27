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
fstream myFile("data.txt",ios::in);
char a[80];
//tu byte thu 2 moi doc;
//f.seekg(2);
while(!myFile.eof())
{
    //tu vi tri hien tai nhay 2 byte
    //f.seekg(2,ios::cur)
    myFile>>a;
    cout<<"Gia tri:"<<a;
    cout<<endl;
    cout<<"Vi tri:"<<myFile.tellg();
    cout<<endl;

}
myFile.close();

return 0;
}