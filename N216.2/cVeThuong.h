#pragma once
#include "cVe.h"

class cVeThuong:public cVe
{
private:
	int ngayo = 0;
public:
	cVeThuong(int ngayo = 0 ){
		this->ngayo = ngayo;
	}
	void Nhap();
	void Xuat();

	int getLoai()
	{
		return 2;
	}
};

