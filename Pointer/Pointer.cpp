#include <iostream>
using namespace std;

int main(){
    int a=25,x,m,n=32;
    x=a;
    int *y;
    y=&a; //assign address of a to pointer y
    m=*y+5;//m=30->assign value of where y pointer point to?(a)
    cout<<a<<endl<<x<<endl<<y<<endl<<*y<<endl<<m<<endl;
    *y=n;
    cout<<"thay doi gia tri con tro"<<endl;
    cout<<a<<endl<<x<<endl<<y<<endl<<*y<<endl<<m<<endl;
    
    return 0;
}
