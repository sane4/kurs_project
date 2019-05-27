#include "Book.hpp"
#include "FantasyFabr.hpp"
#include "HorrorFabr.hpp"
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const Book* a, const Book *b){
	return string(a->tp()) > string(b->tp());
}

int main(){
	int ch;
	cout << "1. From file\n2. From console\n0. Exit\n";
	cin >> ch;
	vector<Book *> b;//книги в библиотеке
	if(ch == 0) return 0;
	if(ch == 1){
	  string fname;
	  cout << "Enter file name: ";
	  cin >> fname;
	  ifstream in(fname);
	  int cnt;
	  in >> cnt;
	  for(int i = 0; i < cnt; ++i){
		 string type;
		 in >> type;
		 if(type == "fantasy"){
		   b.push_back(new Book(new FantasyFabr(), in));
		 }
		 else{
			b.push_back(new Book(new HorrorFabr(), in));
		 }
	  }
	}
	else{
		cout << "Enter count: ";
		int count;
		cin >> count;
		 for(int i = 0; i < count; ++i){
			 int type;
			 cout << "1.fantasy\n2. horror\n";
			 cin >> type;
			 if(type == 1){
			   b.push_back(new Book(new FantasyFabr(), cin));
			 }
			 else{
				b.push_back(new Book(new HorrorFabr(), cin));
			 }
		  }
	}
	//сортируем и выводим
	sort(b.begin(), b.end(), cmp);
	ofstream out("out.txt");
	for(int i = 0; i < b.size(); ++i){
		out << *b[i] << '\n';
	}
}