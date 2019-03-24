#include<iostream>
#include<string>

using namespace std;

class Person
{
	double money;
public:
	Person(double m)
	{
		money = m;
	}
	double &GetMoney()
	{
		return money;
	}
	void Show()
	{
		cout << "money:" << money << endl;
	}
};
class Way
{
public:
	bool Destination(double &money,double m)
	{
		if (money > m)
		{
			money -= m;
			cout << "I arrived\n";
			return true;
		}
		else
			cout << "Not enough money\n";
		return false;
	}
};
class Renting_Home
{
public:
	void Pay(double &money, double m)
	{
		if (money > m)
		{
			money -= m;
			cout << "I have home\n";
		}
		else
			cout << "Not enough money\n";
	}
};
class Skiing
{
	
public:
	void Pay(double &money, double m,bool c)
	{
		if (money > m)
		{
			money -= m;
			cout << "I skiing\n";
		}
		else
			cout << "Not enough money\n";
		if (c == true)
			money -= 2000;
	}
};
class Food
{
public:
	void Pay(double &money, double m)
	{
		if (money > m)
		{
			money -= m;
			cout << "I paid for food\n";
		}
		else
			cout << "Not enough money\n";
	}
};
class Various_Entertainment
{
public:
	void Pay(double &money, double m)
	{
		if (money > m)
		{
			money -= m;
			cout << "I paid for various entertainment\n";
		}
		else
			cout << "Not enough money\n";
	}
};
class Facade
{
	Person *person;
	Way *way;
	Renting_Home * my_home;
	Skiing  * skiing;
	Food * food;
	Various_Entertainment *entertainment;
public:
	Facade()
	{
		way = new Way();
		my_home = new Renting_Home();
		skiing = new Skiing();
		food = new Food();
		entertainment = new Various_Entertainment();
	}
	void Elite_Vicend()
	{
		person = new Person(300000);
		person->Show();
		if (way->Destination(person->GetMoney(), 10000))

		{
			my_home->Pay(person->GetMoney(), 100000);
			skiing->Pay(person->GetMoney(), 10000, true);
			skiing->Pay(person->GetMoney(), 10000, true);
			skiing->Pay(person->GetMoney(), 10000, true);
			food->Pay(person->GetMoney(), 100000);
			entertainment->Pay(person->GetMoney(), 10000);
			way->Destination(person->GetMoney(), 10000);
			person->Show();
		}
	}
	void Simple_Vicend()
	{
		person = new Person(30000);
		person->Show();
		if (way->Destination(person->GetMoney(), 2000)) {
			my_home->Pay(person->GetMoney(), 5000);
				skiing->Pay(person->GetMoney(), 1000, true);
				skiing->Pay(person->GetMoney(), 1000, true);
				food->Pay(person->GetMoney(), 6000);
				entertainment->Pay(person->GetMoney(), 4000);
				way->Destination(person->GetMoney(), 2000);
				person->Show();
		}
	}
};
int main()
{
	Facade f;
	f.Elite_Vicend();
	cout << endl << endl;;
	f.Simple_Vicend();
	system("pause");
}