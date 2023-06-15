#include "cVeVip.h"

void cVeVip::Nhap()
{
	giave = 3000000;
	tiendv = 0;
	cVe::Nhap();
	cout << "- Nhap so dich vu giai tri su dung: ";
	cin >> dvgt;
	cout << "- Nhap so dich vu co ban su dung: ";
	cin >> dvcb;
	cout << endl;
}

void cVeVip::Xuat()
{
	cVe::Xuat();
	cout << "\t- So dich vu giai tri su dung: " << dvgt << endl;
	cout << "\t- So dich vu co ban su dung: " << dvcb << endl;
	cout << "\t- Gia ve: " <<giave<< endl;
	cout << endl;
}