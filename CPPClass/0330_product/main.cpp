#include <iostream>
#include <string>
#include <Windows.h>
#include <cctype>
#include "Product.h"
using namespace std;

int menu();
int productRegiste(Product*, int);
void showAllInfo(Product*, int);
void selectedInfo(Product*, int, char);
void category();

int main() {
	int selected; // �޴�������������return �����޴º���
	int regiNum = 0; // ��ǰ�ִ밹���������ϴº���
	int count = 0; // ��ǰ���˻��Ҷ����º���. 0��°����regiNum ����++ �Һ���.

	cout << "��ǰ ��� �ִ� �����Է�>> ";
	cin >> regiNum;

	Product *p;
	p = new Product[regiNum]; // ��ǰ���ִ����ŭ�����Ҵ�.

	do {
		cout << "��� ������ ��ǰ�� ����" << regiNum - count << "�� �Դϴ�." << endl;
		selected = menu();

		switch (selected) {
		case 1:
			if (count == regiNum)
				cout << "�ִ� ��ǰ ���� �ʰ� �Ͽ����ϴ�." << endl;
			else
				productRegiste(p, count) == 1 ? count : count++; // �Լ��� �߸�ó�� �Ǿ� 1�� ��ȯ �Ǿ��� �� count �� ����, �� ó���Ǿ��ٸ� count ��++

			break;
		case 2:
			showAllInfo(p, count); // ����������Product �迭������ѻ�ǰ�ǰ������Ű�����������
			break;
		case 3:
			char _code;
			cout << "�˻��� �ڵ带 �Է��ϼ���>>";
			cin >> _code;

			selectedInfo(p, count, _code);// ����������Product �迭������ѻ�ǰ�ǰ���, �˻����ڵ带����
			break;
		case 4:
			cout << "���� �մϴ�.\n";
			break;
		default:
			cout << "�߸��� �޴� �����Դϴ�.\n";
			break;
		}
	} while (selected != 4);
}

int menu()
{
	char choice;
	cout << "--------------------" << endl;
	cout << "1. ��ǰ���" << endl;
	cout << "2. ��ü��ǰ����" << endl;
	cout << "3. �ڵ庰��ǰ����" << endl;
	cout << "4. ����" << endl;
	cout << "--------------------" << endl;
	cout << "�޴�����>> ";
	cin >> choice;
	fflush(stdin);
	if (isdigit(choice)) {
		choice = -1;
	}

	return choice;
}

int productRegiste(Product* _p, int c)
{
	string str;
	char co;
	int pr;
	int cnt;

excip:
	cout << "�ڵ带 �Է��ϼ���(�ڵ带 �𸣸� 'h' or 'help') >> ";
	cin >> str;


	if (str == "c" || str == "���ο�") {
		co = 'c';
	}
	else if (str == "e" || str == "�����") {
		co = 'e';
	}
	else if (str == "p" || str == "��������") {
		co = 'p';
	}
	else if (str == "h" || str == "help") {
		cout << "1. ����= 'c' or ���ο�\n";
		cout << "2. ���= 'e' or �����\n";
		cout << "3. ������= 'p' or ��������\n";

		goto excip;
	}
	else {
		cout << "�ڵ尡 �߸� �Ǿ����ϴ�." << endl;
		return 1;
	}


	cout << "������ �Է� �ϼ���>> ";
	cin >> pr;

	cout << "������ �Է� �ϼ���>> ";
	cin >> cnt;

	_p[c] = Product(co, pr, cnt);
	cout << "��ϿϷ�" << endl;

	Sleep(500);
	system("cls");
}
void showAllInfo(Product* _p, int _count) {
	if (_count != 0) { // ��ϵȻ�ǰ�ǰ�����0�̾ƴϸ�
		category();

		for (int i = 0; i < _count; i++) {
			_p[i].showInfo(); // �����ִ���0����ȯ���ٸ�1����ȯ
		}

		cout << "\n\n";

		cout << "�Ͻ������մϴ�. ";
		system("pause");
		system("cls");
	}
	else
		cout << "\n\n��ϵ� ��ǰ�� �����ϴ�.\n\n";
}
void selectedInfo(Product* _p, int _count, char _code) {
	if (_count != 0) { // ��ϵȻ�ǰ�ǰ�����0�̾ƴϸ�
		category();

		for (int i = 0; i < _count; i++) {
			_p[i].selectedInfo(_code); // �����ִ���0����ȯ���ٸ�1����ȯ
		}

		cout << "\n\n";

		cout << "�Ͻ����� �մϴ�. ";
		system("pause");
		system("cls");
	}
	else
		cout << "\n\n��ϵ� ��ǰ�� �����ϴ�.\n\n";
}

void category()
{
	cout << "\n\n�ڵ�\t����\t����\t������\t����\t�Ѱ���" << endl;
	cout << "----------------------------------------------" << endl;
}