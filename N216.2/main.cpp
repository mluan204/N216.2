#include "cQuanLyResort.h"

int main()
{
	cQuanLyResort a;
	a.Nhap();

	cout << "\n- Tong tien resort thu duoc tu tien dich vu: " << a.TongTienDichVu();
	cout << "\n- Ve su dung nhieu dich vu giai tri nhat: " << endl;
	a.maxdvgt()->Xuat();

	a.TBve();


	return 0;
}