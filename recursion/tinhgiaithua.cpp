#include <iostream>
using namespace std;

int Giaithua(int n){
    //stop condition
    if(n==0||n==1){
        return 1;
    }
    return n*(Giaithua(n-1)); //call self function
}
int main(){
    int n;
    cout<<"Nhap n:";
    cin>>n;
    cout<<n<<"!="<<Giaithua(n);
}