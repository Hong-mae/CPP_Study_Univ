#include <iostream>
#include <typeinfo>
#include "Customer.h"
#include "Product.h"
#include "Order.h"
#include "PickUp.h"
#include "Delivery.h"

/*
	픽업주문 클래스 //Clear!
		1. 주문클래스를 상속받는다.
		2. 픽업 주문한 경우, 전체 합계가 6만원 이상인 경우 추가적으로 5% 할인을 해준다.(6만원 이하는 없음)
		3. showOrderSpec()에서는 픽업에 따른 추가 할인 금액이 적용된 최종 금액이 출력된다.

	배달주문 클래스 //clear
		1. 주문클래스를 상속받는다.
		2. 배달주문인 경우 배송지 주소를 입력 받기위한 추가 멤버변수가 필요하며, 전체 합계가 6만원 미만인 경우 배송료 3000원이 추가된다.
		3. showOrderSpec()에서는 배송료가 추가된 최종 금액이 출력된다.

	메인함수 //clear
		1. 픽업주문, 배달 주문을 구분하지 않고 최대 100개 까지 받을 수 있다.
		2. 모든 주문 정보(showOrderSpec())을 출력한다.
		3. 픽업주문만 출력할 수 있다.
		4. 배달주문만 출력할 수 있다.

*/

using namespace std;

int Menu() {
	int menu;

	cout << "1) 픽업 주문 하기" << endl;
	cout << "2) 배달 주문 하기" << endl;
	cout << "3) 전체 주문 정보 보기" << endl;
	cout << "4) 픽업 주문 정보 보기" << endl;
	cout << "5) 배달 주문 정보 보기" << endl;
	cout << "6) 끝내기" << endl;
	cout << "메뉴를 선택하세요 >> ";
	cin >> menu;

	return menu;
}

int main() {
	int menu;
	int shoppingCount = 0;
	string c_id, c_name;
	int c_rank; // Customer
	string p_id, p_name;
	int p_price; // Product
	int o_count = 0; // 주문수량
	Order *o_List[100];

	/*o_List[0] = new PickUp("ce12345", "park", 1, "se12345678", "새우깡", 1200, 21);

	o_List[0]->showOrderSpec();

	o_List[1] = new Delivery("ce11111", "kim", 2, "se141111111", "홈런볼", 3100, 10);

	o_List[1]->showOrderSpec();*/

	do
	{
		menu = Menu();

		if (menu == 1 || menu == 2) {
			cout << "아이디를 입력하세요 : ";
			cin >> c_id;
			cout << "이름을 입력하세요 : ";
			cin >> c_name;
			cout << "등급을 입력하세요 : ";
			cin >> c_rank;
			fflush(stdin);

			cout << "제품아이디를 입력하세요 : ";
			cin >> p_id;
			cout << "제품이름을 입력하세요 : ";
			cin >> p_name;
			cout << "제품가격을 입력하세요 : ";
			cin >> p_price;
			fflush(stdin);
			cout << "주문수량을 입력하세요 : ";
			cin >> o_count;
		}

		switch (menu)
		{
		case 1:
			o_List[shoppingCount++] = new PickUp(c_id, c_name, c_rank, p_id, p_name, p_price, o_count);
			break;
		case 2:
			o_List[shoppingCount++] = new Delivery(c_id, c_name, c_rank, p_id, p_name, p_price, o_count);
			break;
		case 3:
			for (int i = 0; i < shoppingCount; i++) {
				o_List[i]->showOrderSpec();
			}
			break;
		case 4:
			for (int i = 0; i < shoppingCount; i++) {
				if (typeid(*o_List[i]) == typeid(PickUp)) {
					o_List[i]->showOrderSpec();
				}
			}
			break;
		case 5:
			for (int i = 0; i < shoppingCount; i++) {
				if (typeid(*o_List[i]) == typeid(Delivery)) {
					o_List[i]->showOrderSpec();
				}
			}
			break;
		case 6:
			cout << "Program Finished... BYE!" << endl;
			break;
		default:
			cout << "잘못된 메뉴선택입니다. " << endl;
			break;
		}
	} while (menu != 6);
}