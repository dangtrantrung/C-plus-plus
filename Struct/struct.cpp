#include <iostream>
using namespace std;
struct NgayThangNamSinh{
    int NgaySinh;
    int ThangSinh;
    int NamSinh;
};
struct SinhVien{
    char MSSV[10];
    float Diem;
    // int NgaySinh;
    // int ThangSinh;
    // int NamSinh;
    NgayThangNamSinh sinhNgay;
};


int main(){
SinhVien sv1,sv2;
sv1.Diem=9.0;
sv1.sinhNgay.NgaySinh=1;
sv1.sinhNgay.ThangSinh=10;
sv1.sinhNgay.NamSinh=2020;
sv1.sinhNgay.NamSinh=sv2.sinhNgay.NamSinh;
    cout<<sv1.sinhNgay.NamSinh<<endl<<sv2.sinhNgay.NamSinh<<endl;
    cout<<sv1.Diem<<endl;

    return 0;
}
