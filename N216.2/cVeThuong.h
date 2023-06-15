#pragma once
#include "cVe.h"

class cVeThuong:public cVe
{
private:
	int ngayo;
public:
	void Nhap();
	void Xuat();

	int getLoai()
	{
		return 2;
	}
};

