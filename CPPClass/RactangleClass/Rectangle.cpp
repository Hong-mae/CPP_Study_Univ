#include "Rectangle.h"
#include <iostream>

using namespace std;

CRectangle::CRectangle()
{
}

//�⺻ ������ �Լ��� �����Ϸ��� �ڵ� ������.
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
	cout << "�ʺ� : " << width << ", ���� : " << height << ", ���� : " << getArea() << endl;
}

bool CRectangle::isEqual(CRectangle r1)
{
	if ((r1.height == height && r1.width == width) || (r1.height == width && r1.width == height))
		return true;
	else
		return false;
}

int main() {
	CRectangle r1(3, 5), r2(5, 3); // ���ڸ� ������ü ����
	CRectangle myRec; // �����ڰ� �ϳ��� ���� ��츸 �⺻�����ڸ� �ڵ����� ����.

	//1)�ܺηκ��� ����, ���� ���� �о�鿩 myRec��ü ����
	int w, h;

	cout << "�ʺ�� ���̸� �Է��ϼ��� : ";
	cin >> w >> h;
	myRec.setValues(w, h);

	//myRec�� ���簢������ ���
	if (myRec.isSquare())
		cout << "���簢�� �Դϴ�!" << endl;
	else
		cout << "���簢���� �ƴմϴ�.." << endl;

	// r1, r2�� ������ ����?
	cout << "r1�� r2�� ������ ���� : " << r1.getArea() + r2.getArea() << " �Դϴ�. " << endl;

	// �ΰ��� ������ ������?
	if (r1.isEqual(r2))
		cout << "�� �簢���� ���ƿ�..." << endl;
	else 
		cout << "�� �簢���� �Ȱ��ƿ�...." << endl;

	char a;
	cin >> a;
	cout << a << endl;
}

/*

�ڽ�
- w : int
- h : int
- fill : char

+drawLine
+drawFill
+showInfo

*/