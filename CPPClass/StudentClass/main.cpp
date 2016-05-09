#include <iostream>
#include "Student.h"

using namespace std;

int CStudent::count = 0;

int main()
{
	CStudent sList[100];

	for (int i = 0; i < 100; i++) {
		sList[i].generateData();
		sList[i].showInfo();
	}

	return 0;
}