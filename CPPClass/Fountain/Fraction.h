#pragma once
#include <iostream>
using namespace std;
class Fraction
{
	int x, y; // �и�, ����

public:
	Fraction();
	Fraction(int y1, int x1) // ���� �и�
	{
		x = x1;
		y = y1;
	}
	~Fraction();

	Fraction& operator+(const Fraction&);
	Fraction& operator-(const Fraction&);
	Fraction& operator*(const Fraction&);
	Fraction& operator/(const Fraction&);
	bool operator==(Fraction&);
	bool operator>(Fraction&);

	friend ostream& operator<<(ostream&, Fraction&);
	friend istream& operator>>(istream&, Fraction&);

	int gcd(int, int);
};

