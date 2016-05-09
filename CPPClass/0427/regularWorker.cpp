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
	cout << "===== ������ =====" << endl;
	Employee::showInfo();
	cout << "���ȣ�� : " << level << endl;
	cout << "����޿� : " << getPay() << "���� (�⺻�� 180���� ȣ���� +50����)" << endl;
}
