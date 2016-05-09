#pragma once
class CRectangle
{
	int width;
	int height;

public:
	CRectangle(); // 기본생성자는 항상 만들자!
	CRectangle(int, int); // 생성자 함수
	~CRectangle(); // 소멸자 함수
	void setValues(int, int);
	int getArea();
	bool isSquare();
	void showInfo();
	bool isEqual(CRectangle);
};

