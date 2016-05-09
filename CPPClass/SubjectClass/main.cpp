#include <iostream>
#include <string>
#include "Course.h"

using namespace std;

int main()
{
	Course c1("C++ Programing", 35);

	c1.addStudent("������");
	c1.addStudent("����");
	c1.addStudent("������");
	c1.addStudent("���뿵");

	cout << "����� : " << c1.getCourseName() << endl;
	cout << "�����ο� : " << c1.getStudentCount() << endl;
	cout << " << ������ >> " << endl;
	string* student = c1.getStudentList();
	for (int i = 0; i < c1.getStudentCount(); i++) {
		cout << student[i] << endl;
	}

	Course copyc(c1);

	cout << "����� : " << copyc.getCourseName() << endl;
	cout << "�����ο� : " << copyc.getStudentCount() << endl;
	cout << " << ������ >> " << endl;
	string* student2 = copyc.getStudentList();
	for (int i = 0; i < copyc.getStudentCount(); i++) {
		cout << student2[i] << endl;
	}
}