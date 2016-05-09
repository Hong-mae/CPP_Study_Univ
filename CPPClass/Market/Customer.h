#pragma once
#include <string>

using namespace std;

class Customer
{
	string id; // ce00000 ����
	string name;
	int rating; // 1~4���

public:
	Customer();
	Customer(string, string, int = 4);
	~Customer();
	int getLevel();
	void showCustomer();
};

