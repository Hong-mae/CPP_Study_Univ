#include <iostream>
#include <typeinfo> // typeid(a) == typeid(int)
#include "ContractWorker.h"
#include "regularWorker.h"
#include "TimeWorker.h"
using namespace std;

int Menu()
{
	int menu;

	cout << "1) 정규직 채용" << endl;
	cout << "2) 계약직 채용" << endl;
	cout << "3) 임시직 채용" << endl;
	cout << "4) 모든 직원 정보 보기" << endl;
	cout << "5) 정규직 직원 정보 보기" << endl;
	cout << "6) 계약직 직원 정보 보기" << endl;
	cout << "7) 끝내기" << endl;
	cout << "메뉴를 선택하세요 >>";
	cin >> menu;

	return menu;
}

int main()
{
	int menu;
	int empCount = 0;
	int tempValues = 0;
	string id, name;

	Employee *eList[100]; // 100명의 직원객체를 가리킬 수 있는 배열
	regularWorker *rp;
	ContractWorker *cp;
	TimeWorker *tp;

	do
	{
		menu = Menu();

		if (menu >= 1 && menu <= 3) {
			cout << "사번과 이름을 입력하시오 >> ";
			cin >> id >> name;
		}

		switch (menu)
		{
		case 1:
			cout << "호봉을 입력하시오 >> ";
			cin >> tempValues;
			rp = new regularWorker(id, name);
			rp->setLevel(tempValues);
			eList[empCount++] = rp;
			break;
		case 2:
			cout << "작업일수를 입력하시오 >> ";
			cin >> tempValues;
			cp = new ContractWorker(id, name);
			cp->setWorkDay(tempValues);
			eList[empCount++] = cp;
			break;
		case 3:
			cout << "작업시간을 입력하시오 >> ";
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
			cout << "잘못된 메뉴 선택입니다. " << endl;
			break;
		}

	} while (menu != 7);


	return 0;
}