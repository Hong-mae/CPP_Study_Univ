#pragma once
#include "Employee.h"
class TimeWorker : public Employee
{
	int workTime; //시급
public:
	TimeWorker();
	TimeWorker(string, string);
	~TimeWorker();
	void setWorkTime(int); 
	int getPay(); // 시간당 7500
	void showInfo();
};

