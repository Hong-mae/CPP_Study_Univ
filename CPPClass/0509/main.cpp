#include <iostream>
#include "LBoard.h"

using namespace std;

int LBoard::count = 0;
int main()
{
	LBoard* myBoard = new LBoard;
	int menu;

	do {
		cout << "1_���� 2_���� 3_���� 4_���� >> ";
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
			cout << "�߸��� �޴����� " << endl;
			break;
		}
	} while (menu != 4);
}