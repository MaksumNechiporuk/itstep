#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ukr");
	int month,day;
	cout << "����i�� �i����\t";
	cin >> month;
	cout << "����i�� ����\t";
	cin >> day;
	switch (month)
	{
	case 1:
	{
		
		if (day == 31)
		{
			day = 1;
			month = 2;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else if (1 <= day&&day <= 30)
		{
			day++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else
			cout << "������ ��� �� i���\n";
	break;
	}
	case 2:
	{
		if (day == 29)
		{
			day = 1;
			month++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else if (1 <= day && day <= 29)
		{
			day++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else
			cout << "������ ��� �� i���\n";
		break;
	}
	case 3:
	{
		if (day == 31)
		{
			day = 1;
			month++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else if (1 <= day && day <= 31)
		{
			day++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else
			cout << "������ ��� �� i���\n";
		break;
	}
	case 4:
	{
		if (day == 30)
		{
			day = 1;
			month++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else if (1 <= day && day <= 30)
		{
			day++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else
			cout << "������ ��� �� i���\n";
		break;
	}
	case 5:
	{
		if (day == 31)
		{
			day = 1;
			month++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else if (1 <= day && day <= 31)
		{
			day++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else
			cout << "������ ��� �� i���\n";
		break;
	}
	case 6:
	{
		if (day == 30)
		{
			day = 1;
			month++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else if (1 <= day && day <= 30)
		{
			day++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else
			cout << "������ ��� �� i���\n";
		break;
	}
	case 7:
	{
		if (day == 31)
		{
			day = 1;
			month++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else if (1 <= day && day <= 31)
		{
			day++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else
			cout << "������ ��� �� i���\n";
		break;
	}
	case 8:
	{
		if (day == 31)
		{
			day = 1;
			month++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else if (1 <= day && day <= 31)
		{
			day++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else
			cout << "������ ��� �� i���\n";
		break;
	}
	case 9:
	{
		if (day == 30)
		{
			day = 1;
			month++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else if (1 <= day && day <= 30)
		{
			day++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else
			cout << "������ ��� �� i���\n";
		break;
	}
	case 10:
	{
		if (day == 31)
		{
			day = 1;
			month++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else if (1 <= day && day <= 31)
		{
			day++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else
			cout << "������ ��� �� i���\n";
		break;
	}
	case 11:
	{
		if (day == 30)
		{
			day = 1;
			month++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else if (1 <= day && day <= 30)
		{
			day++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else
			cout << "������ ��� �� i���\n";
		break;
	}
	case 12:
	{
		if (day == 31)
		{
			day = 1;
			month++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else if (1 <= day && day <= 31)
		{
			day++;
			cout << "���� - " << day << " �i���� - " << month << endl;
		}
		else
			cout << "������ ��� �� i���\n";
		break;
	}
	default:
	{
		cout << "������ �i���� �� i���\n";
	}
	}
	system("pause");
}