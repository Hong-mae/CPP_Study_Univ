#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

template <typename T>
class ArraySort
{
	T* parray; // �迭�� ����ų �ּ�
public:
	ArraySort(int);
	~ArraySort();
	void inputArray();
	void showArray();
};

