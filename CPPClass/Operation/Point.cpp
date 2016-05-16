#include "Point.h"
#include <iostream>

using namespace std;




Point::~Point()
{
}

void Point::showInfo(){
	cout << "(" << x << ", " << y << ")";
}