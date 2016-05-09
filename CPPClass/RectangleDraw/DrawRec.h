#pragma once
class DrawRec
{
	int width;
	int height;
	char fill;

public:
	DrawRec();
	~DrawRec();

	void setValue(int, int, char);
	void drawLine();
	void drawFill();
	void showInfo();
};

