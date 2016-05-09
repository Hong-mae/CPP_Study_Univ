#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
	Date d1(2016,2,29);
	d1.print();

	Date d2("2016/04/20");
	d2.print();

	Date d3("2015/2/10");
	d3.print();

	return 0;
}