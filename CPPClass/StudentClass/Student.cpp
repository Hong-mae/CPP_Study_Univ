#include "Student.h"
#include <iostream>

#pragma warning(disable:4996)

using namespace std;

CStudent::CStudent()
{
	srand((unsigned)time(0));
}

CStudent::~CStudent()
{}

void CStudent::generateData()
{
	//srand((unsigned)time(0));

	sub1 = rand() % 41 + 60;
	sub2 = rand() % 51 + 50;
	sub3 = rand() % 61 + 40;

	char temp[10];
	sprintf(temp, "CE%04d", ++count); // char[] 에 값출력
	ID = temp;
}

char CStudent::getGrade()
{
	if (sub1 < 40 || sub2 < 40 || sub3 < 40)
	{
		return 'F';
	}
	else {
		float avg = sub1 + sub2 + sub3 / 3.;
		if (avg >= 90.0) {
			return 'A';
		}
		else if (avg >= 80.0) {
			return 'B';
		}
		else if (avg >= 70.0) {
			return 'C';
		}
		else if (avg >= 60.0) {
			return 'D';
		}
		else
			return 'F';
	}
}

void CStudent::showInfo()
{
	cout << "ID : " << ID << " " << sub1 << " " << sub2 << " " << sub3 << " " << getGrade() << endl;
}
