#include <iostream>

using namespace std;

// class
class CPoint {
	//멤버 변수 선언 ( 접근자 기본 : private )
	int x;
	int y;
	//멤버 함수 선언

public://접근자
	void setValue(int _x, int _y) {	//외부로부터 들어오는 매개변수 값을 멤버변수에 할당
		x = _x;
		y = _y;
	}
	bool isZero() {
		if (x == 0 && y == 0)
			return true;
		else
			return false;
	}
	bool isOnX() {
		if (y == 0)
			return true;
		else
			return false;
	}
	bool isOnY() {
		if (x == 0)
			return true;
		else
			return false;
	}
	int wherePoint() { // 어느 사분면에 점이 위치하는 가?
		if (isZero()) {
			return 0;
		}
		else if (isOnX()) {
			return -1;
		}
		else if (isOnY()) {
			return -2;
		}
		else if (x > 0 && y > 0) {
			return 1;
		}
		else if (x < 0 && y > 0) {
			return 2;
		}
		else if (x < 0 && y < 0) {
			return 3;
		}
		else if (x > 0 && y < 0) {
			return 4;
		}
	}
}; //class end (선언과 구현)

int main()
{
	//객체 선언 (변수선언하듯이)
	CPoint p1, p2;
	int x, y;

	cout << "p1 좌표 입력 >> ";
	cin >> x >> y;
	p1.setValue(x, y);

	if (p1.isZero()) {
		cout << "이 점은 원점입니다." << endl;
	}
	else if(p1.isOnX()) {
		cout << "이 점은 x축 위에 있습니다." << endl;
	}
	else if (p1.isOnY()) {
		cout << "이 점은 y축 위에 있습니다." << endl;
	}
	else {
		cout << "이 점은 " << p1.wherePoint() << "사분면에 있습니다." << endl;
	}

	cout << "p2 좌표 입력 >> ";
	cin >> x >> y;
	p2.setValue(x, y);

	switch (p2.wherePoint())
	{
	case -2:
		cout << "이 점은 y축 위에 있습니다." << endl;
		break;
	case -1:
		cout << "이 점은 x축 위에 있습니다." << endl;
		break;
	case 0:
		cout << "이 점은 원점입니다. \n" << endl;
		break;
	default:
		cout << "이 점은 " << p2.wherePoint() << "사분면에 있습니다." << endl;
		break;
	}
}