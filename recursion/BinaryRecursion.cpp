#include <iostream>
using namespace std;

long Fibonacci(int n){
    //stop condition
    if(n==0||n==1){
        return 1;
    }
    return Fibonacci(n-1)+Fibonacci(n-2); //call self function >=2 times
}

int main(){
    int n;
    cout<<"Nhap n:";
    cin>>n;
    cout<<"So Fibonacci thu "<<n<<"="<<Fibonacci(n)<<endl;
}