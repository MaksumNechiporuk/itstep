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
		cout << "���������� �������i ������\n";
		cout << "����i�� �i������ - ";
		cin >> vidstan;
		cout << "����i�� ����i� ������� �� 100 ��  - ";
		cin >> benzun;
		cout << "����i�� �i�� ������ �� 1 �  - ";
		cin >> price;

		double _vartist = (benzun / 100)*vidstan * price;
		cout << "����i��� ������ �� �i��� ����������� - " << _vartist << endl;
		cout << "�������� ����i��� ������ - " << _vartist * 2 << endl << endl << endl;
		cout << endl << "1.�����\n2.����������\n��� ���i�______\b\b\b\b";
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
		cout << "���������\n";
		const double dolar = 27.86, gruvna = 0.036;
		int choise;
		double money;
		cout << "1.������ � ���\n2.��� � ������\n��� ���i�______\b\b\b\b";
		cin >> choise;
		system("cls");
		cout << "����i�� ���� ���� ������\n";
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
		cout << endl << "1.�����\n2.����������\n��� ���i�______\b\b\b\b";
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
		cout << "��������� ���\n";
		
		int choise;
		double masa;
		cout << "1.�i������� � �����\n2.����� � �i�������\n��� ���i�______\b\b\b\b";
		cin >> choise;
		system("cls");
		cout << "����i�� �����\n";
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
		cout << endl << "1.�����\n2.����������\n��� ���i�______\b\b\b\b";
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
	cout << "�����������\n";
	for (int i = 0; i != 1;)
	{
		
		double number1, number2;
		char symbol;
		do
		{
			cout << "����i�� �����\n";
			cin >> number1;
			system("cls");
			cout << "�����i�� �i�\n";
			cin >> symbol;
			system("cls");
			cout << "����i�� �����\n";
			cin >> number2;
			system("cls");
			cout << "�����������\n";
			if (number1 < 0 || number2 < 0 && symbol == 'z')
			{
				cout << "����� �� ���� �i���� 0\n";
			}
			else 	if (number2 == 0 && symbol == '/')
				cout << "�� 0 ����� �� �����\n";
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
		cout << endl << "1.�����\n2.����������\n��� ���i�______\b\b\b\b";
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
	cout << "����\n1.�����������\n2.��������� �����\n3.��������� ����\n4.���������� ���� �� ������\n5.���i�\n��� ���i�______\b\b\b\b";
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