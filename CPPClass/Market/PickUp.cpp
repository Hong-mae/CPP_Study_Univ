#include "PickUp.h"
#include <iostream>
#include <iomanip>

using namespace std;

PickUp::PickUp()
{
}

PickUp::PickUp(string c_id, string c_name, int c_rank, string p_id, string p_name, int p_price, int o_count)
	: Order(c_id, c_name, c_rank, p_id, p_name, p_price, o_count)
{}

PickUp::PickUp(Customer _customer, Product _product, int o_count)
	: Order(_customer, _product, o_count)
{}


PickUp::~PickUp()
{
}

void PickUp::showOrderSpec()
{
	int Disc = 0;

	if (getTotalPrice() >= 60000) {
		Disc = getTotalPrice()*0.05;
	}

	cout << "�ֹ���\n";
	Order::customer.showCustomer();
	cout << "\n�ֹ���ǰ\n";
	Order::product.showProduct();
	cout << "\n�ֹ�����\n\t" << Order::count << "��" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << setw(40) << "�� �հ�: " << Order::getTotalPrice() << "��" << endl;
	cout << setw(41) << "���ΰ���: " << Order::getDiscount()<< "��" << endl;
	cout << setw(41) << "�Ⱦ�����: " << Disc << "��" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << setw(40) << "�ǰ��ݾ�: " << Order::getOrderPrice()-Disc << "��" << endl;
}
