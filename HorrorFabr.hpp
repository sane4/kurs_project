#pragma once
#include "BookFabrhpp.h"

//������� ��� �������
 class HorrorFabr: public BookFabr{
 public:
	 virtual const char* type(){ return "horror"; }
	virtual Descr* CreateDescription(std::istream& in){
			Descr* d = new Descr();
			in >> _count >> *d;
			return d;
	}
 };