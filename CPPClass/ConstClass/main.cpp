#include <iostream>
#include "TotalNumbers.h"

using namespace std;

int main()
{
	int start, end;

	cout << "���۰�, ������ �Է��Ͻÿ�! >> ";
	cin >> start >> end;

	CTotalNumbers n1(start, end);
	cout << start << " - " << end << "�� ��ü �� : " << n1.totalAll() << endl;
	cout << start << " - " << end << "�� ¦���� �� : " << n1.totalEvenNum() << endl;
	cout << start << " - " << end << "�� Ȧ���� �� : " << n1.totalOddNum() << endl;
}