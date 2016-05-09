#include "Course.h"
#include <iostream>

using namespace std;

Course::Course(string _cName, int max) : maxCount(max)
{
	studentCount = 0;
	courseName = _cName;
	studentList = new string[max];
}

Course::~Course()
{
	cout << "소멸자함수 호출" << endl;
	delete[] studentList;
}

Course::Course(Course & _c)
: maxCount(_c.maxCount)
{
	studentCount = _c.studentCount;
	courseName = _c.courseName;
	studentList = new string[_c.maxCount];
	for (int i = 0; i < _c.studentCount; i++) 
	{
		studentList[i] = _c.studentList[i];
	}
}

void Course::addStudent(string _name)
{
	if (studentCount >= maxCount) {
		cout << "Error!! 수강인원을 초과하였습니다." << endl;
		return;
	}
	else {
		studentList[studentCount++] = _name;
	}
}

