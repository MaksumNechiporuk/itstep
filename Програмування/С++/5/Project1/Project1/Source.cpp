#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int  choice;
	double number;
	cout << "�����i�� ������� ���� � ��� �� ������ ������������ � �i�������\n1 � �i�i����, 2 � ����, 3 � �i������, 4 � �������, 5 � �����.\n";
	cin >> choice;
	cout << "���i�� ����� ��� �� ������ ������������ � �i�������\n";
	cin >> number;
	switch (choice)
	{ 
	case 1:
	{
		number /= 1000000;
		cout << number <<" �i������\n";
		break;
	}
	case 2:
	{
		number /= 1000;
		cout << number << " �i������\n";
		break;
	}
	case 3:
	{
	
		cout << number << " �i������\n";
		break;
	}
	case 4:
	{
		number *= 100;
		cout << number << " �i������\n";
		break;
	}
	case 5:
	{
		number *= 1000;
		cout << number << " �i������\n";
		break;
	}
	}
	system("pause");
}