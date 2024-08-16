#include <iostream>
using namespace std;
int main(){
    //continue
    for (int i=0;i<=10;i++){
        if(i==6)
        {
            continue;
        }
        cout<<i<<endl;
    }
    int l=0;
    while (l<=15){
            l++;
        if(l==6)
        {
            continue;
        }
    cout<<l<<endl;

    }

    //goto...:
    int n;
    try_again:
    cout<<"nhap n:";
    cin>>n;
    if(n<0||n%2==0)
    {
        cout<<"ban vua nhap n la so chan hoac so nho hon 0 - vui long nhap lai n"<<endl;
        goto try_again;}
        else{
            cout<<"ban vua nhap n="<<n<<endl;
        }

        //break
        while(true){
                cout<<"nhap n dung (n>0 và n%3==2)de ket thuc vong lap, n=";
                cin>>n;
            if(n>0&&n%3==2)break;
        }
        cout<<"gia tri n la:"<<n<<endl;
    return 0;
}
