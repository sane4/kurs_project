#pragma once
#include "Descr.hpp"

//������� ��� �������� �������
class BookFabr{
protected:
	int _count;
public:
	virtual const char* type() = 0;
	int count() const {return _count;}
	//�������� �����
	virtual Descr* CreateDescription(std::istream& in) = 0;
};