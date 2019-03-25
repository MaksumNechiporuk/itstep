#include<iostream>
#include<ctime>;
using namespace std;
int main()
{
	srand(time(0));
	 
	setlocale(LC_ALL, "ukr");
	char arr1[] = "Понедiлок", arr2[] = "Вiвторок", arr3[] = { "Середа" }, arr4[] = "Четвер", arr5[] = "П'ятниця",arr6[]="Субота",arr7[]="Недiля";
	int choice;
	cout<<"Enter choice ";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
	cout << arr1 << endl;
	break;
	}
	case 2:
	{
	cout << arr2 << endl;
	break;
	}
	case 3:
	{
	cout << arr3 << endl;
	break;
	}
	case 4:
	{
	cout << arr4 << endl;
	break;
	}
	case 5:
	{
	cout << arr5 << endl;
	break;
	}
	case 6:
	{
	cout << arr6 << endl;
	break;
	}
	case 7:
	{
	cout << arr7 << endl;
	break;
	}
	}

	system("pause");
}