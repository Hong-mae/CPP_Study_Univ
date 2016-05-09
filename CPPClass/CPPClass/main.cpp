#include <iostream>

using namespace std;

// class
class CPoint {
	//��� ���� ���� ( ������ �⺻ : private )
	int x;
	int y;
	//��� �Լ� ����

public://������
	void setValue(int _x, int _y) {	//�ܺηκ��� ������ �Ű����� ���� ��������� �Ҵ�
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
	int wherePoint() { // ��� ��и鿡 ���� ��ġ�ϴ� ��?
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
}; //class end (����� ����)

int main()
{
	//��ü ���� (���������ϵ���)
	CPoint p1, p2;
	int x, y;

	cout << "p1 ��ǥ �Է� >> ";
	cin >> x >> y;
	p1.setValue(x, y);

	if (p1.isZero()) {
		cout << "�� ���� �����Դϴ�." << endl;
	}
	else if(p1.isOnX()) {
		cout << "�� ���� x�� ���� �ֽ��ϴ�." << endl;
	}
	else if (p1.isOnY()) {
		cout << "�� ���� y�� ���� �ֽ��ϴ�." << endl;
	}
	else {
		cout << "�� ���� " << p1.wherePoint() << "��и鿡 �ֽ��ϴ�." << endl;
	}

	cout << "p2 ��ǥ �Է� >> ";
	cin >> x >> y;
	p2.setValue(x, y);

	switch (p2.wherePoint())
	{
	case -2:
		cout << "�� ���� y�� ���� �ֽ��ϴ�." << endl;
		break;
	case -1:
		cout << "�� ���� x�� ���� �ֽ��ϴ�." << endl;
		break;
	case 0:
		cout << "�� ���� �����Դϴ�. \n" << endl;
		break;
	default:
		cout << "�� ���� " << p2.wherePoint() << "��и鿡 �ֽ��ϴ�." << endl;
		break;
	}
}