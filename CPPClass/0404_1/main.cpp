#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
	int maxGas;
	double efficiency;
	cout << "�ܽ��� ���� �ִ뿬�ᷮ�� �����? >> ";
	cin >> maxGas >> efficiency;
	
	Car myAudi(maxGas, efficiency);
	
	int menu;

	do {
		cout << "1. ���Ẹ�� 2.���� Ǯ 3. ���� 4. ���ᷮ���� 5. ����" << endl;
		cout << "���� >> ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			int tempGas;
			cout << "��L ���Ḧ ä��ðڽ��ϱ�? ";
			cin >> tempGas;
			myAudi.addGas(tempGas);
			break;
		case 2:
			myAudi.addUp();
			break;
		case 3:
			double tempDistance;
			cout << "�� Km �����Ͻðڽ��ϱ�? ";
			cin >> tempDistance;
			myAudi.drive(tempDistance);
			break;
		case 4: 
			cout << "���� ���ᷮ�� " << myAudi.getNowGas() << "L �Դϴ�." << endl;
			break;
		case 5:
			cout << "Bye!" << endl;
			break;
		default:
			cout << "�ٽ� ���� �ٶ�." << endl;
			break;
		}
	} while (menu != 5);


	return 0;
}