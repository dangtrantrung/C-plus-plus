#include <iostream>
#include <stdlib.h>
using namespace std;

class soPhuc{
private:
  int thuc;
  int ao;
public:
  soPhuc(){
    thuc=5;
    ao=3;
  }
  void Xuat(){
    cout<<thuc<<","<<ao<<endl;
  }
  friend void Cong2SoPhuc(soPhuc a, soPhuc b);
};

void Cong2SoPhuc (soPhuc a, soPhuc b){
  soPhuc c;
  c.thuc=a.thuc+b.thuc;
  c.ao=a.ao+b.ao;
  c.Xuat();
}

int main(){
    soPhuc a,b;
    Cong2SoPhuc(a,b);

    return 0;
}