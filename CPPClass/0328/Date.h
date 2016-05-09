#pragma once
#include <iostream>
#include <string>

using namespace std;

/*
	날짜클래스는 정수형으로 년,월,일 을각각 받을 수 있고 "2016.22.22" 형태로 입력받을수 있다(생성자)
	날짜클래스의 년, 월, 일 이 유효한지 검사하는 isValue 있다.예를들어 2009.9.31은 유효하지않다
	또 윤년을 처리해야하며 날짜를 출력하는 멤버변수는 유효한 날짜에 대해 "0000년 00월 00일"의 형태로 출력

	윤년 = 4배수 이며 100의배수 제외 400의 배수는 윤년

*/

class Date
{
	int year;
	int month;
	int day;
public:
	Date();
	Date(int, int, int);
	Date(string);
	~Date();
	bool isValue();
	bool isLeap();
	void print();
};

