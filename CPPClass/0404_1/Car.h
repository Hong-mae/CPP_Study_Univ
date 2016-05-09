#pragma once
#include <iostream>
using namespace std;

class Car
{
	const int maxGas;
	const double efficiency;
	int nowGas;
public:
	Car();
	Car(int, double, int=2);
	~Car();
	int getNowGas();
	void addGas(int);
	void addUp();
	void drive(double);
};

