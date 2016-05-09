#include "Product.h"
#include <iostream>

using namespace std;

Product::Product()
{}

Product::Product(string _code, string _pName, int _price)
{
	code = _code;
	p_name = _pName;
	price = _price;
}


Product::~Product()
{}

int Product::getPrice()
{
	return price;
}

void Product::showProduct()
{
	cout << "\t제품명: " << p_name << " (" << code << ")\t" << getPrice() << "원\t";
}
