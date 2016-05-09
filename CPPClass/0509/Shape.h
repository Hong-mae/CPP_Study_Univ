#pragma once
#include <iostream>

using namespace std;

class Shape
{
protected:
	Shape* next;
public:
	Shape();
	virtual ~Shape();
	virtual double getArea() = 0; // ���������Լ�
	virtual void showInfo() = 0;

	Shape* getNext() { return next; };
	Shape* add(Shape *p) { next = p; return p; }
};

