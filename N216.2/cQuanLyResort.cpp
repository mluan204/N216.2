#include "cQuanLyResort.h"

void cQuanLyResort::Nhap()
{
	int tongve;
	cout << "Nhap vao tong so ve: ";
	cin >> tongve;
	int loai;
	
	cout << "-------------------MENU--------------------" << endl;
	cout << "|- Nhap thong tin ve vip       (1)        |" << endl;
	cout << "|- Nhap thong tin ve thuong    (2)        |" << endl;
	cout << "|- Nhap thong tin ve 0 dong    (3)        |" << endl;
	cout << "-------------------------------------------" << endl;	
	for (int i = 0; i < tongve; i++)
	{
		do
		{
			cout << "=> Nhap lua chon: ";
			cin >> loai;
		} while (loai != 1 && loai != 2 && loai != 3);
		cVe* p;
		if (loai == 1) {
			p = new cVeVip;
		}
		else {
			if (loai == 2) {
				p = new cVeThuong;
			}
			else
			{
				if (loai == 3)
				{
					p = new cVe0d;
				}
			}
		}
		p->Nhap();
		ds.push_back(p);
	}
}

void cQuanLyResort::Xuat()
{
	for (int i = 0; i < ds.size(); i++)
	{
		ds[i]->Xuat();
	}
}

int cQuanLyResort::TongTien()
{
	int tongtiendv = 0;
	for (int i = 0; i < ds.size(); i++)
	{
		tongtiendv += ds[i]->gettiendv();
	}
	return tongtiendv;
}

cVe* cQuanLyResort::maxdvgt()
{
	cVe* max = ds[0];
	for (int i = 1; i < ds.size(); i++)
	{
		if (max->getdvgt() < ds[i]->getdvgt())
			max = ds[i];
	}
	return max;
}

void cQuanLyResort::TBve()
{
	int demvt = 0;
	int tongdvvt = 0;
	for (int i = 0; i < ds.size(); i++)
	{
		if (ds[i]->getLoai() == 2) {
			tongdvvt += ds[i]->getdvgt();
			demvt++;
		}
	}

	int demve0d = 0;
	int tongdv0d = 0;
	for (int i = 0; i < ds.size(); i++)
	{
		if (ds[i]->getLoai() == 3) {
			tongdv0d += ds[i]->getdvgt();
			demve0d++;
		}
	}
	cout << "- Trung binh 1 ve thuong su dung " << tongdvvt / demvt << " dich vu giai tri " << endl;
	cout << "- Trung binh 1 ve 0 dong su dung " << tongdv0d / demve0d << " dich vu giai tri " << endl;
}
