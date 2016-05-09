#pragma once
#include <string>

using namespace std;

class Product
{
	string code;
	string p_name;
	int price;
public:
	Product();
	Product(string, string, int);
	~Product();

	int getPrice();
	void showProduct();
};

