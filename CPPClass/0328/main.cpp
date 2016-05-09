#include <iostream>

using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) : x(x), y(y){}
	~Point() { cout << "Point Destroy!!! Boom!!!" << endl; }
	Point(Point&); // 자기 자신을 복사하는 복사 생성자. 기본으로 생성함.
	int getX() { return x; }
	int getY() { return y; }
	void moveXY(int, int);
	void showXY();
};
/*
	복사생성자
*/
Point::Point(Point& p) {
	cout << "난 복사생성자에요!" << endl;
	x = p.x;
	y = p.y;
}
void Point::moveXY(int _x, int _y)
{
	x += _x;
	y += _y;
}

void Point::showXY()
{
	cout << "(" << x << ", " << y << ")" << endl;
}

int main()
{
	Point p1(5, 5);  //생성자 호출
	Point p2(p1);	//복사생성자 호출

	p1.showXY();
	p2.showXY();

	Point p3 = p2; // 복사생성자호출 2

	p3.showXY();

}
