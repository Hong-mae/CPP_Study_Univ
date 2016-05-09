#include <iostream>
#include <string>
#include "Account.h"

using namespace std;
int Account::countOfAcc = 0;
void transactionAccount(Account[], int);

int main() 
{
	Account bank[100];
	string name;
	int money;
	int count = 0;
	int menu;
	do {
		cout << "1. 계좌 생성 2. 계좌 업무 3. 전체 계좌 보기 4) 종료" << endl;
		cout << "선택 >> ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << "예금주 명과 입금액은 ? ";
			cin >> name >> money;
			bank[count++] = Account(name, money);
			break;
		case 2:
			transactionAccount(bank, count);
			break;
		case 3:
			for (int i = 0; i < count; i++) {
				bank[i].showAccount();
			}
			break;
		case 4:
			cout << "Bye!! " << endl;
			break;
		default:
			cout << "잘못된 선택입니다 " << endl;
			break;
		}

	} while (menu != 4);
}

void transactionAccount(Account bank[], int count)
{
	string id;
	cout << "업무처리할 계좌번호를 입력하시오 >> ";
	cin >> id;

	int i;

	for (i = 0; i < count; i++) {
		if (bank[i].getID() == id) {
			break;
		}
	}
	if (i == count) {
		cout << "입력하신 계좌번호는 존재하지 않습니다." << endl;
		return;
	}

	int menu;
	int money;

	do {
		cout << "1. 입금 2. 출금 3. 잔액보기 4. 종료" << endl;
		cout << "선택 >> ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << "입금 금액은? >> ";
			cin >> money;
			bank[i].deposite(money);
			bank[i].showAccount();
			break;
		case 2:
			cout << "출금 금액은? >> ";
			cin >> money;
			bank[i].withdraw(money);
			bank[i].showAccount();
			break;
		case 3:
			bank[i].showAccount();
			break;
		case 4:
			cout << "계좌업무 종료" << endl;
			break;
		default:
			cout << "잘못된 선택 !" << endl;
			break;
		}
	} while (menu != 4);
}
