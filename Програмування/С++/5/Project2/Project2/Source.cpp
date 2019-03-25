#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ukr");
	int month,day;
	cout << "¬ведiть мiс€ць\t";
	cin >> month;
	cout << "¬ведiть день\t";
	cin >> day;
	switch (month)
	{
	case 1:
	{
		
		if (day == 31)
		{
			day = 1;
			month = 2;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else if (1 <= day&&day <= 30)
		{
			day++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else
			cout << "“акого дн€ не iснуЇ\n";
	break;
	}
	case 2:
	{
		if (day == 29)
		{
			day = 1;
			month++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else if (1 <= day && day <= 29)
		{
			day++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else
			cout << "“акого дн€ не iснуЇ\n";
		break;
	}
	case 3:
	{
		if (day == 31)
		{
			day = 1;
			month++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else if (1 <= day && day <= 31)
		{
			day++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else
			cout << "“акого дн€ не iснуЇ\n";
		break;
	}
	case 4:
	{
		if (day == 30)
		{
			day = 1;
			month++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else if (1 <= day && day <= 30)
		{
			day++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else
			cout << "“акого дн€ не iснуЇ\n";
		break;
	}
	case 5:
	{
		if (day == 31)
		{
			day = 1;
			month++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else if (1 <= day && day <= 31)
		{
			day++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else
			cout << "“акого дн€ не iснуЇ\n";
		break;
	}
	case 6:
	{
		if (day == 30)
		{
			day = 1;
			month++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else if (1 <= day && day <= 30)
		{
			day++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else
			cout << "“акого дн€ не iснуЇ\n";
		break;
	}
	case 7:
	{
		if (day == 31)
		{
			day = 1;
			month++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else if (1 <= day && day <= 31)
		{
			day++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else
			cout << "“акого дн€ не iснуЇ\n";
		break;
	}
	case 8:
	{
		if (day == 31)
		{
			day = 1;
			month++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else if (1 <= day && day <= 31)
		{
			day++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else
			cout << "“акого дн€ не iснуЇ\n";
		break;
	}
	case 9:
	{
		if (day == 30)
		{
			day = 1;
			month++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else if (1 <= day && day <= 30)
		{
			day++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else
			cout << "“акого дн€ не iснуЇ\n";
		break;
	}
	case 10:
	{
		if (day == 31)
		{
			day = 1;
			month++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else if (1 <= day && day <= 31)
		{
			day++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else
			cout << "“акого дн€ не iснуЇ\n";
		break;
	}
	case 11:
	{
		if (day == 30)
		{
			day = 1;
			month++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else if (1 <= day && day <= 30)
		{
			day++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else
			cout << "“акого дн€ не iснуЇ\n";
		break;
	}
	case 12:
	{
		if (day == 31)
		{
			day = 1;
			month++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else if (1 <= day && day <= 31)
		{
			day++;
			cout << "день - " << day << " мiс€ць - " << month << endl;
		}
		else
			cout << "“акого дн€ не iснуЇ\n";
		break;
	}
	default:
	{
		cout << "“акого мiс€ц€ не iснуЇ\n";
	}
	}
	system("pause");
}