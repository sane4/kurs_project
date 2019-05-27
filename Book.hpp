#pragma once
#include "BookFabrhpp.h"

class Book{
private:
	Descr *description;
	const char *type;
	int count;
public:
	 Book(BookFabr *bf, std::istream& in){
		 description = bf->CreateDescription(in);
		 type = bf->type();
		 count = bf->count();
	 }
	 const char *tp() const {return type;}
	 friend std::ostream& operator <<(std::ostream& out, const Book& b){
	   out << b.type << " : " << b.count << '\n' << *(b.description);  
	   return out;
	 }
};