#include "regularWorker.h"



regularWorker::regularWorker()
{
	ID = "123456";
	name = "noname";
}

regularWorker::regularWorker(string _ID, string _name)
	: Employee(_ID, _name)
{}


regularWorker::~regularWorker()
{
}

void regularWorker::setLevel(int _level)
{
	if (_level > 0 && _level <= 10) {
		level = _level;
	}
	else {
		level = 10;
	}
}

int regularWorker::getPay()
{
	return 180 + (10-level) * 50;
}

void regularWorker::showInfo()
{
	cout << "===== 정규직 =====" << endl;
	Employee::showInfo();
	cout << "사원호봉 : " << level << endl;
	cout << "사원급여 : " << getPay() << "만원 (기본금 180만원 호봉당 +50만원)" << endl;
}
