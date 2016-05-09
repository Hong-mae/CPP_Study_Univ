#pragma once
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
// Shape �� ��ü���� ����, ����, ����ϴ� Ŭ����
class LBoard
{
	Shape* pStart; // ��������Ʈ�� ù������ ��ü�� ����Ű�� ������
	Shape* pEnd; // ��ü����Ʈ�� ������ ��ü�� ����Ű�� ������
	static int count;
public:
	LBoard();
	~LBoard();

	void insert(); // ���Ḯ��Ʈ�� �������� ����
	void remove(); // ������ ���ϴ� n��°�� ����
	void showInfo();
};

