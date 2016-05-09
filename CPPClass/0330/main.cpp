#include <iostream>
#pragma warning(disable:4996)

using namespace std;

class Book {
	char *title; // å ���� ���ڿ��� ���� ������
	int price;

public:
	Book(char*, int);
	~Book() { delete title; };
	Book(Book&); // ���� ������
	void showInfo();
};

//å ����� ������ �ʱⰪ���� �޴´�.
//�̶�, å���� ���ڿ�ũ�⸸ŭ ���� �޸𸮸� �Ҵ�޾� ���ڿ��� �ش�.
Book::Book(char *str, int price)
{
	title = new char[strlen(str) + 1]; //���ڿ� ũ��+1��ŭ �����Ҵ�
	strcpy(title, str); //���ڿ��� �޸𸮿� ����
	this->price = price;
}

Book::Book(Book& _b)
{
	cout << "��.��.��.��.��.ȣ.��" << endl;
	title = new char[strlen(_b.title) + 1];
	strcpy(title, _b.title);
	price = _b.price;
}

void Book::showInfo()
{
	cout << "å ���� : " << title << " ���� : " << price << endl;
}

int main() 
{
	Book b1("C++ Programming", 10000);
	b1.showInfo();

	Book copyBook = b1; //Book(Book&)�� �������� ����Ʈ��������� ȣ���.
	copyBook.showInfo();
}

