#include <iostream>
#include "TotalNumbers.h"

using namespace std;

int main()
{
	int start, end;

	cout << "시작값, 끝값을 입력하시오! >> ";
	cin >> start >> end;

	CTotalNumbers n1(start, end);
	cout << start << " - " << end << "의 전체 합 : " << n1.totalAll() << endl;
	cout << start << " - " << end << "의 짝수의 합 : " << n1.totalEvenNum() << endl;
	cout << start << " - " << end << "의 홀수의 합 : " << n1.totalOddNum() << endl;
}