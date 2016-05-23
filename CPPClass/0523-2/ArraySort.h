#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

template <typename T>
class ArraySort
{
	T* parray; // 배열을 가리킬 주소
public:
	ArraySort(int);
	~ArraySort();
	void inputArray();
	void showArray();
};

