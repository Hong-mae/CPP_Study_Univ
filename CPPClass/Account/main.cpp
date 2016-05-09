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
		cout << "1. ���� ���� 2. ���� ���� 3. ��ü ���� ���� 4) ����" << endl;
		cout << "���� >> ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << "������ ��� �Աݾ��� ? ";
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
			cout << "�߸��� �����Դϴ� " << endl;
			break;
		}

	} while (menu != 4);
}

void transactionAccount(Account bank[], int count)
{
	string id;
	cout << "����ó���� ���¹�ȣ�� �Է��Ͻÿ� >> ";
	cin >> id;

	int i;

	for (i = 0; i < count; i++) {
		if (bank[i].getID() == id) {
			break;
		}
	}
	if (i == count) {
		cout << "�Է��Ͻ� ���¹�ȣ�� �������� �ʽ��ϴ�." << endl;
		return;
	}

	int menu;
	int money;

	do {
		cout << "1. �Ա� 2. ��� 3. �ܾ׺��� 4. ����" << endl;
		cout << "���� >> ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << "�Ա� �ݾ���? >> ";
			cin >> money;
			bank[i].deposite(money);
			bank[i].showAccount();
			break;
		case 2:
			cout << "��� �ݾ���? >> ";
			cin >> money;
			bank[i].withdraw(money);
			bank[i].showAccount();
			break;
		case 3:
			bank[i].showAccount();
			break;
		case 4:
			cout << "���¾��� ����" << endl;
			break;
		default:
			cout << "�߸��� ���� !" << endl;
			break;
		}
	} while (menu != 4);
}
