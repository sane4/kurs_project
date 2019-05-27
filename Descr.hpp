#pragma once
#include <string>
#include <iostream>
using namespace std;

//�������� ������ �����
struct Descr{
	string producer;//������������
	int year;//��� ������
	string number;//�������� �����
	int pages; //���-�� �������
	string pereplet;//�������
	string author;//�����
	string format;//������
	int tirage;//�����
	friend ostream& operator <<(ostream& out, const Descr& d){
			out << "\n" << d.producer;//������������
			out << "\n" << d.year;//��� ������
			out << "\n" << d.number;//�������� �����
			out << "\n" << d.pages; //���-�� �������
			out << "\n" << d.pereplet;//�������
			out << "\n" << d.author;//�����
			out << "\n" << d.format;//������
			out << "\n" << d.tirage;//�����
		 return out;
	}
	friend istream& operator >>(istream& in, Descr& d){
			in >> d.producer;//������������
			in >> d.year;//��� ������
			in >> d.number;//�������� �����
			in >> d.pages; //���-�� �������
			in >> d.pereplet;//�������
			in >> d.author;//�����
			in >> d.format;//������
			in >> d.tirage;//�����
		 return in;
	}
};