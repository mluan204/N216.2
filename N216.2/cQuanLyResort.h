#pragma once
#include "cVe.h"
#include "cVeThuong.h"
#include "cVeVip.h"
#include "cVe0d.h"
#include <vector>

class cQuanLyResort
{
private:
	vector<cVe*> ds;
public:
	void Nhap();
	void Xuat();

	int TongTien();
	cVe* maxdvgt();
	void TBve();
};

