#include <iostream>

using namespace std;

class Base {
protected:
	int x; // protected �ܺ� x �ڽ� o
public:
	//Base() { cout << "�⺻Ŭ���� ������" << endl; x = 100; };
	Base(int _x) { cout << "�⺻Ŭ���� �����ִ� ������" << endl; x = _x; };
	~Base() { cout << "�⺻Ŭ���� �Ҹ���" << endl; };
	void showInfo() {
		cout << x << endl;
	}
};


class Derived : public Base {
	int d;
public:
	Derived():Base(0) { cout << "�Ļ�Ŭ���� ������" << endl; d = 0; };
	Derived(int _d):Base(_d) { cout << "�Ļ�Ŭ���� �����ִ� ������" << endl; d = _d; };
	~Derived() { cout << "�Ļ�Ŭ���� �Ҹ���" << endl; };
};


int main()
{
	Derived d1;
	Derived d2(200);
	return 0;
}