#include "Employee.h"



Employee::Employee()
{
}

Employee::Employee(string _ID, string _name)
{
	ID = _ID;
	name = _name;
}


Employee::~Employee()
{}

void Employee::showInfo()
{
	cout << "사원번호 : " << ID << endl;
	cout << "이름 : " << name << endl;
}
