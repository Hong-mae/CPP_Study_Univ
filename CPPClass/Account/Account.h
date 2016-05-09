#pragma once
#include <string>

using namespace std;

class Account
{
	string ID;
	string name;
	int balance;
	static int countOfAcc;
public:
	Account();
	Account(string, int);
	~Account();

	void setValues(string, string, int);
	string getID() { return ID; };
	void deposite(int);
	void withdraw(int);
	void showAccount();
};

