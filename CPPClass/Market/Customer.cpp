#include "Customer.h"
#include <iostream>

using namespace std;

Customer::Customer()
{
}

Customer::Customer(string _id, string _name, int _rating)
{
	id = _id;
	name = _name;
	rating = _rating;
}


Customer::~Customer()
{}

int Customer::getLevel()
{
	return rating;
}

void Customer::showCustomer()
{
	cout << "\t���̵� : " << id << endl;
	cout << "\t��  �� : " << name;
	switch (getLevel())
	{
	case 1:
		cout << " [�����]" << endl;
		break;
	case 2:
		cout << " [�ǹ����]" << endl;
		break;
	case 3:
		cout << " [�������]" << endl;
		break;
	case 4:
		cout << " [�����]" << endl;
		break;
	}
}
