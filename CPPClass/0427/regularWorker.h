#pragma once
#include "Employee.h"
class regularWorker : public Employee
{
	int level; // ȣ�� = 1~10;
public:
	regularWorker();
	regularWorker(string, string);
	~regularWorker();

	void setLevel(int);
	int getPay(); // �⺻�� 180, �� ȣ���� +50
	void showInfo(); // ���, �̸�, ȣ��, �ݿ� ���
};

