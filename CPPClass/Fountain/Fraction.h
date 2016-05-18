#pragma once
#include <iostream>
using namespace std;
class Fraction
{
	int x, y; // 분모, 분자

public:
	Fraction();
	Fraction(int y1, int x1) // 분자 분모
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

