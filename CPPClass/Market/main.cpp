#include <iostream>
#include <typeinfo>
#include "Customer.h"
#include "Product.h"
#include "Order.h"
#include "PickUp.h"
#include "Delivery.h"

/*
	�Ⱦ��ֹ� Ŭ���� //Clear!
		1. �ֹ�Ŭ������ ��ӹ޴´�.
		2. �Ⱦ� �ֹ��� ���, ��ü �հ谡 6���� �̻��� ��� �߰������� 5% ������ ���ش�.(6���� ���ϴ� ����)
		3. showOrderSpec()������ �Ⱦ��� ���� �߰� ���� �ݾ��� ����� ���� �ݾ��� ��µȴ�.

	����ֹ� Ŭ���� //clear
		1. �ֹ�Ŭ������ ��ӹ޴´�.
		2. ����ֹ��� ��� ����� �ּҸ� �Է� �ޱ����� �߰� ��������� �ʿ��ϸ�, ��ü �հ谡 6���� �̸��� ��� ��۷� 3000���� �߰��ȴ�.
		3. showOrderSpec()������ ��۷ᰡ �߰��� ���� �ݾ��� ��µȴ�.

	�����Լ� //clear
		1. �Ⱦ��ֹ�, ��� �ֹ��� �������� �ʰ� �ִ� 100�� ���� ���� �� �ִ�.
		2. ��� �ֹ� ����(showOrderSpec())�� ����Ѵ�.
		3. �Ⱦ��ֹ��� ����� �� �ִ�.
		4. ����ֹ��� ����� �� �ִ�.

*/

using namespace std;

int Menu() {
	int menu;

	cout << "1) �Ⱦ� �ֹ� �ϱ�" << endl;
	cout << "2) ��� �ֹ� �ϱ�" << endl;
	cout << "3) ��ü �ֹ� ���� ����" << endl;
	cout << "4) �Ⱦ� �ֹ� ���� ����" << endl;
	cout << "5) ��� �ֹ� ���� ����" << endl;
	cout << "6) ������" << endl;
	cout << "�޴��� �����ϼ��� >> ";
	cin >> menu;

	return menu;
}

int main() {
	int menu;
	int shoppingCount = 0;
	string c_id, c_name;
	int c_rank; // Customer
	string p_id, p_name;
	int p_price; // Product
	int o_count = 0; // �ֹ�����
	Order *o_List[100];

	/*o_List[0] = new PickUp("ce12345", "park", 1, "se12345678", "�����", 1200, 21);

	o_List[0]->showOrderSpec();

	o_List[1] = new Delivery("ce11111", "kim", 2, "se141111111", "Ȩ����", 3100, 10);

	o_List[1]->showOrderSpec();*/

	do
	{
		menu = Menu();

		if (menu == 1 || menu == 2) {
			cout << "���̵� �Է��ϼ��� : ";
			cin >> c_id;
			cout << "�̸��� �Է��ϼ��� : ";
			cin >> c_name;
			cout << "����� �Է��ϼ��� : ";
			cin >> c_rank;
			fflush(stdin);

			cout << "��ǰ���̵� �Է��ϼ��� : ";
			cin >> p_id;
			cout << "��ǰ�̸��� �Է��ϼ��� : ";
			cin >> p_name;
			cout << "��ǰ������ �Է��ϼ��� : ";
			cin >> p_price;
			fflush(stdin);
			cout << "�ֹ������� �Է��ϼ��� : ";
			cin >> o_count;
		}

		switch (menu)
		{
		case 1:
			o_List[shoppingCount++] = new PickUp(c_id, c_name, c_rank, p_id, p_name, p_price, o_count);
			break;
		case 2:
			o_List[shoppingCount++] = new Delivery(c_id, c_name, c_rank, p_id, p_name, p_price, o_count);
			break;
		case 3:
			for (int i = 0; i < shoppingCount; i++) {
				o_List[i]->showOrderSpec();
			}
			break;
		case 4:
			for (int i = 0; i < shoppingCount; i++) {
				if (typeid(*o_List[i]) == typeid(PickUp)) {
					o_List[i]->showOrderSpec();
				}
			}
			break;
		case 5:
			for (int i = 0; i < shoppingCount; i++) {
				if (typeid(*o_List[i]) == typeid(Delivery)) {
					o_List[i]->showOrderSpec();
				}
			}
			break;
		case 6:
			cout << "Program Finished... BYE!" << endl;
			break;
		default:
			cout << "�߸��� �޴������Դϴ�. " << endl;
			break;
		}
	} while (menu != 6);
}