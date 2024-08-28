#include <iostream>
#include <malloc.h>
using namespace std;
int x=10;
int main(){

    int x=5;
    cout<< "x trong main"<<x<<endl;
    cout<< "x ngoai main"<<::x<<endl; //access operator
    //malloc C
     int* p;
     p=(int*)malloc(sizeof(int));
     free(p);
     // C++
     int* ptn =new int;
     cout<<ptn;
     delete ptn;
     cout<<ptn;


    return 0;
}