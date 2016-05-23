#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

template <typename T>
class ArraySort
{
	T* parray; // 배열을 가리킬 주소
	T start;
	T end;
	int size;
public:
	ArraySort(T, T, int);
	~ArraySort();
	void inputArray();
	void showArray();
};

template <typename T>
ArraySort<T>::ArraySort(T _start, T _end, int _size)
{
	srand((unsigned)time(NULL));
	start = _start;
	end = _end;
	size = _size;
	parray = new T[size];
}

template <typename T>
ArraySort<T>::~ArraySort()
{
	delete[] parray;
}

template <typename T>
void ArraySort<T>::inputArray()
{
	if (typeid(T) == typeid(char)){
		for (int i = 0; i < size; i++){
			parray[i] = rand() % (26 + start) + ((end - start)-1);
		}
	}
	else{
		for (int i = 0; i < size; i++){
			parray[i] = rand() % start + ((end - start) + 1);
		}
	}
}

template <typename T>
void ArraySort<T>::showArray()
{
	for (int i = 0; i < size; i++){
		cout << parray[i] << " ";
	}
}