#include <iostream>
#include <string>
#include "Course.h"

using namespace std;

int main()
{
	Course c1("C++ Programing", 35);

	c1.addStudent("유시진");
	c1.addStudent("강모연");
	c1.addStudent("윤명주");
	c1.addStudent("서대영");

	cout << "과목명 : " << c1.getCourseName() << endl;
	cout << "수강인원 : " << c1.getStudentCount() << endl;
	cout << " << 수강생 >> " << endl;
	string* student = c1.getStudentList();
	for (int i = 0; i < c1.getStudentCount(); i++) {
		cout << student[i] << endl;
	}

	Course copyc(c1);

	cout << "과목명 : " << copyc.getCourseName() << endl;
	cout << "수강인원 : " << copyc.getStudentCount() << endl;
	cout << " << 수강생 >> " << endl;
	string* student2 = copyc.getStudentList();
	for (int i = 0; i < copyc.getStudentCount(); i++) {
		cout << student2[i] << endl;
	}
}