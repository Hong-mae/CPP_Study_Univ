#include <iostream>
#include <string>
#include "Date.h"



Date::Date()
{}

Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

Date::Date(string _date)
{
	string yStr, mStr, dStr;
	int sPos = 0, ePos = _date.find('/');

	yStr = _date.substr(sPos, ePos - sPos);
	
	sPos = ePos + 1;
	ePos = _date.find('/', sPos);

	mStr = _date.substr(sPos, ePos - sPos);
	
	sPos = ePos + 1;
	ePos = _date.find(EOF, sPos);

	dStr = _date.substr(sPos, ePos - sPos);


	year = stoi(yStr);
	month = stoi(mStr);
	day = stoi(dStr);
}


Date::~Date()
{
}

bool Date::isValue()
{
	if (year > 0) {
		if (month > 0 && month <= 12) {
			switch (month) {
			case 1:	case 3:	case 5:
			case 7:	case 8:	case 10: case 12:
				if (day > 0 && day <= 31) return true;
				break;
			case 4: case 9: case 11:
				if (day > 0 && day <= 30) return true;
				break;
			case 2:
				if (day > 0 && day <= 28) return true;
				else if (isLeap() && day == 29) return true;
				break;
			}
		}
	}
	return false;
}

bool Date::isLeap()
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		return true;
	}
	else
		return false;
}

void Date::print()
{
	if (isValue()) {
		cout << year << "�� " << month << "�� " << day << "��\n";
	}
	else
		cout << "Error! ��ȿ���� ���� ��¥�Դϴ�.";
}


/*
���蹮��

1. ���ӽ����̽�
2. �⺻������/�Ҹ���
3. ���������
4. �ʱ�ȭ����Ʈ
5. ��ü������ A is a B
6. ��� �Լ� �ۼ�
7. �Լ��������̵�

*/