#include <iostream>
#include "Point.h"

using namespace std;
// operator+();
Point& operator+(int value, Point& p) // 10 + (3, 5)
{
	return Point(value + p.x, value + p.y);
}

ostream& operator<<(ostream& os, Point& p1){
	os << "(" << p1.x << ", " << p1.y << ")";
	return os;
}

istream& operator>>(istream& is, Point& p2){
	cout << "좌표값 입력";
	is >> p2.x >> p2.y;

	return is;
}

int main()
{
	Point p1, p2, result;
	int value;

	int menu;

	do{
		cin >> p1;
		do{
			cout << "1)+점 2)+상수 3)++ 4)== 5)상수+ 6)redo 7)exit >>";

			cin >> menu;

			switch (menu)
			{
			case 1:
				cin >> p2;
				result = p1 + p2;
				cout << p1 << "+ " << p2 << "=" << result << endl;
				p1 = result;
				break;
			case 2:
				cin >> value;
				result = p1 + value;
				cout << p1 << "+" << value << "=" << result << endl;
				p1 = result;
				break;
			case 3:
				result = p1;
				result++;
				cout << p1 << "++ = " << result << endl;
				p1 = result;
				break;
			case 4:
				cin >> p2;
				if (p1 == p2){
					cout << "같음" << endl;
				}
				else{
					cout << "다름" << endl;
				}
				break;
			case 5:
				cin >> value;
				result = value + p1;
				cout << value << "+" << p1 << "=" << result << endl;
				p1 = result;
				break;
			case 6:
				cout << "reinput" << endl;
				break;
			case 7:
				cout << "bye" << endl;
				break;
			default:
				cout << "longNumber" << endl;
				break;
			}
		} while (menu != 6 && menu != 7);
	} while (menu != 7);

	return 0;
}