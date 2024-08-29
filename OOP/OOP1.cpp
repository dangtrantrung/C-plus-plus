#include <iostream>
#include <malloc.h>
#include <time.h>
#include <stdlib.h>
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
     //array pointer
    int n;
    cout<<"nhap n";
    cin>>n;
    int* p1;
    p1= new int[n];
//    for(int i=0;i<n;i++){
//     cout<<"nhap phan tu thu"<<i<<endl;
//     cin>>*(p+i);
//    }
srand((unsigned)time(NULL));
for(int i=0;i<n;i++){
    *(p+i)=rand()%99+1;
}
for(int i=0;i<n;i++){

    cout<<"mang random la:"<<*(p+i)<<"\t";
   }
   for(int i=0;i<n-1;i++){
    for (int j=i+1;j<n;j++){
        if(*(p+i)>*(p+j)){
            swap(*(p+i),*(p+j));
        }
    }

   }
    cout<<"mang random swap la:"<<endl;
    for(int i=0;i<n;i++){

    cout<<*(p+i)<<"\t";
   }
    return 0;
}