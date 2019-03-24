#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int  choice;
	double number;
	cout << "¬иберiть одиницю ваги в €ку ви хочете конвертувати в кiлограми\n1 Ч мiлiграм, 2 Ч грам, 3 Ч кiлограм, 4 Ч центнер, 5 Ч тонна.\n";
	cin >> choice;
	cout << "¬едiть число €ке ви хочете конвертувати в кiлограми\n";
	cin >> number;
	switch (choice)
	{ 
	case 1:
	{
		number /= 1000000;
		cout << number <<" кiлограм\n";
		break;
	}
	case 2:
	{
		number /= 1000;
		cout << number << " кiлограм\n";
		break;
	}
	case 3:
	{
	
		cout << number << " кiлограм\n";
		break;
	}
	case 4:
	{
		number *= 100;
		cout << number << " кiлограм\n";
		break;
	}
	case 5:
	{
		number *= 1000;
		cout << number << " кiлограм\n";
		break;
	}
	}
	system("pause");
}