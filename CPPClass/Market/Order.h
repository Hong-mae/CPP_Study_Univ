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
	Order(string, string, int, string, string, int, int); // Ä¿½ºÅÒ, ÇÁ·Î´öÆ®, °¡°Ý
	Order(Customer, Product, int);
	~Order();

	int getTotalPrice();
	int getDiscount();
	int getOrderPrice();
	virtual void showOrderSpec();
};

