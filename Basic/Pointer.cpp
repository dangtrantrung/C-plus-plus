// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    //Pointer, Container: List, Stack, Queue,Set, Map

    //1.Pointer
    int *pointerInt; //declare
    int* pointerInt1;
    int x=5, *px;
    px=&x; //assign pointer address of x, not value of x;
    *px=x; //assign value of x to px;
    int y=12, y1, *px1, *px2;
    px1=&y;
    cout<<endl<<"gia tri dia chi cua px1 va px2"<<endl;
    cout<<*px2<<endl<<*px1<<endl;
     cout<<px2<<endl<<px1<<endl;
    //*px1=x; //assign value of x to px1;
    px2=px1; //assgin address of px1 to px2, and value *px2

    cout<<endl<<&x<<endl<<x<<endl<<px<<endl<<y<<endl<<*px<<endl<<&y<<endl<<px1<<*px1<<endl<<y1<<endl<<&y<<endl<<*px2<<endl<<*px1<<endl<<px2<<endl<<px1<<endl;

    return 0;
}
