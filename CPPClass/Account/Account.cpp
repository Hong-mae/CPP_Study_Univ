#include "Account.h"
#include <iostream>

using namespace std;

Account::Account()//������� �ʱ�ȭ
{
	ID = "0000-000-00";
	name = "noname";
	balance = 0;
}
Account::Account(string name, int balance) {

	char temp[10];
	sprintf_s(temp, "dsu_%05d", countOfAcc++);
	ID = temp;
	this->name = name;
	if (balance>0)
		this->balance = balance;
	else
		this->balance = 0;
	//C++ ���� this�� ����ҷ��� .������ �ƴ� ȭ��ǥ �������� �����
}

Account::~Account()
{}

void Account::setValues(string _ID, string _name, int _balance) {
	name = _name;
	ID = _ID;
	if (balance>0)
		balance = -balance;
	else
		this->balance = 0;
}
void Account::deposite(int money) {
	balance += money;
	cout << "�ԱݿϷ�\n";
}
void Account::withdraw(int money) {
	if (balance >= money) {
		balance -= money;
		cout << "�� ��ݿϷ�\n";
	}
	else {
		cout << "�ܾ׺���\n";
	}
}
void Account::showAccount() {
	cout << "<<<  ������ȸ  >>>\n";
	cout << "���¹�ȣ : " << ID << endl;
	cout << "�����ָ� : " << name << endl;
	cout << "�ܾ� : " << balance << "��\n";
}
