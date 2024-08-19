#include <iostream>
using namespace std;

long TinhYn(int n);
long TinhXn(int n){
    //stop condition
    if(n==0)return 1;
     //call self and other recursive function
    return TinhXn(n-1)+TinhYn(n-1);
}
long TinhYn(int n){
    //stop condition
    if(n==0)return 1;
     //call self and other recursive function
    return n*n*TinhXn(n-1)+TinhYn(n-1);
}

int main(){
    int n;
    cout<<"Nhap n:";
    cin>>n;
    cout<<"Tinh so hang Xn "<<TinhXn(n)<<endl;
    cout<<"Tinh so hang Yn "<<TinhYn(n)<<endl;

}