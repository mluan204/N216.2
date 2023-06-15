#pragma once
#include "cVe.h"

class cVe0d:public cVe
{
public:
	cVe0d(){}
	void Nhap();
	void Xuat();

	int getLoai()
	{
		return 3;
	}
};

