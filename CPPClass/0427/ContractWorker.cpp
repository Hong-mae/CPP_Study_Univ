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
	cout << "===== 계약직 =====" << endl;
	Employee::showInfo();
	cout << "초과근무일수 : " << workDay-20 << "일" << endl;
	cout << "급여 : " << getPay() << "원 (기본금 150만원 + " << workDay-20 << "일 * 8만원)" <<endl;
}
