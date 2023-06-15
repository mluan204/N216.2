#include "cVeThuong.h"

void cVeThuong::Nhap()
{
	cVe::Nhap();
	cout << "- Nhap so ngay o resort: ";
	cin >> ngayo;
	cout << "- Nhap so dich vu giai tri su dung: ";
	cin >> dvgt;
	cout << "- Nhap so dich vu co ban su dung: ";
	cin >> dvcb;
	tiendv = dvgt * 200000;
	giave = 400000 * ngayo + tiendv;
	cout << endl;
}

void cVeThuong::Xuat()
{
	cVe::Xuat();
	cout << "\t- So ngay o resort: " << ngayo << endl;
	cout << "\t- So dich vu giai tri su dung: " << dvgt << endl;
	cout << "\t- So dich vu co ban su dung: " << dvcb << endl;
	cout << "\t- So tien dich vu phai tra (dich vu giai tri): " << tiendv << endl;
	cout << "\t- Tong gia ve (tien phong va dich vu giai tri): " << giave << endl;
	cout << endl;
}
