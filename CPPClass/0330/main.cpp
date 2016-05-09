#include <iostream>
#pragma warning(disable:4996)

using namespace std;

class Book {
	char *title; // 책 제목 문자열을 받을 포인터
	int price;

public:
	Book(char*, int);
	~Book() { delete title; };
	Book(Book&); // 복사 생성자
	void showInfo();
};

//책 제목과 가격을 초기값으로 받는다.
//이때, 책제목 문자열크기만큼 동적 메모리를 할당받아 문자열을 준다.
Book::Book(char *str, int price)
{
	title = new char[strlen(str) + 1]; //문자열 크기+1만큼 동적할당
	strcpy(title, str); //문자열을 메모리에 넣음
	this->price = price;
}

Book::Book(Book& _b)
{
	cout << "복.사.생.성.자.호.출" << endl;
	title = new char[strlen(_b.title) + 1];
	strcpy(title, _b.title);
	price = _b.price;
}

void Book::showInfo()
{
	cout << "책 제목 : " << title << " 가격 : " << price << endl;
}

int main() 
{
	Book b1("C++ Programming", 10000);
	b1.showInfo();

	Book copyBook = b1; //Book(Book&)가 없을때는 디폴트복사생성자 호출됨.
	copyBook.showInfo();
}

