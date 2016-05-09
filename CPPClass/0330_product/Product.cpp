#include <iostream>
#include "Product.h"

using namespace std;

Product::Product()
{}

Product::Product(char _code, int _price, int _count)
{
	code = _code;
	price = _price;
	count = _count;
	tax = getTax();
	total = (_price * _count) + tax;
}

Product::~Product()
{}

void Product::set(int _price, int _count)
{
	code = 'c';
	price = _price;
	count = _count;
	tax = getTax();
	total = (_price * _count) + tax;
}

double Product::getTax()
{
	switch (code)
	{
	case 'c': // ���ο�
		tax = (price*count) * 0.2;
		break;
	case 'e': // �����
		tax = (price*count) * 0.17;
		break;
	case 'p': // ��������
		tax = (price*count) * 0.13;
		break;
	}

	return tax;
}

void Product::showInfo()
{
	if (code != NULL) {

		if (code == 'c')cout << "���ο�\t";
		else if (code == 'e')cout << "�����\t";
		else if (code == 'p')cout << "��������";

		cout << price << "\t" << count << "\t" << price*count << "\t" << tax << "\t" << total << endl;
	}

}

void Product::selectedInfo(char _code)
{
	if (code != NULL && code == _code) {

		if (code == 'c')cout << "���ο�\t";
		else if (code == 'e')cout << "�����\t";
		else if (code == 'p')cout << "��������";

		cout << price << "\t" << count << "\t" << price*count << "\t" << tax << "\t" << total << endl;
	}
}