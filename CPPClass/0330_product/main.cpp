#include <iostream>
#include <string>
#include <Windows.h>
#include <cctype>
#include "Product.h"
using namespace std;

int menu();
int productRegiste(Product*, int);
void showAllInfo(Product*, int);
void selectedInfo(Product*, int, char);
void category();

int main() {
	int selected; // 메뉴를선택했을때return 값을받는변수
	int regiNum = 0; // 상품최대갯수를저장하는변수
	int count = 0; // 상품을검색할때쓰는변수. 0번째부터regiNum 까지++ 할변수.

	cout << "상품 등록 최대 갯수입력>> ";
	cin >> regiNum;

	Product *p;
	p = new Product[regiNum]; // 상품의최대수많큼동적할당.

	do {
		cout << "등록 가능한 상품의 수는" << regiNum - count << "개 입니다." << endl;
		selected = menu();

		switch (selected) {
		case 1:
			if (count == regiNum)
				cout << "최대 상품 수를 초과 하였습니다." << endl;
			else
				productRegiste(p, count) == 1 ? count : count++; // 함수가 잘못처리 되어 1이 반환 되었을 때 count 값 유지, 잘 처리되었다면 count 값++

			break;
		case 2:
			showAllInfo(p, count); // 동적생성된Product 배열과등록한상품의갯수를매개변수로전송
			break;
		case 3:
			char _code;
			cout << "검색할 코드를 입력하세요>>";
			cin >> _code;

			selectedInfo(p, count, _code);// 동적생성된Product 배열과등록한상품의갯수, 검색할코드를전송
			break;
		case 4:
			cout << "종료 합니다.\n";
			break;
		default:
			cout << "잘못된 메뉴 선택입니다.\n";
			break;
		}
	} while (selected != 4);
}

int menu()
{
	char choice;
	cout << "--------------------" << endl;
	cout << "1. 상품등록" << endl;
	cout << "2. 전체상품정보" << endl;
	cout << "3. 코드별상품정보" << endl;
	cout << "4. 종료" << endl;
	cout << "--------------------" << endl;
	cout << "메뉴선택>> ";
	cin >> choice;
	fflush(stdin);
	if (isdigit(choice)) {
		choice = -1;
	}

	return choice;
}

int productRegiste(Product* _p, int c)
{
	string str;
	char co;
	int pr;
	int cnt;

excip:
	cout << "코드를 입력하세요(코드를 모르면 'h' or 'help') >> ";
	cin >> str;


	if (str == "c" || str == "개인용") {
		co = 'c';
	}
	else if (str == "e" || str == "기업용") {
		co = 'e';
	}
	else if (str == "p" || str == "관공서용") {
		co = 'p';
	}
	else if (str == "h" || str == "help") {
		cout << "1. 개인= 'c' or 개인용\n";
		cout << "2. 기업= 'e' or 기업용\n";
		cout << "3. 관공서= 'p' or 관공서용\n";

		goto excip;
	}
	else {
		cout << "코드가 잘못 되었습니다." << endl;
		return 1;
	}


	cout << "가격을 입력 하세요>> ";
	cin >> pr;

	cout << "갯수를 입력 하세요>> ";
	cin >> cnt;

	_p[c] = Product(co, pr, cnt);
	cout << "등록완료" << endl;

	Sleep(500);
	system("cls");
}
void showAllInfo(Product* _p, int _count) {
	if (_count != 0) { // 등록된상품의갯수가0이아니면
		category();

		for (int i = 0; i < _count; i++) {
			_p[i].showInfo(); // 값이있는지0을반환없다면1을반환
		}

		cout << "\n\n";

		cout << "일시정지합니다. ";
		system("pause");
		system("cls");
	}
	else
		cout << "\n\n등록된 상품이 없습니다.\n\n";
}
void selectedInfo(Product* _p, int _count, char _code) {
	if (_count != 0) { // 등록된상품의갯수가0이아니면
		category();

		for (int i = 0; i < _count; i++) {
			_p[i].selectedInfo(_code); // 값이있는지0을반환없다면1을반환
		}

		cout << "\n\n";

		cout << "일시정지 합니다. ";
		system("pause");
		system("cls");
	}
	else
		cout << "\n\n등록된 상품이 없습니다.\n\n";
}

void category()
{
	cout << "\n\n코드\t가격\t개수\t순가격\t세금\t총가격" << endl;
	cout << "----------------------------------------------" << endl;
}