#pragma once
#include "Descr.hpp"

//фабрика для создания техники
class BookFabr{
protected:
	int _count;
public:
	virtual const char* type() = 0;
	int count() const {return _count;}
	//описание книги
	virtual Descr* CreateDescription(std::istream& in) = 0;
};