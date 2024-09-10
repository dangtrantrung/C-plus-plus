#ifndef DEF_PHANSOX
#define DEF_PHANSOX

#include <iostream>
class PhansoX{
public:
    PhansoX();
    PhansoX(int tuso, int mauso);
    PhansoX(int tuso);
    void hienThi(std::ostream& luong) const;
    void rutgon();
    PhansoX& operator+=(PhansoX const& phanSoKhac); //overriding operator += in public member of class


private:
    int m_tuso;
    int m_mauso;
};

    int ucln(int a, int b);
    std::ostream& operator<<(std::ostream& luong, PhansoX const& phanso);
    PhansoX operator+(PhansoX const& a, PhansoX const& b);

#endif

