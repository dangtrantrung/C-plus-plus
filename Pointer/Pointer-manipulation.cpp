#include <iostream>
using namespace std;

int main(){
    int a=10,*p1,*p2;
    p1=&a;
    p2=p1;
    cout<<a<<endl<<*p1<<endl<<*p2;
    *p1=5;
    cout<<"thay doi gia tri con tro"<<endl;
    cout<<a<<endl<<*p1<<endl<<*p2<<endl<<p1<<endl<<p2<<endl;
    // *p++ *p--: change address of pointer by data type - number of byte
    *p1++;
    *p2++;
    cout<<p1<<endl<<p2<<endl;

    //permutation
    int x=10,y=20,*px,*py, temp;
    px=&x;
    py=&y;
    temp=*px;
    *px=*py;
    *py=temp;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    //mallloc,free, if, new,delete, void pointer void *pointer
    return 0;
}
