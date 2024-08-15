#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int n;
    cout<< "input n=";
    cin>>n;
    unsigned long long s=1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    cout<<"Factorial n!=1*2*3*...*n="<<s<<endl;
}