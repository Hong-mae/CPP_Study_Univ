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
	cout << "\t아이디 : " << id << endl;
	cout << "\t이  름 : " << name;
	switch (getLevel())
	{
	case 1:
		cout << " [골드등급]" << endl;
		break;
	case 2:
		cout << " [실버등급]" << endl;
		break;
	case 3:
		cout << " [브론즈등급]" << endl;
		break;
	case 4:
		cout << " [무등급]" << endl;
		break;
	}
}
