#pragma once
class CRectangle
{
	int width;
	int height;

public:
	CRectangle(); // �⺻�����ڴ� �׻� ������!
	CRectangle(int, int); // ������ �Լ�
	~CRectangle(); // �Ҹ��� �Լ�
	void setValues(int, int);
	int getArea();
	bool isSquare();
	void showInfo();
	bool isEqual(CRectangle);
};

