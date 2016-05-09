#pragma once
#include <string>

using namespace std;

class Customer
{
	string id; // ce00000 형태
	string name;
	int rating; // 1~4등급

public:
	Customer();
	Customer(string, string, int = 4);
	~Customer();
	int getLevel();
	void showCustomer();
};

