#include "Rectangle.h"



Rectangle::Rectangle()
{
}

Rectangle::Rectangle(double w, double h)
{
	if (w > 0) width = w;
	else width = 0;

	if (h > 0) height = h;
	else height = 0;
}


Rectangle::~Rectangle()
{
}

void Rectangle::setValues(double w, double h)
{
	if (w > 0) width = w;
	else width = 0;

	if (h > 0) height = h;
	else height = 0;
}

double Rectangle::getArea() 
{
	return width * height;
}

void Rectangle::showInfo() 
{
	cout << "가로 : " << width << " 세로 : " << height << " 면적 : " << getArea() << endl;
}
