#include<iostream>
#include<string>
using namespace std;

class Unit
{
	int Damage;
	string name;
	string typeAttack;
public:
	virtual Unit* Clone() = 0;
	virtual int GetDamege()
	{
		return Damage;
	}
	virtual string GetName()
	{
		return name;
	}
	virtual string GetTypeAttack()
	{
		return typeAttack;
	}
	virtual void SetData(int d, string n, string type)
	{
		Damage = d;
		name = n;
		typeAttack = type;
	}
	virtual void Show()
	{
		cout << name << "  " << Damage << "  " << typeAttack << endl;
	}
};


class Swordsman : public Unit
{
public:
	Swordsman(int d, string n, string type)
	{
		SetData( d,  n,  type);
	}
	Unit* Clone()
	{
		return new Swordsman(*this);
	}
};

class Archer : public Unit
{
public:
	Archer(int d, string n, string type)
	{
		SetData(d, n, type);
	}
	Unit* Clone()
	{
		return new Archer(*this);
	}
};

class Mag : public Unit
{
public:
	Mag(int d, string n, string type)
	{
		SetData(d, n, type);
	}
	Unit* Clone()
	{
		return new Mag(*this);
	}
};

class UnitFabric
{

	//static Unit *Unit_arr[3];
public:
	static Unit* CreateUnit(int c)
	{
		switch (c)
		{
		case 1:
		{
			return new Swordsman(15, "Swordman", " near attack ");
			break;
		}
		case 2:
		{
			return new Archer(10, "Archer", " far attack ");
			break;
		}
		case 3:
		{
			return new Mag(20, "Mag", " far attack ");
			break;
		}
		}
	}
};

int main()
{
	Unit *a = UnitFabric::CreateUnit(1);
	Unit *b = UnitFabric::CreateUnit(2);
	Unit *c = UnitFabric::CreateUnit(3);
	a->Show();
	b->Show();
	c->Show();
	system("pause");
}