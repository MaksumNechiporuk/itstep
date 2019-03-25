#include<iostream>
#include<ctime>
#include<iomanip>
#include<cstdlib>
#include<string>
using namespace std;
void menu();
void poizdka()
{	
	system("cls");
	double benzun, price , vidstan;
	for (int i = 0; i != 1;)
	{
		cout << "Розрахунок вартостi поїздки\n";
		cout << "Введiть вiдстань - ";
		cin >> vidstan;
		cout << "Введiть розхiд бензину на 100 км  - ";
		cin >> benzun;
		cout << "Введiть цiну палива за 1 л  - ";
		cin >> price;

		double _vartist = (benzun / 100)*vidstan * price;
		cout << "Вартiсть поїздки до мiсця призначення - " << _vartist << endl;
		cout << "Загальна вартiсть поїздки - " << _vartist * 2 << endl << endl << endl;
		cout << endl << "1.Назад\n2.Продовжити\nВаш вибiр______\b\b\b\b";
		cin >> i;
		if (i == 1)
		{
			system("cls");
			menu();

		}
		system("cls");
	}
}

void konverter_money()
{
	system("cls");
	for (int i = 0; i != 1;)
	{
		cout << "Конвертер\n";
		const double dolar = 27.86, gruvna = 0.036;
		int choise;
		double money;
		cout << "1.Долари в грн\n2.Грн в долари\nВаш вибiр______\b\b\b\b";
		cin >> choise;
		system("cls");
		cout << "Введiть вашу суму грошей\n";
		cin >> money;
		switch (choise)
		{
		case 1:
		{
			cout << money / gruvna << endl;
			break;
		}
		case 2:
		{
			cout << money / dolar << endl;
			break;
		}
		}
		cout << endl << "1.Назад\n2.Продовжити\nВаш вибiр______\b\b\b\b";
		cin >> i;
		if (i == 1)
		{
			system("cls");
			menu();

		}
		system("cls");
	}
}
void konverter_vagu()
{
	system("cls");
	for (int i = 0; i != 1;)
	{
		cout << "Конвертер ваг\n";
		
		int choise;
		double masa;
		cout << "1.Кiлограми в грами\n2.Грами в кiлограми\nВаш вибiр______\b\b\b\b";
		cin >> choise;
		system("cls");
		cout << "Введiть число\n";
		cin >> masa;
		switch (choise)
		{
		case 1:
		{
			cout << masa *1000  << endl;
			break;
		}
		case 2:
		{
			cout << masa /1000 << endl;
			break;
		}
		}
		cout << endl << "1.Назад\n2.Продовжити\nВаш вибiр______\b\b\b\b";
		cin >> i;
		if (i == 1)
		{
			system("cls");
			menu();

		}
		system("cls");
	}

}

void call()
{
	system("cls");
	cout << "Калькулятор\n";
	for (int i = 0; i != 1;)
	{
		
		double number1, number2;
		char symbol;
		do
		{
			cout << "Введiть число\n";
			cin >> number1;
			system("cls");
			cout << "Виберiть дiю\n";
			cin >> symbol;
			system("cls");
			cout << "Введiть число\n";
			cin >> number2;
			system("cls");
			cout << "Калькулятор\n";
			if (number1 < 0 || number2 < 0 && symbol == 'z')
			{
				cout << "Число має бути бiльше 0\n";
			}
			else 	if (number2 == 0 && symbol == '/')
				cout << "На 0 ділити не можна\n";
			else
				break;
		} while (1);
		switch (symbol)
		{
		case '+':
		{
			cout << number1 << symbol << number2 << "=" << number1 + number2 << endl;
			break;
		}
		case '-':
		{
			cout << number1 << symbol << number2 << "=" << number1 - number2 << endl;
			break;
		}
		case '*':
		{
			cout << number1 << symbol << number2 << "=" << number1 * number2 << endl;
			break;
		}
		case '/':
		{
			cout << number1 << symbol << number2 << "=" << number1 / number2 << endl;
			break;
		}
		case '^':
		{
			cout << number1 << symbol << number2 << "=" << pow(number1, number2) << endl;
			break;
		}
		case 'z':
		{
			cout << "z(" << number1 << ")=" << sqrt(number1) << endl << "z(" << number2 << ")=" << sqrt(number2) << endl;
			break;
		}
		}
		cout << endl << "1.Назад\n2.Продовжити\nВаш вибiр______\b\b\b\b";
		cin >> i;
		if (i == 1)
		{
			system("cls");
			menu();

		}
		system("cls");
	}
}
void menu()
{
	cout << "Меню\n1.Калькулятор\n2.Конвертер валют\n3.Конвертер ваги\n4.Розрахунок суми за дорогу\n5.Вихiд\nВаш вибiр______\b\b\b\b";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		call();
		break;
	}
	case 2:
	{
		konverter_money();
		break;
	}
	case 3:
	{
		konverter_vagu();
		break;
	}
	case 4:
	{
		poizdka();
		break;
	}
	case 5:
	{
		break;
	}
	}
}
int main()
{
	setlocale(LC_ALL, "ukr");
	srand(time(0));



	menu();


	system("pause");
}