#include "cQuanLyResort.h"

int main()
{
	cQuanLyResort a;
	a.Nhap();

	cout << "--------------- THONG KE CUA RESORT ---------------------" << endl;
	cout << "\nI. Tong tien resort thu duoc tu tien dich vu: " << a.TongTienDichVu() << endl;

	cout << "\nII. Ve su dung nhieu dich vu giai tri nhat: " << endl;
	a.maxdvgt()->Xuat();

	cout << "\nIII. Trung binh ve thuong va ve 0 dong su dung dich vu giai tri: " << endl;
	a.TBve();

	return 0;
}