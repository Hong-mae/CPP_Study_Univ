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
	cout << "�����ȣ : " << ID << endl;
	cout << "�̸� : " << name << endl;
}
