#pragma once
#include <iostream>
using namespace std;
class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0){
		this->x = x;
		this->y = y;
	}
	Point& operator+(const Point & n){
		return Point(x + n.x, y + n.y);
	}
	Point& operator+(const int value){
		return Point(x + value, y + value);
	}
	bool operator==(const Point & p){
		return (x == p.x && y == p.y);
	}
	Point& operator++(){
		return Point(x++, y++);
	}
	friend Point& operator+(int, Point&);
	friend ostream& operator<<(ostream&, Point&);
	friend istream& operator>>(istream&, Point&);
	~Point();

	void showInfo();
};

