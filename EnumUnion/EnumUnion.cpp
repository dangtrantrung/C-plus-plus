#include <iostream>
using namespace std;
enum MyColor{black,blue,yellow,red};
MyColor myColor1;

int main(){
    myColor1=MyColor(0);
cout<<myColor1<<endl;
if(myColor1==black) myColor1=red;
cout<<myColor1;
//union
union EnumUnion
{
    /* data */
    char c;
    float f;
    int i;
} so;
so.c='C';
cout<<"so.c="<<so.c<<endl;
so.i=1;
cout<<"so.i="<<so.i<<endl;
so.f=1.5;
cout<<"so.f="<<so.f<<endl;
//
so.c='C';
so.i=1;
so.f=1.5;
cout<<"so.c="<<so.c<<endl;
cout<<"so.i="<<so.i<<endl;
cout<<"so.f="<<so.f<<endl;



return 0;
}
