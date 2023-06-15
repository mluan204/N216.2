#pragma once
#include "cVe.h"

class cVeVip: public cVe
{
public:
	cVeVip(){}
	void Nhap();
	void Xuat();

	int getLoai()
	{
		return 1;
	}
};

