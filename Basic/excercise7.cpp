#include <iostream>
#include <vector>
using namespace std;
//tim day cac so nguyen to den so nguyen n
vector<int> result ={1};

int isSoNguyento(int x)
{
bool is_soNguyenTo=true;
    for (int l=2;l<x;l++)
    {
        if(x%l==0)
        {
           is_soNguyenTo=false;
           break;
        }
    }
    if(is_soNguyenTo==true)
        {
            //cout<<i<<" la so nguyen to"<<endl;
            result.push_back(x);
    }
    return 0;
}

int main(){

int n;
cout<<"nhap n=";
cin>>n;
for(int i=2;i<=n;i++)
{
  isSoNguyento(i);
}
cout<<"Prime Numbers is:"<<endl;
for (int i: result) cout <<i<<' ';
return 0;
}
