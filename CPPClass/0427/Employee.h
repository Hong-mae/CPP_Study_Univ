#pragma once
#include <iostream>
#include <string>

using namespace std;

/*
���
+showInfo()
������
�⺻150

10ȣ�� = 150
9ȣ�� = 200
8250
7300
6350
5400
4450
3 500
2ȣ�� = 550
1ȣ�� = 600

getPay()
+showInfo()
�����


getPay()
+showInfo()

�ӽ���
-worktime

-getPay();
+showInfo();
*/
class Employee
{
protected:
	string ID;
	string name;
public:
	Employee();
	Employee(string, string);
	~Employee();
	virtual void showInfo(); // ���Լ��� �������̵��ȴٸ� ���� ���ε� �Ǵ� �ڽİ�ü�� �Լ��� ȣ���ϵ��� ��.
};

