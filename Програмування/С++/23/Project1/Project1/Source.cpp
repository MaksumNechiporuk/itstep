#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>
#include<Windows.h>
using namespace std;
double money = 1000;
void registration();
void 	menu();
double output(int money1);
double transfer(double money);
double transfer(int number, double money);
void authorization(string arr_login, string arr_password);
void authorization(string arr_login, int arr_number[]);
void balance(int money1);
void balance(int money1)
{
	system("cls");
	cout << "��� ������:" << money1 << endl;
	menu();
}
double output(int money1)
{
	system("cls");
	do
	{
		cout << "������ ���� ";
		cin >> money1;
		if (money1 > money)
			cout << "����������� �����\n";
		else
			break;
	} while (1);
	money -= money1;

	menu();
	return money;

}
double transfer(int number,double money1)
{
	system("cls");
	do
	{
		cout << "����i�� ����� �������� ";
		cin >> number;
		cout << "����i�� ���� �������� ";
		cin >> money1;
		if (money1 > money)
			cout << "����������� ����i�\n";
		else
			break;
	} while (1);
	money -= money1;
	menu();
	return money;
	
}
double transfer(double money1)
{
	system("cls");
	do
	{
		cout << "����i�� ���� �������� ";
		cin >> money1;
		if (money1 > money)
			cout << "����������� ����i�\n";
		else 
			break;
	} while (1);
	money -= money1;
	menu();
	return money;

}
void registration()
{
	string arr_login, arr_password;
	int arr_number[1];
	cout << "���i�: ";
	cin >> arr_login;
	cout << "������: ";
	cin >> arr_password;
	cout << "����� ��������:380  ";
	cin >> arr_number[0];
	system("cls");
	int chouse;
	cout << "��� ��i��� � ������ �� ��������� ���i�� i ������ ������i�� 1\n��� ��i��� � ������ �� ��������� ���i�� i ������ �������� ������i�� 2\n��� ���i�______\b\b\b";
	cin >>chouse;
	system("cls");
if(chouse==1)
	authorization(arr_login, arr_password);
else if(chouse==2)
authorization(arr_login, arr_number);
}
void authorization(string arr_login, string arr_password)
{
	string arr_login1, arr_password1;
	system("cls");
	do
	{
		cout << "���i�: ";
		cin >> arr_login1;
		cout << "������: ";
		cin >> arr_password1;
		if ((arr_login1 != arr_login || arr_password1 != arr_password))
		{
			cout << "������ ��� ���i� ������� �� �i���\n";
			Sleep(2000);
			system("cls");
		}
		else {
			cout << "�� ������� ���������i�\n";
			Sleep(2000);
			system("cls");
			menu();
		}
		} while(arr_login1!= arr_login || arr_password1!= arr_password);

}
void authorization(string arr_login, int arr_number[])
{
	string arr_login1;
	system("cls");
	int arr_number1[1];
	do
	{
		cout << "���i�: ";
		cin >> arr_login1;
		cout << "����� ��������: ";
		cin >> arr_number1[0];
		if ((arr_login1 != arr_login || arr_number1[0] != arr_number[0]))
		{
			cout << "����� �������� ��� ���i� ������� �� �i���\n";
			Sleep(2000);
			system("cls");
		}
		else {
			cout << "�� ������� ���������i�\n";
			Sleep(2000);
			menu();
			system("cls");

		}
	} while (arr_login1 != arr_login || arr_number1[0] != arr_number[0]);
}
void menu()
{
	int chouse;
	cout << "1.������� ������\n2.���i� ������\n3.�����i���� ������\n4.���i�\n��� ���i�______\b\b\b";
	cin >> chouse;
	switch (chouse)
	{
	case 1:
		{
		system("cls");
		cout<<"������� ������:\n1.�� ������\n2.�� �������\n��� ���i�______\b\b\b";
		cin >> chouse;
		switch (chouse)
		{
		case 1:
		{
			
			system("cls");
			unsigned  int card[16];
			cout << "����i�� ����� ������\n";
			for(int i=0;i<16;i++)
			cin >> card[i];
			money=transfer(money);
			break;
		}
		case 2:
		{
			int number=0;
			system("cls");
			money = transfer( number,money);
			
			break;
		}
		}
			break;
		}
	case 2:
	{
		system("cls");
		output(money);
		break;
	}
	case 3:
	{
		balance( money);
		break;
	}
	case 4:
		break;
	}
}
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "ukr");
	registration();
	string arr_login1="user", arr_password1="12345";
	int arr_number[20] = { 0,9,8,6,6,5,3,4,1,8};
	
	system("pause");
}