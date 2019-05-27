#pragma once
#include "BookFabrhpp.h"

//фабрика для фэнтези
 class FantasyFabr: public BookFabr{
 public:
	 virtual const char* type(){ return "fantasy"; }
	virtual Descr* CreateDescription(std::istream& in){
			Descr* d = new Descr();
			in >> _count >> *d;
			return d;
	}
 };