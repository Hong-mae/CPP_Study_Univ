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

	cout << "주문자\n";
	Order::customer.showCustomer();
	cout << "\n주문제품\n";
	Order::product.showProduct();
	cout << "\n주문개수\n\t" << Order::count << "개" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << setw(40) << "총 합계: " << Order::getTotalPrice() << "원" << endl;
	cout << setw(41) << "할인가격: " << Order::getDiscount()<< "원" << endl;
	cout << setw(41) << "픽업할인: " << Disc << "원" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << setw(40) << "실계산금액: " << Order::getOrderPrice()-Disc << "원" << endl;
}
