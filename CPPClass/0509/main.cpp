#include <iostream>
#include "LBoard.h"

using namespace std;

int LBoard::count = 0;
int main()
{
	LBoard* myBoard = new LBoard;
	int menu;

	do {
		cout << "1_삽입 2_삭제 3_보기 4_종료 >> ";
		cin >> menu;

		switch (menu) {
		case 1:
			myBoard->insert();
			break;
		case 2:
			myBoard->remove();
			break;
		case 3:
			myBoard->showInfo();
			break;
		case 4:
			cout << " Program exit..." << endl;
			break;
		default:
			cout << "잘못된 메뉴선택 " << endl;
			break;
		}
	} while (menu != 4);
}