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
	cout << "===== 임시직 =====" << endl;
	Employee::showInfo();
	cout << "근무시간 : " << workTime << endl;
	cout << "급여 : " << getPay() << "원 (시간당 7500원 * " << workTime << " 시간)" << endl;
}
