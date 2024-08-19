#include <iostream>
#include <math.h>
#include <string>

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

    //echo machine
    string str;
    do{
        cout<<"Enter text:";
        cin>>str;
        cout<<"You entered:"+str<<endl;

     }while (str!="goodbye");
    //range-based for loop
    string str1{"Hello! C++"};
    const char chararray("Heloo");
    for (char c:str1){
        cout<<"["<<c<<"]";
    }
    cout<<'\n';




}