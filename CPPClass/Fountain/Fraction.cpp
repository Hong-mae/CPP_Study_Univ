#include "Fraction.h"

Fraction::Fraction(){

}
Fraction::~Fraction()
{
}

Fraction& Fraction::operator+(const Fraction& p)
{
	int temp1 = x*p.x;
	int temp2 = x*p.y + p.x*y;
	int gcdTemp = gcd(temp2, temp1);
	return Fraction(temp2/gcdTemp, temp1/gcdTemp);
}
Fraction& Fraction::operator-(const Fraction& p)
{
	int temp1 = x*p.x;
	int temp2 = x*p.y - p.x*y;
	int gcdTemp = gcd(temp2, temp1);
	return Fraction(temp2 / gcdTemp, temp1 / gcdTemp);
}
Fraction& Fraction::operator*(const Fraction& p)
{
	int temp1 = x * p.x;
	int temp2 = y * p.y;
	int gcdTemp = gcd(temp2, temp1);

	return Fraction(temp2 / gcdTemp, temp1 / gcdTemp);
}
Fraction& Fraction::operator/(const Fraction& p)
{
	Fraction tempF1(y, x);
	Fraction tempF2(p.x, p.y);
	return tempF1 * tempF2;
}
bool Fraction::operator==(Fraction& p)
{
	int i = gcd(y, x);
	int u = gcd(p.y, p.x);
	
	if (y / i == p.y / u && x / i == p.x / u){
		return true;
	}

	return false;
}
bool Fraction::operator>(Fraction& p)
{
	double tempV1 = (double)y / x;
	double tempV2 = (double)p.y / p.x;

	return (tempV1 > tempV2);
}

int Fraction::gcd(int a, int b){
	int temp;
	if (a < b){
		temp = a;
		a = b;
		b = temp;
	}

	if (b == 0){
		return a;
	}
	else{
		return gcd(b, a % b);
	}
}

