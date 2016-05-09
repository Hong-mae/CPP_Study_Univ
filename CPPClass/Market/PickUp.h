#pragma once
#include "Order.h"
class PickUp : public Order
{
public:
	PickUp();
	PickUp(string, string, int, string, string, int, int);
	PickUp(Customer, Product, int);
	~PickUp();
	void showOrderSpec();
};

