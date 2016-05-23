#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
#include <string>
using namespace std;

template <typename T>

void sortArray(T num[], int size)
{
	T temp;
	for (int i = 0; i < size; i++){
		for (int j = i+1; j < size; j++){
			if (num[i] > num[j]){
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
}

template <typename T>
void printArray(T num[], int size){
	for (int i = 0; i < size; i++){
		
		cout << num[i] << " ";
		if ((i+1) % 10 == 0){
			cout << endl;
		}
	}
}

template <typename T>
class Cmp{
	T a, b;
public:
	Cmp(T _a, T _b){ a = _a; b = _b; };
	void setValues(T _a, T _b){ a = _a; b = _b; };

	T max();
	T min();

	void whatType();
};

template <typename T>
T Cmp<T>::max(){
	return a > b ? a : b;
};

template <typename T>
T Cmp<T>::min(){
	return a > b ? b : a;
};

template <typename T>
void Cmp<T>::whatType(){
	cout << typeid(T).name() << endl;
}

int main()
{
	/*int num[100];

	srand((unsigned)time(NULL));

	for (int i = 0; i < 100; i++){
		num[i] = rand() % 100 + 1;
	}
	sortArray(num, 100);

	printArray(num, 100);

	char ch[50];
	for (int i = 0; i < 50; i++){
		ch[i] = rand() % 26 + 'A';
	}

	sortArray(ch, 50);

	printArray(ch, 50);*/

	Cmp<int> c1(3, 5);

	cout << "max = " << c1.max() << endl;
	cout << "min = " << c1.min() << endl;
	c1.whatType();

	Cmp<char> c2('a', '$');

	cout << "max = " << c2.max() << endl;
	cout << "min = " << c2.min() << endl;
	c2.whatType();

	Cmp<string> c3("Hello", "Hi");

	cout << "max = " << c3.max() << endl;
	cout << "min = " << c3.min() << endl;
	c3.whatType();
}