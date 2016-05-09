#include <iostream>

using namespace std;
class Point {
protected:
	int x, y;
public:
	Point(int  _x = 0, int _y = 0) { x = _x; y = _y; };
	~Point() {}
	int getX() { return x; };
	int getY() { return y; };
};

class Circle : public Point {
	float radius;
public:
	Circle(float r):Point(0,0) { radius = r; };
	Circle(int _x, int _y, float r):Point(_x, _y) {radius = r; };
	Circle(Point p, float r) :Point(p) { radius = r; };
	float getArea() { return  radius * radius * 3.141592; };
	void setCenter(int _x, int _y) { x = _x; y = _y; };
	void showInfo() { cout << "중심점 : (" << x << ", " << y << ") 반지름 : " << radius << " 면적 : " << getArea() << endl; }
};

int main()
{
	Point p1(1, 1);
	Circle c1(p1, 3.3);
	c1.showInfo();

	Circle c2(p1.getX(), p1.getY(), 4.5);
	c2.showInfo();

	Circle c3(10, 10, 5.5);
	c3.showInfo();

	Circle c4(2.3);
	c4.setCenter(20, 20);
	c4.showInfo();
	return 0;
}