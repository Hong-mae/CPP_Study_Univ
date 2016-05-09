#include <iostream>
#include "Car.h"

using namespace std;

Car::Car(int gas, double effi, int ngas) : maxGas(gas), efficiency(effi), nowGas(ngas)
{
}

Car::Car() : maxGas(50), efficiency(7), nowGas(2)
{
}

Car::~Car()
{
}

int Car::getNowGas()
{
	return nowGas;
}

void Car::addGas(int gas)
{
	cout << gas << "L ���� ������ ��û��" << endl;
	if (nowGas + gas > maxGas)
	{
		cout << "�ִ뿬�ᷮ�� �ʰ���. " << maxGas - nowGas << "L �� ������.";
		cout << gas - (maxGas - nowGas) << "L ��ҵ�." << endl;
		nowGas = maxGas;
	}
	else {
		nowGas += gas;
		cout << gas << "L ������." << endl;
	}
}

void Car::addUp() // ����
{
	int tempGas = maxGas - nowGas;

	cout << tempGas << "L ������" << endl;
	nowGas = maxGas;
}

void Car::drive(double distance) // distance km�� �����Ϸ���
{
	int tempGas = nowGas - distance / efficiency;

	if (tempGas < 2) {
		cout << "���� ���డ���� �Ÿ��� " << (nowGas - 2) * efficiency << "km �Դϴ�." << endl;
		cout << (nowGas - 2) * efficiency << "km ������." << endl;
		nowGas = 2;
	}
	else {
		cout << distance << "km ������." << endl;
		nowGas = nowGas - distance / efficiency;
	}
}
