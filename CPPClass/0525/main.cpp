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
	//	//cout << "1)push 2)pop 3)size 4)���ú��� 5)eixt >> ";
	//	cout << "1)push 2)pop 3)element count 4)front 5)back 6)resetQ 7)exit >> ";
	//	cin >> menu;

	//	switch (menu)
	//	{
	//	case 1: cout << "�Է��� ���� ? ";
	//		cin >> value;
	//		/*myStack.push(value);
	//		cout << value << "���Ұ� push��" << endl;*/
	//		myQueue.push(value);
	//		break;
	//	case 2:
	//		/*if (!myStack.empty()){
	//			cout << myStack.top() << "���Ұ� ��������." << endl;
	//			myStack.pop();
	//		}
	//		else
	//			cout << "����ִ� �����Դϴ�." << endl;*/

	//		if (!myQueue.empty()){
	//			cout << myQueue.front() << "���Ұ� ��������." << endl;
	//			myQueue.pop();
	//		}
	//		else {
	//			cout << "����ִ� ť�Դϴ�." << endl;
	//		}
	//		break;
	//	case 3:
	//		/*cout << "���� ������ ������ ���� " << myStack.size() << endl;*/
	//		cout << "���� ť�� ������ ���� " << myQueue.size() << endl;
	//		break;
	//	case 4:
	//		/*while (!myStack.empty()){
	//			cout << myStack.top() << "���Ұ� ��������." << endl;
	//			myStack.pop();
	//		}*/
	//		if (!myQueue.empty()){
	//			cout << "ù��° ť�� " << myQueue.front() << endl;
	//		}
	//		else
	//			cout << "����ִ� ť�Դϴ�." << endl;
	//		break;
	//	case 5:
	//		if (!myQueue.empty()){
	//			cout << "������ ť�� " << myQueue.back() << endl;
	//		}
	//		else
	//			cout << "����ִ� ť�Դϴ�." << endl;
	//		break;
	//	case 6:
	//		while (!myQueue.empty()){
	//			cout << myQueue.front() << "���Ұ� ��������." << endl;
	//			myQueue.pop();
	//		}
	//		break;
	//	case 7:
	//		cout << "bye" << endl;
	//		break;
	//	default:
	//		cout << "�߸��� ����" << endl;
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

	//Ư������ ����
	int value = 0;
	cout << "ã�� ���ڴ� ? ";
	cin >> value;

	cout << value << "�� " << count(myVector.begin(), myVector.end(), value) << "�� �Դϴ�" << endl;

	cout << "������ ���ڴ� ?";
	cin >> value;
	cout << count(myVector.begin(), myVector.end(), value) << "�� �Դϴ�" << endl;

	


	/*
	1. ���Ǳ� �ùķ����� ���α׷� �ۼ�

2. �Ǹ��� �޴��� ����ü�� ǥ���Ѵ�. (MenuItem)
	- �޴� �̸� string
	- ���� int

3. �޴� Ŭ���� (Menu class)
	- �޴� �׸�(MenuItem)�� ������ �ڷᱸ��(STL, �����̳�, list, �迭 x)�� ��� ������ ������.
	- �׿� ������ �˾Ƽ�
	- �����Լ�(setMenu)�Ű������� �ԷµǴ� ���ڸ�ŭ �޴��������� ����
	- ����Լ�(displayMenu) �޴� �׸���� ��µȴ�. ��, ���� ���Ǳ⿡ ����ִ� �ܾ����� ���� ������ �޴��� ��µǰ�, �������� �׻� "�ܾ׹�ȯ" �޴��� ���´�

4. ���Ǳ� Ŭ����(VendingMachines)
	- �������: �޴�[�޴� ��ü], �Աݾ�, �ܾ�, ���� �޴� ��ȣ
	- �޴���������  ��� �޴��� ������ �Է�, �� ���ڸ�ŭ �޴��������� �����.
	- �޴� ���� �Լ� : ���� �ܾ����� ���Ⱑ���� �޴��� �����ش�
	- �Ա� : ����ڷκ��� ���� �޴°� ���� �ܾ��� ���������ʴٸ� ���� �ܾ׿� �߰��ȴ�
	- �޴����� : �ܾ��� �޴��� ������ �� �ִ� ���� �޴��׸� ���� -> �޴� �׸� ���� -> �ܾ� ����� �ݺ��ȴ�.
			���� �ܾ��� 0���̸� �Ա����� ���ư���. ���� �ܾ��� �����ְ� ���� ������ ���� ��� �� �߰� �Ǵ� �ܾ׹�ȯ�� �����ϵ��� �Ѵ�.
			�� �߰��� ������ ��� �Ա����� ���ư���, �ܾ� ��Ȳ�� ������ ��� �ܾ��� ��ȯ�ϰ� �Ա����� ���ư���.
	- �ܾװ�� : ���� �ܾ׿��� �޴��׸񰡰��� ����.
	- �޴��׸���� : ������ �޴��׸� �̸��� ����Ѵ� ex) "�ݶ� �����"
	- run() �˾Ƽ� �ϼ���...
	*/
}