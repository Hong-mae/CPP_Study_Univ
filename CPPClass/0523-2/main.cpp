#include <iostream>
#include "ArraySort.h"

using namespace std;


int main(){
	ArraySort<int> iarray(10, 20, 10);

	iarray.inputArray();
	iarray.showArray();

	ArraySort<char> carray('A', 'F', 10);

	carray.inputArray();
	carray.showArray();
}