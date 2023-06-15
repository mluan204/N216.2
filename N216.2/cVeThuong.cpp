#include "cVeThuong.h"

void cVeThuong::Nhap()
{
	cVe::Nhap();
	cout << "- Nhap so ngay o resort: ";
	cin >> ngayo;
	cout << "- Nhap so dich vu giai tri su dung: ";
	dvcb = 0;
	cin >> dvgt;
	tiendv = dvgt * 200000;
	giave = 400000 * ngayo + tiendv;
	cout << endl;
}

void cVeThuong::Xuat()
{
	cVe::Xuat();
	cout << "\t- So ngay o resort: " << ngayo << endl;
	cout << "\t- So dich vu giai tri su dung: " << dvgt << endl;
	cout << "\t- So tien dich vu phai tra: " << tiendv << endl;
	cout << "\t- Tong gia ve (tien phong va dich vu): " << giave << endl;
	cout << endl;
}
