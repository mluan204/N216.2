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
	cQuanLyResort(){}
	void Nhap();
	void Xuat();

	int TongTienDichVu();
	cVe* maxdvgt();
	void TBve();
};

