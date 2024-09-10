#include <iostream>
#include "PhansoX.h"
using namespace std;

int main()
{
    std::cout << "Hello world!" << std::endl;
    PhansoX a(4,5),b(5),c;
    PhansoX d(8,6);
    PhansoX e(3,5), f(6,9);
    d.rutgon();
    std::cout<<a<<" "<<b<<" "<<c<<" "<<d<<std::endl;
    PhansoX cong=e+f;
    std::cout<<"cong ="<<cong<<endl;
    cong.rutgon();
    std::cout<<"cong rut gon ="<<cong<<endl;

    return 0;
}
