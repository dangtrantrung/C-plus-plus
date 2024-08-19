#include <iostream>
using namespace std;

int Giaithua(int n){
    //stop condition
    if(n==0||n==1){
        return 1;
    }
    return n*(Giaithua(n-1)); //call self function
}
long Tong(int n){
    if(n==0) return 0;
    return(Tong(n-1)+n);
}
int main(){
    int n;
    cout<<"Nhap n:";
    cin>>n;
    cout<<n<<"!="<<Giaithua(n)<<endl;
    cout<<"Tong 1+...+"<<n<<"="<<Tong(n)<<endl;
}