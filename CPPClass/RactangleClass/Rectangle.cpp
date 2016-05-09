#include "Rectangle.h"
#include <iostream>

using namespace std;

CRectangle::CRectangle()
{
}

//기본 생성자 함수는 컴파일러가 자동 생성함.
CRectangle::CRectangle(int w, int h)
{
	if (w > 0 && h > 0) {
		width = w;
		height = h;
	}
}


CRectangle::~CRectangle()
{
}

void CRectangle::setValues(int _width, int _height)
{
	if (_width > 0 && _height > 0) {
		width = _width;
		height = _height;
	}
	else {
		width = height = 0;
	}
}

int CRectangle::getArea()
{
	return width * height;
}

bool CRectangle::isSquare()
{
	if (width == height)
		return true;
	else
		return false;
}

void CRectangle::showInfo()
{
	cout << "너비 : " << width << ", 높이 : " << height << ", 넓이 : " << getArea() << endl;
}

bool CRectangle::isEqual(CRectangle r1)
{
	if ((r1.height == height && r1.width == width) || (r1.height == width && r1.width == height))
		return true;
	else
		return false;
}

int main() {
	CRectangle r1(3, 5), r2(5, 3); // 인자를 가지고객체 생성
	CRectangle myRec; // 생성자가 하나도 없을 경우만 기본생성자를 자동으로 생성.

	//1)외부로부터 가로, 세로 값을 읽어들여 myRec객체 설정
	int w, h;

	cout << "너비와 높이를 입력하세요 : ";
	cin >> w >> h;
	myRec.setValues(w, h);

	//myRec이 정사각형인지 출력
	if (myRec.isSquare())
		cout << "정사각형 입니다!" << endl;
	else
		cout << "정사각형이 아닙니다.." << endl;

	// r1, r2의 넓이의 합은?
	cout << "r1과 r2의 넓이의 합은 : " << r1.getArea() + r2.getArea() << " 입니다. " << endl;

	// 두개의 도형이 같은가?
	if (r1.isEqual(r2))
		cout << "두 사각형은 같아요..." << endl;
	else 
		cout << "두 사각형은 안같아요...." << endl;

	char a;
	cin >> a;
	cout << a << endl;
}

/*

박스
- w : int
- h : int
- fill : char

+drawLine
+drawFill
+showInfo

*/