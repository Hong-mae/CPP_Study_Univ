#include <iostream>
#include <typeinfo> // typeid(a) == typeid(int)
#include "ContractWorker.h"
#include "regularWorker.h"
#include "TimeWorker.h"
using namespace std;

int Menu()
{
	int menu;

	cout << "1) ������ ä��" << endl;
	cout << "2) ����� ä��" << endl;
	cout << "3) �ӽ��� ä��" << endl;
	cout << "4) ��� ���� ���� ����" << endl;
	cout << "5) ������ ���� ���� ����" << endl;
	cout << "6) ����� ���� ���� ����" << endl;
	cout << "7) ������" << endl;
	cout << "�޴��� �����ϼ��� >>";
	cin >> menu;

	return menu;
}

int main()
{
	int menu;
	int empCount = 0;
	int tempValues = 0;
	string id, name;

	Employee *eList[100]; // 100���� ������ü�� ����ų �� �ִ� �迭
	regularWorker *rp;
	ContractWorker *cp;
	TimeWorker *tp;

	do
	{
		menu = Menu();

		if (menu >= 1 && menu <= 3) {
			cout << "����� �̸��� �Է��Ͻÿ� >> ";
			cin >> id >> name;
		}

		switch (menu)
		{
		case 1:
			cout << "ȣ���� �Է��Ͻÿ� >> ";
			cin >> tempValues;
			rp = new regularWorker(id, name);
			rp->setLevel(tempValues);
			eList[empCount++] = rp;
			break;
		case 2:
			cout << "�۾��ϼ��� �Է��Ͻÿ� >> ";
			cin >> tempValues;
			cp = new ContractWorker(id, name);
			cp->setWorkDay(tempValues);
			eList[empCount++] = cp;
			break;
		case 3:
			cout << "�۾��ð��� �Է��Ͻÿ� >> ";
			cin >> tempValues;
			tp = new TimeWorker(id, name);
			tp->setWorkTime(tempValues);
			eList[empCount++] = tp;
			break;
		case 4:
			for (int i = 0; i < empCount; i++) {
				eList[i]->showInfo();
			}
			break;
		case 5:
			for (int i = 0; i < empCount; i++) {
				if (typeid(*eList[i]) == typeid(regularWorker)) {
					eList[i]->showInfo();
				}
			}
			break;
		case 6:
			for (int i = 0; i < empCount; i++) {
				if (typeid(*eList[i]) == typeid(ContractWorker)) {
					eList[i]->showInfo();
				}
			}
			break;
		case 7:
			cout << "Program Finished...\n\n";
			break;
		default:
			cout << "�߸��� �޴� �����Դϴ�. " << endl;
			break;
		}

	} while (menu != 7);


	return 0;
}