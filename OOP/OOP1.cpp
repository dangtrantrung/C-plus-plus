#include <iostream>
using namespace std;
int x=10;
int main(){

    int x=5;
    cout<< "x trong main"<<x<<endl;
    cout<< "x ngoai main"<<::x<<endl; //access operator
    return 0;
}