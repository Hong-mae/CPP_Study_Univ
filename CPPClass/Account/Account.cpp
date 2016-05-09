#include "Account.h"
#include <iostream>

using namespace std;

Account::Account()//멤버변수 초기화
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
	//C++ 에서 this를 사용할려면 .연상이 아닌 화살표 연산으로 사용사용
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
	cout << "입금완료\n";
}
void Account::withdraw(int money) {
	if (balance >= money) {
		balance -= money;
		cout << "원 출금완료\n";
	}
	else {
		cout << "잔액부족\n";
	}
}
void Account::showAccount() {
	cout << "<<<  계좌조회  >>>\n";
	cout << "계좌번호 : " << ID << endl;
	cout << "예금주명 : " << name << endl;
	cout << "잔액 : " << balance << "원\n";
}
