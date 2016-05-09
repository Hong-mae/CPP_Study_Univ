#include "LBoard.h"



LBoard::LBoard()
{
	pStart = pEnd = NULL;
}

//생성한 모든 객체를 소멸시킴
LBoard::~LBoard()
{
	Shape* p = pStart;
	while (p != NULL) {
		Shape* q = p->getNext();
		delete p;
		p = q;
	}
}

void LBoard::insert()
{
	int shapeMenu;
	double width, height, radius;

	/*Circle cp;*/
	Rectangle *rp;

	cout << "1)원 2)사각형 >> ";
	cin >> shapeMenu;

	switch (shapeMenu) {
	case 1: { // 원객체 생성후 삽입
		cout << "반지름? : "; cin >> radius;
		Circle *cp = new Circle(radius);
		if (pStart == NULL) {
			pStart = cp;
			pEnd = cp;
		}
		else {
			pEnd = pEnd->add(cp);
		}
		break;
	}
	case 2: // 사각객체 생성후 삽입
		cout << "가로, 세로? : "; cin >> width >> height;
		rp = new Rectangle(width, height);
		if (pStart == NULL) {
			pStart = rp;
			pEnd = rp;
		}
		else {
			pEnd = pEnd->add(rp);
		}
		break;
	default:
		cout << "도형 선택 오류!! 다시선택 >> ";
		break;
	}

	count++;
}

void LBoard::remove()
{
	int index;

	if (pStart == NULL) {
		cout << "도형이 없습니다. " << endl;
		return;
	}
	
	cout << "삭제할 인덱스 >>";
	cin >> index;
	index -= 1;

	if (index > count || index < 0) {
		cout << "존재하지 않는 인덱스 입니다." << endl;
	}
	else {
		Shape*p = pStart;
		Shape*prev = p;
		
		for (int i = 0; i < index; i++) {
			prev = p;
			p = p->getNext();

			if (p == NULL) {
				cout << "해당 인덱스의 도형은 존재하지 않습니다." << endl;
				return;
			}
		}
		Shape* next = prev->add(p->getNext());
		if (pStart == pEnd && p == pStart) {
			pStart = pEnd = NULL;
		}
		else if(pStart == p){
			pStart = next;
		}
		else if(pEnd == p){
			pEnd = prev;
		}

		delete p;
	}
}

void LBoard::showInfo()
{
	Shape* p = pStart;

	while (p != NULL) {
		p->showInfo();
		p = p->getNext();
	}
}
