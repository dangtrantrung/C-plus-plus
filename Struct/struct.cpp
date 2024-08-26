#include <iostream>
using namespace std;

struct SinhVien{
    char MSSV[10];
    float Diem;
    // int NgaySinh;
    // int ThangSinh;
    // int NamSinh;
    NgayThangNamSinh sinhNgay;
}
typedef struct NgayThangNamSinh{
    int NgaySinh;
    int ThangSinh;
    int NamSinh;
}
