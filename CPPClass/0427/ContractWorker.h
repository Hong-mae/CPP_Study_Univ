#pragma once
#include "Employee.h"
class ContractWorker : public Employee
{
	int workDay; // �⺻ 20�� + �߰��ٷ���
public:
	ContractWorker();
	ContractWorker(string, string);
	~ContractWorker();
	void setWorkDay(int);
	int getPay();
	void showInfo();
};

