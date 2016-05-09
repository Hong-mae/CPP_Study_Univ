#pragma once
#include <string>
#include "Customer.h"
#include "Product.h"

using namespace std;

class Order
{
protected:
	Customer customer;
	Product product;
	int count;
public:
	Order();
	Order(string, string, int, string, string, int, int); // Ŀ����, ���δ�Ʈ, ����
	Order(Customer, Product, int);
	~Order();

	int getTotalPrice();
	int getDiscount();
	int getOrderPrice();
	virtual void showOrderSpec();
};

