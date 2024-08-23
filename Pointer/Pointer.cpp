#include <iostream>
using namespace std;

int main(){
    int a=25,x;
    x=a;
    int *y;
    y=&a;
    cout<<a<<endl<<x<<endl<<y<<endl<<*y<<endl;
    return 0;
}
