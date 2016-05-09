#include "Delivery.h"
#include <iostream>
#include <iomanip>

using namespace std;


Delivery::Delivery()
{}

Delivery::Delivery(string c_id, string c_name, int c_rank, string p_id, string p_name, int p_price, int o_count)
	: Order(c_id, c_name, c_rank, p_id, p_name, p_price, o_count)
{}

Delivery::Delivery(Customer _customer, Product _product, int o_count)
	: Order(_customer, _product, o_count)
{}


Delivery::~Delivery()
{
}

void Delivery::showOrderSpec()
{
	int Surcharge = 3000;

	if (getTotalPrice() >= 60000) {
		Surcharge = 0;
	}

	cout << "�ֹ���\n";
	Order::customer.showCustomer();
	cout << "\n�ֹ���ǰ\n";
	Order::product.showProduct();
	cout << "\n�ֹ�����\n\t" << Order::count << "��" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << setw(40) << "�� �հ�: " << Order::getTotalPrice() << "��" << endl;
	cout << setw(41) << "���ΰ���: " << Order::getDiscount() << "��" << endl;
	cout << setw(41) << "��ۿ��: " << Surcharge << "��" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << setw(40) << "�ǰ��ݾ�: " << Order::getOrderPrice() + Surcharge << "��" << endl;
}
