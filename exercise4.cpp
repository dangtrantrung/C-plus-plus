#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int n;
    cout<< "input n=";
    cin>>n;
    int m;
    cout<< "input m=";
    cin>>m;
    for(int i=1;i<=n;i++){
        if(i%m==0)
        {
            cout<<i<<endl;
        }

    }
    while (n>0){
        cout<<n<<",";
        --n;
    }
    cout<<"liftoff!\n";

}