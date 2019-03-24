#pragma once
#include<iostream>

using namespace std;

class Unit
{

protected:
	string name;
	int HP;
	int attack;
	int avoid_attack;
public:
	void Attack(Unit *&u);
	void AvoidAttack(Unit *&u);
	bool Life(int &size);
	void Show();
};