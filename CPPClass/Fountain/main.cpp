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
	cout << "input a Fraction (���� �и� ��): ";
	is >> p.y >> p.x;

	return is;
}

int main()
{
	Fraction f1, f2, result;
	int menu;

	cin >> f1;
	cin >> f2;

	cout << "�޴��� �����ϼ���: " << endl;
	cout << "1) ����" << endl;
	cout << "2) ����" << endl;
	cout << "3) ����" << endl;
	cout << "4) ������" << endl;
	cout << "5) ���ϱ�" << endl;
	cout << "6) ������" << endl;
	
	
	//�⸻��� �ʱ� ������ �ߺ�
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
				cout << "���� " << endl;
			}
			else if (f1 > f2){
				cout << "f1�� ŭ" << endl;
			}
			else {
				cout << "f2�� ŭ" << endl;
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