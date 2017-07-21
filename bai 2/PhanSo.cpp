#include "PhanSo.h"



PhanSo::PhanSo()
{
	tu = mau = 0;
}

void PhanSo::nhap()
{
	cout << "Nhap vao tu so: ";
	cin >> tu;
	cout << "\nNhap vao mau so: ";
	cin >> mau;
}
void PhanSo::xuat()
{
	cout << tu << "/" << mau;
}
PhanSo::~PhanSo()
{
}
