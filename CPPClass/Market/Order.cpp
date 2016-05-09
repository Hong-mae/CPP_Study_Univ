#include "Order.h"
#include <iostream>
#include <iomanip>

using namespace std;

Order::Order()
{}

Order::Order(string c_id, string c_name, int c_rating, string p_code, string p_name, int p_price, int o_count)
{
	customer = Customer(c_id, c_name, c_rating);
	product = Product(p_code, p_name, p_price);
	count = o_count;
}

Order::Order(Customer _customer, Product _product, int _count)
{
	customer = _customer;
	product = _product;
	count = _count;
}


Order::~Order()
{}

int Order::getTotalPrice()
{
	return count*product.getPrice();
}

int Order::getDiscount()
{
	int Disc = 0;

	switch (customer.getLevel()) {
	case 1:
		Disc = getTotalPrice()*0.1;
		break;
	case 2:
		Disc = getTotalPrice()*0.05;
		break;
	case 3:
		Disc = getTotalPrice()*0.02;
		break;
	case 4:
		Disc = 0;
		break;
	}
	return Disc;
}

int Order::getOrderPrice()
{
	return getTotalPrice() - getDiscount();
}

void Order::showOrderSpec()
{
	/*cout << "�ֹ���\n";
	customer.showCustomer();
	cout << "\n�ֹ���ǰ\n";
	product.showProduct(); 
	cout << "\n�ֹ�����\n\t" << count << "��" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << setw(40) << "�� �հ�: " << getTotalPrice() << "��" << endl;
	cout << setw(41) << "���ΰ���: " << getDiscount() << "��" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << setw(40) << "�ǰ��ݾ�: " << getOrderPrice() << "��" << endl;*/
}
