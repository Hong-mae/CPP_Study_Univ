#pragma once
class CTotalNumbers
{
	const int startNum;
	const int endNum;
public:
	CTotalNumbers(int, int);
	~CTotalNumbers();
	int totalAll(); // 모든 수의 합
	int totalEvenNum(); // 짝수의 합
	int totalOddNum(); // 홀수의 합
};

