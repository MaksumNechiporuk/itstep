#pragma once
#include"Header.h"
#include"furniture.h"

class Cupboard : public Furniture
{
public:
	Cupboard();
	Cupboard(char arr[][5]);
	Cupboard(char arr[][5], string name, int x, int y);
	Cupboard(char arr[][5], int x, int y);
	Cupboard(char arr[][5], string name);
	~Cupboard();
};
