#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int n;
    cout<< "input n=";
    cin>>n;
    int s=0;
    for(int i=1;i<=n;i++){
        s+=pow(i,2);
    }
    cout<<"Sum S=1^2+2^2+...+n^2="<<s<<endl;
}