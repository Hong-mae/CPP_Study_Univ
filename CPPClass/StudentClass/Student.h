#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;



class CStudent
{
	string ID; // ID = CE0001, CE0002 ....
	int sub1, sub2, sub3;
	static int count; // 클래스당 한번 만들어지는 수

public:
	CStudent();
	~CStudent();
	void generateData(); // 학번, 3과목 점수 데이터 생성
	char getGrade(); // 학점을 구해주는 함수
	void showInfo(); // 학생정보 출력 함수
};

