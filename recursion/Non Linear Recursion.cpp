#include <iostream>
using namespace std;

long TinhXn(int n){
    //stop condition
    if(n==0)return 1;
    long s=0;
    for (int i=1;i<=n;i++)
        s=s+i*i*TinhXn(n-i); //call self function in loop
    return s;
}

int main(){
    int n;
    cout<<"Nhap n:";
    cin>>n;
    cout<<"Tinh so hang Xn cua day:n^2Xo+(n-1)X1+...+1^2Xn-1:"<<n<<"="<<TinhXn(n)<<endl;
}