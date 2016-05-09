#include "Circle.h"



Circle::Circle()
{
}

Circle::Circle(double r)
{
	if (r > 0) {
		radius = r;
	}
	else {
		radius = 0;
	}
}


Circle::~Circle()
{
}

void Circle::setCircle(double r)
{
	if (r > 0) {
		radius = r;
	}
	else {
		radius = 0;
	}
}

void Circle::showInfo() 
{
	cout << "������ : " << radius << " ���� : " << getArea() << endl;
}
