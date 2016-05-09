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

	cout << "주문자\n";
	Order::customer.showCustomer();
	cout << "\n주문제품\n";
	Order::product.showProduct();
	cout << "\n주문개수\n\t" << Order::count << "개" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << setw(40) << "총 합계: " << Order::getTotalPrice() << "원" << endl;
	cout << setw(41) << "할인가격: " << Order::getDiscount() << "원" << endl;
	cout << setw(41) << "배송요금: " << Surcharge << "원" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << setw(40) << "실계산금액: " << Order::getOrderPrice() + Surcharge << "원" << endl;
}
