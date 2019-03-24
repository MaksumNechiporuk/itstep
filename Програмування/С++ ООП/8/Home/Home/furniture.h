#pragma once
#include"Header.h"
class Furniture
{
	enum { col = 5, row = 5 };
	char figArr[5][5];
	int posX;
	int posY;
protected:
	string name;
public:
	Furniture(char arr[][5]);
	Furniture(char arr[][5], string name, int x, int y);
	Furniture();
	void ShowFurniture();
	~Furniture();
};
