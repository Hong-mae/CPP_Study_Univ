#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;
const int MaxCount = 10;
// Flyer Class
/*
���������Լ� void function() = 0;
-> ������ ��ü�� ���� ����.
-> ���������Լ��� 1�� �̻� ������ ������ �߻� Ŭ������ ��. != interface
-> �������̽� ? ��� �Լ��� ���������Լ��� �̷���� Ŭ����
-> ���������Լ��� ����ϴ� �ڽ��� �ݵ�� �� �Լ��� �������̵��ؾ���
*/
class Flyer {
protected:
	string name;
	Flyer *next;
public:
	Flyer(string _name) { name = _name; next = NULL; };
	virtual ~Flyer() { cout << "�θ�Ҹ���!" << endl; };
	string getName() { return name; };
	//virtual void fly() { cout << "���� �͵��� 000����. " << endl; };
	//virtual void landing() { cout << "���� �͵��� 000�����Ѵ�. " << endl; };
	virtual void fly() = 0; // ���� ���� �Լ� : ���� �ְ� ���� �ʿ���� �Լ�
	virtual void landing() = 0;
	Flyer *getNext() { return next; }

	Flyer *add(Flyer*);
};

// Bird Class
class Bird : public Flyer {
public:
	Bird(string name) : Flyer(name) {};
	~Bird() { cout << "�ڽ�(Bird)�Ҹ��� ȣ��! " << endl; };
	void fly();
	void landing();
};

void Bird::fly() {
	cout << name << "��(��) �� ������ �۴��̸� ����. " << endl;
}
void Bird::landing() {
	cout << name << "��(��) �� ������ ���� �߰������� ���������� ������ �����Ѵ�. " << endl;
}
//Airplain class
class Airplain : public Flyer {
public:
	Airplain(string name) :Flyer(name) {};
	~Airplain() { cout << "�ڽ�(Airplain)�Ҹ��� ȣ��! " << endl; }
	void fly();
	void landing();
};

void Airplain::fly() {
	cout << name << "��(��) �� ������ ������ �̿��ϸ� ����. " << endl;
}
void Airplain::landing() {
	cout << name << "��(��) �� ������ ������ ���� ������ �̿��Ͽ� �����Ѵ�. " << endl;
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
			cout << "�߸��� �޴����� �Դϴ�. " << endl;
			break;
		}
	} while (menu != 6 && count < MaxCount);
}

Flyer * Flyer::add(Flyer * _next)
{
	next = _next;

	return next;
}
