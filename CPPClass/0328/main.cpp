#include <iostream>

using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) : x(x), y(y){}
	~Point() { cout << "Point Destroy!!! Boom!!!" << endl; }
	Point(Point&); // �ڱ� �ڽ��� �����ϴ� ���� ������. �⺻���� ������.
	int getX() { return x; }
	int getY() { return y; }
	void moveXY(int, int);
	void showXY();
};
/*
	���������
*/
Point::Point(Point& p) {
	cout << "�� ��������ڿ���!" << endl;
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
	Point p1(5, 5);  //������ ȣ��
	Point p2(p1);	//��������� ȣ��

	p1.showXY();
	p2.showXY();

	Point p3 = p2; // ���������ȣ�� 2

	p3.showXY();

}
