#include"Menu.h"

	void menu(string str, int &c)
	{
		cout << c << ". " << str << endl;
		c++;
	}
	int choice()
	{
		cout << " Your choice  ";
		int c;
		cin >> c;
		return c;
	}