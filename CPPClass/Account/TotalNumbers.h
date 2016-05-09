#pragma once
class TotalNumbers
{
	//멤버변수를 상수로 사용하고싶음. 그러나 멤버변수정의때는 상수를 초기화 할수 없다.
	const int startNum;
	const int endNum; // const int endNum = 100; Error!!
public:
	TotalNumbers();
	~TotalNumbers();
};

