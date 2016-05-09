#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;
const int MaxCount = 10;
// Flyer Class
/*
순수가상함수 void function() = 0;
-> 스스로 객체가 되지 못함.
-> 순수가상함수를 1개 이상 가지고 있으면 추상 클래스가 됨. != interface
-> 인터페이스 ? 모든 함수가 순수가상함수로 이루어진 클래스
-> 순수가상함수는 상속하는 자식이 반드시 그 함수를 오버라이딩해야함
*/
class Flyer {
protected:
	string name;
	Flyer *next;
public:
	Flyer(string _name) { name = _name; next = NULL; };
	virtual ~Flyer() { cout << "부모소멸자!" << endl; };
	string getName() { return name; };
	//virtual void fly() { cout << "나는 것들은 000난다. " << endl; };
	//virtual void landing() { cout << "나는 것들은 000착륙한다. " << endl; };
	virtual void fly() = 0; // 순수 가상 함수 : 선언만 있고 구현 필요없는 함수
	virtual void landing() = 0;
	Flyer *getNext() { return next; }

	Flyer *add(Flyer*);
};

// Bird Class
class Bird : public Flyer {
public:
	Bird(string name) : Flyer(name) {};
	~Bird() { cout << "자식(Bird)소멸자 호출! " << endl; };
	void fly();
	void landing();
};

void Bird::fly() {
	cout << name << "은(는) 두 날개를 퍼덕이며 난다. " << endl;
}
void Bird::landing() {
	cout << name << "은(는) 두 날개를 접고 발가락으로 나무가지를 잡으며 착륙한다. " << endl;
}
//Airplain class
class Airplain : public Flyer {
public:
	Airplain(string name) :Flyer(name) {};
	~Airplain() { cout << "자식(Airplain)소멸자 호출! " << endl; }
	void fly();
	void landing();
};

void Airplain::fly() {
	cout << name << "은(는) 두 날개의 엔진을 이용하며 난다. " << endl;
}
void Airplain::landing() {
	cout << name << "은(는) 두 날개의 엔진을 끄고 바퀴를 이용하여 착륙한다. " << endl;
}

int main()
{
	int menu;
	string name;
	Flyer *pStart = NULL;
	Flyer *pEnd = NULL;
	Flyer *p = NULL;
	int count = 0;

	Flyer *flyList[MaxCount];

	do {
		cout << "1) bird 2) Airplain 3) All show 4) only bird 5) only airplain 6) exit" << endl;
		cin >> menu;

		switch (menu) {
		case 1:
			cout << "What is bird name?";
			cin >> name;
			if (pStart == NULL) {
				pStart = new Bird(name);
				pEnd = pStart;
			}
			else {
				pEnd = pEnd->add(new Bird(name));
			}
			break;
		case 2:
			cout << "What is bird name?";
			cin >> name;
			if (pStart == NULL) {
				pStart = new Airplain(name);
				pEnd = pStart;
			}
			else {
				pEnd = pEnd->add(new Airplain(name));
			}
			break;
		case 3:
			p = pStart;
			while (p != NULL) {
				p->fly();
				p->landing();
				p = p->getNext();
			}
			break;
		case 4:
			p = pStart;
			while (p != NULL) {
				if (typeid(*p) == typeid(Bird)) {
					p->fly();
					p->landing();
				}
				p = p->getNext();
			}
			break;
		case 5:
			p = pStart;
			while (p != NULL) {
				if (typeid(*p) == typeid(Airplain)) {
					p->fly();
					p->landing();
				}
				p = p->getNext();
			}
			break;
		case 6:
			cout << "Program Exit... Bye" << endl;
			p = pStart;
			while (p != NULL) {
				Flyer *q = p->getNext();
				delete p;
				p = q;
			}
			break;
		default:
			cout << "잘못된 메뉴선택 입니다. " << endl;
			break;
		}
	} while (menu != 6 && count < MaxCount);
}

Flyer * Flyer::add(Flyer * _next)
{
	next = _next;

	return next;
}
