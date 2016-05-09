#pragma once
#include "Order.h"
class Delivery : public Order
{
public:
	Delivery();
	Delivery(string, string, int, string, string, int, int);
	Delivery(Customer, Product, int);
	~Delivery();

	void showOrderSpec();
};

