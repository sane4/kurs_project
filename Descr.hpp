#pragma once
#include <string>
#include <iostream>
using namespace std;

//описание каждой книги
struct Descr{
	string producer;//издательство
	int year;//год идания
	string number;//серийный номер
	int pages; //кол-во страниц
	string pereplet;//переплёт
	string author;//автор
	string format;//формат
	int tirage;//тираж
	friend ostream& operator <<(ostream& out, const Descr& d){
			out << "\n" << d.producer;//издательство
			out << "\n" << d.year;//год идания
			out << "\n" << d.number;//серийный номер
			out << "\n" << d.pages; //кол-во страниц
			out << "\n" << d.pereplet;//переплёт
			out << "\n" << d.author;//автор
			out << "\n" << d.format;//формат
			out << "\n" << d.tirage;//тираж
		 return out;
	}
	friend istream& operator >>(istream& in, Descr& d){
			in >> d.producer;//издательство
			in >> d.year;//год идания
			in >> d.number;//серийный номер
			in >> d.pages; //кол-во страниц
			in >> d.pereplet;//переплёт
			in >> d.author;//автор
			in >> d.format;//формат
			in >> d.tirage;//тираж
		 return in;
	}
};