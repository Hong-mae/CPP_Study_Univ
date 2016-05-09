#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
	double width, height;
public:
	Rectangle();
	Rectangle(double, double);
	~Rectangle();

	void setValues(double, double);
	double getArea();
	void showInfo();
};

