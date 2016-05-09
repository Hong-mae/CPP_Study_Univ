#pragma once
#include <string>

using namespace std;

class Course
{
	const int maxCount; // ������ �ִ� ���� �ο��� ����� ����
	string courseName;
	string* studentList;
	int studentCount;

public:
	Course(string, int); // �����, �ִ�����ο� �� ���ڷ� ��ü ����
	~Course();
	Course(Course&);
	string getCourseName() { return courseName; }
	int getStudentCount() { return studentCount; }
	string* getStudentList() { return studentList; }
	void addStudent(string);
};

