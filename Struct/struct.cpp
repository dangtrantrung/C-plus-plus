#include <iostream>
using namespace std;
typedef struct NgayThangNamSinh{
    int NgaySinh;
    int ThangSinh;
    int NamSinh;
};
typedef struct SinhVien{
    char MSSV[10];
    float Diem;
    // int NgaySinh;
    // int ThangSinh;
    // int NamSinh;
    NgayThangNamSinh sinhNgay;
};

typedef struct DANHSACH{
char hoten[25];
float toan,ly,hoa;
};
typedef struct Diem{
int x;
int y;
};

int main(){
DANHSACH bangdiem[50];
SinhVien sv1,sv2;
sv1.Diem=9.0;
sv1.sinhNgay.NgaySinh=1;
sv1.sinhNgay.ThangSinh=10;
sv1.sinhNgay.NamSinh=2020;
sv1.sinhNgay.NamSinh=sv2.sinhNgay.NamSinh;
cout<<sv1.sinhNgay.NamSinh<<endl<<sv2.sinhNgay.NamSinh<<endl;
cout<<sv1.Diem<<endl;
Diem *p,a;
p=&a;
p->x=10;
p->y=100;
cout<<a.x<<endl;
cout<<a.y;

return 0;
}
