#pragma once
#include <string>

using namespace std;

class Course
{
	const int maxCount; // 교과목 최대 수강 인원수 상수로 지정
	string courseName;
	string* studentList;
	int studentCount;

public:
	Course(string, int); // 과목명, 최대수강인원 을 인자로 객체 생성
	~Course();
	Course(Course&);
	string getCourseName() { return courseName; }
	int getStudentCount() { return studentCount; }
	string* getStudentList() { return studentList; }
	void addStudent(string);
};

