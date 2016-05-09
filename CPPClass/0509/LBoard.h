#pragma once
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
// Shape 의 객체들을 삽입, 삭제, 출력하는 클래스
class LBoard
{
	Shape* pStart; // 개겣리스트의 첫번ㅉ대 객체를 가리키는 포인터
	Shape* pEnd; // 객체리스트의 마지막 객체를 가리키는 포인터
	static int count;
public:
	LBoard();
	~LBoard();

	void insert(); // 연결리스트의 마지막에 삽입
	void remove(); // 삭제를 원하는 n번째를 삭제
	void showInfo();
};

