#include <iostream>
//#include <stack> // push(v), pop(), top(), empty(), size()
#include <string>
//#include <queue> // push(v), pop, front, back(), empty(), size();
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	////stack<string> myStack;
	//queue<int> myQueue;
	//int menu, value;
	////string value;
	//

	//do{
	//	//cout << "1)push 2)pop 3)size 4)스택비우기 5)eixt >> ";
	//	cout << "1)push 2)pop 3)element count 4)front 5)back 6)resetQ 7)exit >> ";
	//	cin >> menu;

	//	switch (menu)
	//	{
	//	case 1: cout << "입력할 원소 ? ";
	//		cin >> value;
	//		/*myStack.push(value);
	//		cout << value << "원소가 push됨" << endl;*/
	//		myQueue.push(value);
	//		break;
	//	case 2:
	//		/*if (!myStack.empty()){
	//			cout << myStack.top() << "원소가 빠져나감." << endl;
	//			myStack.pop();
	//		}
	//		else
	//			cout << "비어있는 스택입니다." << endl;*/

	//		if (!myQueue.empty()){
	//			cout << myQueue.front() << "원소가 빠져나감." << endl;
	//			myQueue.pop();
	//		}
	//		else {
	//			cout << "비어있는 큐입니다." << endl;
	//		}
	//		break;
	//	case 3:
	//		/*cout << "현재 스택의 원소의 수는 " << myStack.size() << endl;*/
	//		cout << "현재 큐의 원소의 수는 " << myQueue.size() << endl;
	//		break;
	//	case 4:
	//		/*while (!myStack.empty()){
	//			cout << myStack.top() << "원소가 빠져나감." << endl;
	//			myStack.pop();
	//		}*/
	//		if (!myQueue.empty()){
	//			cout << "첫번째 큐는 " << myQueue.front() << endl;
	//		}
	//		else
	//			cout << "비어있는 큐입니다." << endl;
	//		break;
	//	case 5:
	//		if (!myQueue.empty()){
	//			cout << "마지막 큐는 " << myQueue.back() << endl;
	//		}
	//		else
	//			cout << "비어있는 큐입니다." << endl;
	//		break;
	//	case 6:
	//		while (!myQueue.empty()){
	//			cout << myQueue.front() << "원소가 빠져나감." << endl;
	//			myQueue.pop();
	//		}
	//		break;
	//	case 7:
	//		cout << "bye" << endl;
	//		break;
	//	default:
	//		cout << "잘못된 선택" << endl;
	//		break;
	//	}
	//} while (menu != 7);

	vector<int> myVector;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++){
		myVector.push_back(rand() % 10 + 1);
	}

	for (int i = 0; i < myVector.size(); i++){
		cout << myVector[i] << " ";
		if ((i+1) % 10 == 0){
			cout << endl;
		}
	}

	//특정원소 갯수
	int value = 0;
	cout << "찾을 숫자는 ? ";
	cin >> value;

	cout << value << "는 " << count(myVector.begin(), myVector.end(), value) << "개 입니다" << endl;

	cout << "삭제할 숫자는 ?";
	cin >> value;
	cout << count(myVector.begin(), myVector.end(), value) << "개 입니다" << endl;

	


	/*
	1. 자판기 시뮬레이터 프로그램 작성

2. 판매할 메뉴를 구조체로 표현한다. (MenuItem)
	- 메뉴 이름 string
	- 가격 int

3. 메뉴 클래스 (Menu class)
	- 메뉴 항목(MenuItem)을 저장할 자료구조(STL, 컨테이너, list, 배열 x)를 멤버 변수로 가진다.
	- 그외 변수는 알아서
	- 설정함수(setMenu)매개변수로 입력되는 숫자만큼 메뉴아이템을 설정
	- 출력함수(displayMenu) 메뉴 항목들이 출력된다. 단, 현재 자판기에 들어있는 잔액으로 대출 가능한 메뉴만 출력되고, 마지막은 항상 "잔액반환" 메뉴가 나온다

4. 자판기 클래스(VendingMachines)
	- 멤버변수: 메뉴[메뉴 객체], 입금액, 잔액, 선택 메뉴 번호
	- 메뉴설벙변수  몇개의 메뉴를 만들지 입력, 그 숫자만큼 메뉴아이템을 만든다.
	- 메뉴 츌럭 함수 : 현재 잔액으로 배출가능한 메뉴를 보여준다
	- 입금 : 사용자로부터 돈을 받는가 만약 잔액이 남아있지않다면 돈은 잔액에 추가된다
	- 메뉴선택 : 잔액이 메뉴를 매출할 수 있는 동안 메뉴항목 선택 -> 메뉴 항목 배출 -> 잔액 출력이 반복된다.
			만약 잔액이 0원이면 입금으로 돌아간다. 막약 잔액이 남아있고 배출 가능한 없는 경우 돈 추가 또는 잔액반환을 선택하도록 한다.
			돈 추가를 선택한 경우 입금으로 돌아가고, 잔액 반황을 선택한 경우 잔액을 반환하고 입금으로 돌아간다.
	- 잔액계산 : 현재 잔액에서 메뉴항목가격을 뺀다.
	- 메뉴항목배출 : 선택한 메뉴항목 이름을 출력한다 ex) "콜라가 배출됨"
	- run() 알아서 하세요...
	*/
}