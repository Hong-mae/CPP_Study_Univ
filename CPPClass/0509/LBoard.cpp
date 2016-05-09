#include "LBoard.h"



LBoard::LBoard()
{
	pStart = pEnd = NULL;
}

//������ ��� ��ü�� �Ҹ��Ŵ
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

	cout << "1)�� 2)�簢�� >> ";
	cin >> shapeMenu;

	switch (shapeMenu) {
	case 1: { // ����ü ������ ����
		cout << "������? : "; cin >> radius;
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
	case 2: // �簢��ü ������ ����
		cout << "����, ����? : "; cin >> width >> height;
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
		cout << "���� ���� ����!! �ٽü��� >> ";
		break;
	}

	count++;
}

void LBoard::remove()
{
	int index;

	if (pStart == NULL) {
		cout << "������ �����ϴ�. " << endl;
		return;
	}
	
	cout << "������ �ε��� >>";
	cin >> index;
	index -= 1;

	if (index > count || index < 0) {
		cout << "�������� �ʴ� �ε��� �Դϴ�." << endl;
	}
	else {
		Shape*p = pStart;
		Shape*prev = p;
		
		for (int i = 0; i < index; i++) {
			prev = p;
			p = p->getNext();

			if (p == NULL) {
				cout << "�ش� �ε����� ������ �������� �ʽ��ϴ�." << endl;
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
