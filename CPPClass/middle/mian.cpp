#include <iostream>

using namespace std;

class Base {
protected:
	int x; // protected 외부 x 자식 o
public:
	//Base() { cout << "기본클래스 생성자" << endl; x = 100; };
	Base(int _x) { cout << "기본클래스 인자있는 생성자" << endl; x = _x; };
	~Base() { cout << "기본클래스 소멸자" << endl; };
	void showInfo() {
		cout << x << endl;
	}
};


class Derived : public Base {
	int d;
public:
	Derived():Base(0) { cout << "파생클래스 생성자" << endl; d = 0; };
	Derived(int _d):Base(_d) { cout << "파생클래스 인자있는 생성자" << endl; d = _d; };
	~Derived() { cout << "파생클래스 소멸자" << endl; };
};


int main()
{
	Derived d1;
	Derived d2(200);
	return 0;
}