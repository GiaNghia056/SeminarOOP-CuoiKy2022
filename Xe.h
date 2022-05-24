#pragma once
#include<iostream>
#include<string>
using namespace std;
class Xe
{
private:
	string Loai;
	int NamSX;
public:
	Xe(string loai = "", int nam = 0);
	~Xe();

	string GetLoai();
	int GetNamSX();

	void SetLoai(string loai);
	void SetNamSX(int nam);
};

