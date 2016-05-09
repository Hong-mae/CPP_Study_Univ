#pragma once
#include <iostream>
#include <string>

using namespace std;

/*
사원
+showInfo()
정규직
기본150

10호봉 = 150
9호본 = 200
8250
7300
6350
5400
4450
3 500
2호봉 = 550
1호봉 = 600

getPay()
+showInfo()
계약직


getPay()
+showInfo()

임시직
-worktime

-getPay();
+showInfo();
*/
class Employee
{
protected:
	string ID;
	string name;
public:
	Employee();
	Employee(string, string);
	~Employee();
	virtual void showInfo(); // 이함수가 오버라이딩된다면 실제 바인딩 되는 자식객체의 함수를 호출하도록 함.
};

