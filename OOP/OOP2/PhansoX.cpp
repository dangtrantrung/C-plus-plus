#include <iostream>
#include "PhansoX.h"
using namespace std;
PhansoX::PhansoX():m_mauso(1),m_tuso(0){
}
PhansoX::PhansoX(int tuso, int mauso):m_mauso(mauso),m_tuso(tuso){
}
PhansoX::PhansoX(int tuso):m_mauso(1),m_tuso(tuso){
}
PhansoX& PhansoX::operator+=(PhansoX const& phanSoKhac){

m_tuso= phanSoKhac.m_mauso * m_tuso+ m_mauso * phanSoKhac.m_tuso;
m_mauso = m_mauso  * phanSoKhac.m_mauso;

return *this;
}


PhansoX operator+(PhansoX const& a, PhansoX const& b)
{
    PhansoX copya(a);
    copya+=b;
    return copya;

}
void PhansoX::hienThi(ostream& luong) const {
    if(m_mauso == 1){
        luong << m_tuso;
    }else{
        luong << m_tuso << '/' << m_mauso;
    }
}

int ucln(int a, int b){
    while (b != 0){
        const int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
void PhansoX::rutgon() {
    int uc=ucln(m_mauso,m_tuso);
    m_mauso=m_mauso/uc;
    m_tuso=m_tuso/uc;
}
std::ostream& operator<<(std::ostream& luong, PhansoX const& phanSo){
    phanSo.hienThi(luong);
    return luong;
}

