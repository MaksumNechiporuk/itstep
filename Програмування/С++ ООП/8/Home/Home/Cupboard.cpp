#include"Cupboard.h"

Cupboard::Cupboard()
{
	SetColor(8);
	cout << "Constructor Circle\n";
	name = "Circle";
	SetColor(7);
}

Cupboard::Cupboard(char arr[][5]) :Furniture(arr)
{
	name = "Circle";
}

Cupboard::Cupboard(char arr[][5], string name, int x, int y) : Furniture(arr, name, x, y)
{
	this->name = name;
}

Cupboard::Cupboard(char arr[][5], string name) : Furniture(arr, name, 10, 10)
{
	this->name = name;
}

Cupboard::Cupboard(char arr[][5], int x, int y) : Furniture(arr, "Circle", x, y)
{
}

Cupboard::~Cupboard()
{
	SetColor(8);
	cout << "Destructor Circle\n";
	SetColor(7);
}