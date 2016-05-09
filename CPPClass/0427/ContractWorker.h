#pragma once
#include "Employee.h"
class ContractWorker : public Employee
{
	int workDay; // 기본 20일 + 추가근로일
public:
	ContractWorker();
	ContractWorker(string, string);
	~ContractWorker();
	void setWorkDay(int);
	int getPay();
	void showInfo();
};

