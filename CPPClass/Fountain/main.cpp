#include <iostream>
#include "Fraction.h"

using namespace std;

ostream& operator<<(ostream& os, Fraction& p){
	os << p.y;

	if (p.x != 1){
		os << " / " << p.x;
	}

	return os;
}
istream& operator>>(istream& is, Fraction& p){
	cout << "input a Fraction (분자 분모 순): ";
	is >> p.y >> p.x;

	return is;
}

int main()
{
	Fraction f1, f2, result;
	int menu;

	cin >> f1;
	cin >> f2;

	cout << "메뉴를 선택하세요: " << endl;
	cout << "1) 덧셈" << endl;
	cout << "2) 뺄셈" << endl;
	cout << "3) 곱셈" << endl;
	cout << "4) 나눗셈" << endl;
	cout << "5) 비교하기" << endl;
	cout << "6) 끝내기" << endl;
	
	
	//기말고사 필기 연산자 중복
	do{
		cout << ": ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			result = f1 + f2;
			cout << "(" << f1 << ") + (" << f2 << ") = (" << result << ")" << endl;
			break;
		case 2:
			result = f1 - f2;
			cout << "(" << f1 << ") + (" << f2 << ") = (" << result << ")" << endl;
			break;
		case 3:
			result = f1 * f2;
			cout << "(" << f1 << ") * (" << f2 << ") = (" << result << ")" << endl;
			break;
		case 4:
			result = f1 / f2;
			cout << "(" << f1 << ") * (" << f2 << ") = (" << result << ")" << endl;
			break;
		case 5:
			if (f1 == f2){
				cout << "같음 " << endl;
			}
			else if (f1 > f2){
				cout << "f1이 큼" << endl;
			}
			else {
				cout << "f2가 큼" << endl;
			}
			break;
		case 6: 
			cout << "bye" << endl;
			break;
		default:
			break;
		}
	} while (menu != 6);
}