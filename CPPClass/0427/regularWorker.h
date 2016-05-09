#pragma once
#include "Employee.h"
class regularWorker : public Employee
{
	int level; // 호봉 = 1~10;
public:
	regularWorker();
	regularWorker(string, string);
	~regularWorker();

	void setLevel(int);
	int getPay(); // 기본금 180, 각 호봉당 +50
	void showInfo(); // 사번, 이름, 호봉, 금여 출력
};

