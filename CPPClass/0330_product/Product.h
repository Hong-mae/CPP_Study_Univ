#pragma once
class Product
{
	char code;
	int price;
	int count;
	int tax;
	int total;

public:
	Product();
	Product(char, int, int);
	~Product();
	void set(int, int);
	double getTax();
	void showInfo();
	void selectedInfo(char);
};