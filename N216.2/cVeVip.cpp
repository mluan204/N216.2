#include "cVeVip.h"

void cVeVip::Nhap()
{
	giave = 3000000;
	dvcb = 0;
	dvgt = 0;
	tiendv = 0;
	cVe::Nhap();
	cout << endl;
}

void cVeVip::Xuat()
{
	cVe::Xuat();
	cout << "- Gia ve: 3000000" << endl;
	cout << endl;
}