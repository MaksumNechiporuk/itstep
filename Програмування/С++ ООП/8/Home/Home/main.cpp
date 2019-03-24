#include"Header.h"
#include"furniture.h"
#include"Cupboard.h"
void SetColor(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}


void main()
{
	char arr[5][5] = { {'.','.','*','.','.'},{'.','.','*','.','.'},{'.','.','*','.','.'},{'.','.','*','.','.'},{'.','.','*','.','.'} };
	char arr2[5][5] = { {'.','.','*','.','.'},{'.','*','*','*','.'},{'.','*','*','*','.'},{'.','*','*','*','.'},{'.','.','*','.','.'} };
	//Figure f(arr,"Base figure", 10,5);
	//f.ShowFigure();


}