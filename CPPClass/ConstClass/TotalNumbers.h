#pragma once
class CTotalNumbers
{
	const int startNum;
	const int endNum;
public:
	CTotalNumbers(int, int);
	~CTotalNumbers();
	int totalAll(); // ��� ���� ��
	int totalEvenNum(); // ¦���� ��
	int totalOddNum(); // Ȧ���� ��
};

