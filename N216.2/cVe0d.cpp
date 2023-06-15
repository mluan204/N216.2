#include "cVe0d.h"

void cVe0d::Nhap()
{
	cVe::Nhap();
	cout << "- Nhap so dich vu giai tri su dung: ";
	cin >> dvgt;
	cout << "- Nhap so dich vu co ban su dung: ";
	cin >> dvcb;
	tiendv = dvgt * 300000 + dvcb * 35000;
	giave = tiendv;
	cout << endl;
}

void cVe0d::Xuat()
{
	cVe::Xuat();
	cout << "\t- So dich vu giai tri su dung: " << dvgt << endl;
	cout << "\t- So dich vu co ban su dung: " << dvcb << endl;
	cout << "\t- So tien dich vu phai tra: " << tiendv << endl;
	cout << "\t- Tong gia ve: " << giave << endl;
	cout << endl;
}
