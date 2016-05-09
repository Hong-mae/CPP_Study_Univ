#include "ContractWorker.h"



ContractWorker::ContractWorker()
{
	ID = "888888";
	name = "noname";
}

ContractWorker::ContractWorker(string _ID, string _name)
	: Employee(_ID, _name)
{}


ContractWorker::~ContractWorker()
{
}

void ContractWorker::setWorkDay(int day)
{
	if (day > 0 && day < 32) {
		workDay = day;
	}
	else {
		workDay = 20;
	}
}

int ContractWorker::getPay()
{
	return 1500000 + (workDay - 20) * 80000;
}

void ContractWorker::showInfo()
{
	cout << "===== ����� =====" << endl;
	Employee::showInfo();
	cout << "�ʰ��ٹ��ϼ� : " << workDay-20 << "��" << endl;
	cout << "�޿� : " << getPay() << "�� (�⺻�� 150���� + " << workDay-20 << "�� * 8����)" <<endl;
}
