#pragma once
#include "Employee.h"
class TimeWorker : public Employee
{
	int workTime; //�ñ�
public:
	TimeWorker();
	TimeWorker(string, string);
	~TimeWorker();
	void setWorkTime(int); 
	int getPay(); // �ð��� 7500
	void showInfo();
};

