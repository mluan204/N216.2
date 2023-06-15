#pragma once
#include <iostream>
#include <string>
using namespace std;

class cVe
{
protected:
	string hoten, cmnd;
	int	dvgt, dvcb, giave, tiendv;
public:
	cVe(string hoten = "", string cmnd = "", int dvgt = 0, int dvcb = 0, int giave = 0, int tiendv = 0) {
		this->hoten = hoten;
		this->cmnd = cmnd;
		this->dvgt = dvgt;
		this->dvcb = dvcb;
		this->giave = giave;
		this->tiendv = tiendv;
	}

	virtual void Nhap();
	virtual void Xuat();

	int getdvgt() { return dvgt; }
	int gettiendv() { return tiendv; }
	virtual int getLoai() = 0;

	~cVe(){}
};



