#include <iostream>
#include "Point.h"
// #include <string>

using namespace std;

int main(){
    Point p1;
    cin>>p1;
    cout<<p1;
    p1.move(3,4);
    cout<<p1;
    Point p2(3,6);
    p1+=p2;
    cout<<p1;
    Point p3=p1+p2;
    cout <<p3;

    return 0;
}
