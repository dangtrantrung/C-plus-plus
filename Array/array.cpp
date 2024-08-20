#include <iostream>
// #include <iomanip.h>
#include <stdlib.h>
#include <vector>
using std::cout;
using std::vector;

int main(){
    int a[5]={4,5,3,6,7};
    // for (int i=0;i<sizeof(a)/sizeof(int);i++){
    //     cout<<a[i]<<" ";
    // }
     for (int i:a){
        cout<<i<<" ";
    }

    int b[50];
    for(int i=0;i<50;i++){
        b[i]=rand()% 50+1;
        }
    cout<<"Mang ngau nhien 50 phan tu, tu 1 den 50"<<std::endl;
    for (int i:b){
        cout<<i<<" ";
    }
    cout<<"Mang ngau nhien 50 phan tu, tu 1 den 50"<<std::endl;
    for (int i=0;i<50;i++){
        cout<<b[i]<<" ";
    }
    vector<int> c;
    for (int i=0;i<100;i++){
         c.push_back(rand()% 100+1);
    }
    for (int i:c){
        cout<<i<<" ";
    }
    return 0;
}
