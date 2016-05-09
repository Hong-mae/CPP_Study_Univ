#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
	int maxGas;
	double efficiency;
	cout << "단신의 차의 최대연료량과 연비는? >> ";
	cin >> maxGas >> efficiency;
	
	Car myAudi(maxGas, efficiency);
	
	int menu;

	do {
		cout << "1. 연료보충 2.연료 풀 3. 운전 4. 연료량보기 5. 종료" << endl;
		cout << "선택 >> ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			int tempGas;
			cout << "몇L 연료를 채우시겠습니까? ";
			cin >> tempGas;
			myAudi.addGas(tempGas);
			break;
		case 2:
			myAudi.addUp();
			break;
		case 3:
			double tempDistance;
			cout << "몇 Km 운전하시겠습니까? ";
			cin >> tempDistance;
			myAudi.drive(tempDistance);
			break;
		case 4: 
			cout << "현재 연료량은 " << myAudi.getNowGas() << "L 입니다." << endl;
			break;
		case 5:
			cout << "Bye!" << endl;
			break;
		default:
			cout << "다시 선택 바람." << endl;
			break;
		}
	} while (menu != 5);


	return 0;
}