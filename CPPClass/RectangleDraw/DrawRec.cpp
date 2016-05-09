#include "DrawRec.h"
#include <iostream>
#include <Windows.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define SPACE 32

using namespace std;

DrawRec::DrawRec()
{
}


DrawRec::~DrawRec()
{
}

void gotoxy(int x, int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void DrawRec::setValue(int w, int h, char f)
{
	width = w;
	height = h;
	fill = f;
}

void DrawRec::drawLine()
{
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			if (i == 0) {
				cout << fill;
			}
			else if (i == height- 1) {
				cout << fill;
			}
			else {
				if (j == 0 || j == width - 1) {
					cout << fill;
				}
				else {
					cout << " ";
				}
			}
		}
		cout << endl;
	}
}

void DrawRec::drawFill()
{
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << fill;
		}
		cout << endl;
	}
}

void DrawRec::showInfo()
{

}


int menu() {
	int choice;

	cout << "1. 셋팅 2. 선 그리기 3. 그냥 그리기 5. 종료" << endl;
	cout << "메뉴 선택 >> ";
	cin >> choice;
	fflush(stdin);
	return choice;
}

int main() {
	DrawRec dr;
	int choice;
	do {
		choice = menu();
		switch (choice) {
		case 1:
			int x, y;
			char f;

			cout << "가로와 세로를 입력하세요 >> ";
			cin >> x >> y;
			cout << "사각형을 채울 문자를 입력하세요 >> ";
			cin >> f;

			dr.setValue(x, y, f);
			break;
		case 2:
			dr.drawLine();
			break;
		case 3:
			dr.drawFill();
			break;
		case 4:
			dr.drawFill();
			break;
		case 5:
			cout << "Bye!!!" << endl;
			break;
		default:
			cout << "잘못된 메뉴 선택이에요.." << endl;
			break;
		}
		cout << endl << "일시 정지 합니다. ";
		system("pause");
		system("cls");
	} while (choice != 5);
}