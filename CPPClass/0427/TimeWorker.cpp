#include "TimeWorker.h"



TimeWorker::TimeWorker()
{
	ID = "999989";
	name = "noname";
}

TimeWorker::TimeWorker(string _ID, string _name)
	: Employee(_ID, _name)
{
}


TimeWorker::~TimeWorker()
{
}

void TimeWorker::setWorkTime(int time)
{
	if (time > 0) {
		workTime = time;
	}
	else {
		workTime = 0;
	}
}

int TimeWorker::getPay()
{
	return workTime * 7500;
}

void TimeWorker::showInfo()
{
	cout << "===== �ӽ��� =====" << endl;
	Employee::showInfo();
	cout << "�ٹ��ð� : " << workTime << endl;
	cout << "�޿� : " << getPay() << "�� (�ð��� 7500�� * " << workTime << " �ð�)" << endl;
}
