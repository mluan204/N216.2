#include "cVe.h"

void cVe::Nhap()
{
	cin.ignore();
	cout << "- Nhap ho ten: ";
	getline(cin, hoten);
	cout << "- Nhap CMND: ";
	getline(cin, cmnd);
}

void cVe::Xuat()
{
	cout << "- Ho ten: " << hoten << endl;
	cout << "- CMND: " << cmnd << endl;
}
