#include "cVeThuong.h"

void cVeThuong::Nhap()
{
	dvcb = 0;
	cVe::Nhap();
	cout << "- Nhap so ngay o resort: ";
	cin >> ngayo;
	cout << "- Nhap so dich vu giai tri su dung: ";
	cin >> dvgt;
	tiendv = dvgt * 200000;
	giave = 400000 * ngayo + tiendv;
}

void cVeThuong::Xuat()
{
	cVe::Xuat();
	cout << "- So ngay o resort: " << ngayo << endl;
	cout << "- So dich vu giai tri su dung: " << dvgt << endl;
	cout << "- So tien dich vu phai tra: " << tiendv << endl;
	cout << "- Tong gia ve (tien phong va dich vu): " << giave << endl;
	cout << endl;
}
