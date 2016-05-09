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
	cout << gas << "L 연료 보충을 요청함" << endl;
	if (nowGas + gas > maxGas)
	{
		cout << "최대연료량을 초과함. " << maxGas - nowGas << "L 만 보충함.";
		cout << gas - (maxGas - nowGas) << "L 취소됨." << endl;
		nowGas = maxGas;
	}
	else {
		nowGas += gas;
		cout << gas << "L 보충함." << endl;
	}
}

void Car::addUp() // 만땅
{
	int tempGas = maxGas - nowGas;

	cout << tempGas << "L 보충함" << endl;
	nowGas = maxGas;
}

void Car::drive(double distance) // distance km를 주행하려함
{
	int tempGas = nowGas - distance / efficiency;

	if (tempGas < 2) {
		cout << "현재 운행가능한 거리는 " << (nowGas - 2) * efficiency << "km 입니다." << endl;
		cout << (nowGas - 2) * efficiency << "km 운전함." << endl;
		nowGas = 2;
	}
	else {
		cout << distance << "km 운전함." << endl;
		nowGas = nowGas - distance / efficiency;
	}
}
