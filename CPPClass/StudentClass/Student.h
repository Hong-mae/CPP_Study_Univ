#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;



class CStudent
{
	string ID; // ID = CE0001, CE0002 ....
	int sub1, sub2, sub3;
	static int count; // Ŭ������ �ѹ� ��������� ��

public:
	CStudent();
	~CStudent();
	void generateData(); // �й�, 3���� ���� ������ ����
	char getGrade(); // ������ �����ִ� �Լ�
	void showInfo(); // �л����� ��� �Լ�
};

