#include "TotalNumbers.h"



CTotalNumbers::CTotalNumbers(int start, int end) : startNum(start), endNum(end) //초기화 리스트
{

}



CTotalNumbers::~CTotalNumbers()
{
}

int CTotalNumbers::totalAll()
{
	int temp, total = 0;
	int start = startNum, end = endNum;
	if (start > end) {
		temp = start;
		start = end;
		end = temp;
	}

	for (int i = start; i <= end; i++) {
		total += i;
	}
	return total;
}

int CTotalNumbers::totalEvenNum()
{
	int temp, total = 0;
	int start = startNum, end = endNum;
	if (start > end) {
		temp = start;
		start = end;
		end = temp;
	}

	for (int i = start; i <= end; i++) {
		if (i % 2 == 0) {
			total += i;
		}
	}
	return total;
}

int CTotalNumbers::totalOddNum()
{
	int temp, total = 0;
	int start = startNum, end = endNum;
	if (start > end) {
		temp = start;
		start = end;
		end = temp;
	}

	for (int i = start; i <= end; i++) {
		if (i % 2 != 0) {
			total += i;
		}
	}

	return total;
}
