#pragma once
#include "Shape.h"
class Circle : public Shape
{
	double radius;
public:
	Circle();
	Circle(double);
	~Circle();

	void setCircle(double);
	double getArea() { return radius*radius * 3.141592; }
	void showInfo();
};

