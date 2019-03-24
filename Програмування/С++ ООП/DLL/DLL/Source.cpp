#include<iostream>
#include"Menu.h"

using namespace std;
int main()
{
	int c = 1;

	menu("cout Hello", c);
	menu("cout Hi", c);
	menu("cout Bye", c);
	menu("cout mather", c);
	menu("cout father", c);
	switch (choice())
	{
	case 1:
	{
		cout << "Hello\n";
		break;
	}
	case 2:
	{
		cout << "Hi\n";
		break;
	}
	case 3:
	{
		cout << "Bye\n";
		break;
	}
	case 4:
	{
		cout << "mather\n";
		break;
	}
	case 5:
	{
		cout << "father\n";
		break;
	}
	}


	system("pause");
}