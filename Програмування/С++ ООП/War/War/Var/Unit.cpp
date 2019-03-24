#include"Unit.h"
#include<ctime>
#include<string>
void Unit::AvoidAttack(Unit *&u)
{
	int ran = 1 + rand() % (100 - 1);
	if (ran > u->avoid_attack)
	{
		Attack(u);
	}
	else
	{
		cout << "The warrior avoided the attack\n";
	}
}
void Unit::Attack(Unit *&u)
{
	u->HP-= this->attack;
}
bool Unit::Life(int &size)
{
	if (HP <= 0)
	{
		size--;
		return false;
	}
	else
		return true;
}
void Unit::Show()
{
	cout << "Name: " << name << "       " << "HP=" << HP <<"  Damage="<<attack<<endl;
}