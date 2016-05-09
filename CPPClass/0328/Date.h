#pragma once
#include <iostream>
#include <string>

using namespace std;

/*
	��¥Ŭ������ ���������� ��,��,�� ������ ���� �� �ְ� "2016.22.22" ���·� �Է¹����� �ִ�(������)
	��¥Ŭ������ ��, ��, �� �� ��ȿ���� �˻��ϴ� isValue �ִ�.������� 2009.9.31�� ��ȿ�����ʴ�
	�� ������ ó���ؾ��ϸ� ��¥�� ����ϴ� ��������� ��ȿ�� ��¥�� ���� "0000�� 00�� 00��"�� ���·� ���

	���� = 4��� �̸� 100�ǹ�� ���� 400�� ����� ����

*/

class Date
{
	int year;
	int month;
	int day;
public:
	Date();
	Date(int, int, int);
	Date(string);
	~Date();
	bool isValue();
	bool isLeap();
	void print();
};

