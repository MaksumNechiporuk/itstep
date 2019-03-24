#include<iostream>
#include<ctime>
#include"Unit.h"
#include"Mag.h"
#include"Swordsman.h"
#include"Archer.h"

using namespace std;
void create_team(Unit **&u)
{
	for (int i = 0; i < 3; i++)
	{
		int a = 1+rand() % (3);
		switch (a)
		{
		case 1:
		{
			u[i] = new Archer();
			u[i]->Show();
			break;
		}
		case 2:
		{
			u[i] = new Swordsman();
			u[i]->Show();
			break;
		}
		case 3:
		{
			u[i] = new Mag();
			u[i]->Show();
			break;
		}
		}
	}
}
void Attack(Unit **&u1, Unit **&u2,int &size1,int &size2)
{
	int a =rand() % size1;
	int b= rand() % size2;
	cout << endl;
	u1[a]->Show();
	u2[b]->Show();
	u1[a]->AvoidAttack(u2[b]);
	u2[b]->Show();
	if (u2[b]->Life(size2) == false)
	{
		int ind = b;
		Unit ** temp = new Unit*[size2];
		for(int i=0,k=0;i< size2+1;i++)
		{ 
			if (ind == i)
			{
				continue;
		}
			else {
				temp[k] = u2[i];
				k++;
			}
		}
		delete u2[ind];
		delete[]u2;
	
		u2 = temp;
	}
	cout << endl;
	
	system("pause");
	system("cls");
	
}
void S(Unit **&u1, Unit **&u2, int &size1, int &size2)
{
	cout << "Team 1\n";
	for (int i = 0; i < size1; i++)
		u1[i]->Show();
	cout << "Team 2\n";
	for (int i = 0; i < size2; i++)
		u2[i]->Show();
	system("pause");
	system("cls");
}
int main()
{
	srand(time(0));
	int size1 = 3, size2 = 3;
	Unit **team1 = new Unit*[size1];
	Unit **team2 = new Unit*[size2];
	cout << "Team 1\n";
	create_team(team1);
	cout << "Team 2\n";
	create_team(team2);

	for (int i=0; ;i++)
	{
		if (size1 != 0 && size2 == 0)
		{
			cout << "Team 2 won\n";
			break;
		}
			cout << "Team 1 attack team 2\n";
		Attack(team1, team2, size2,size1);
		S(team1, team2, size2, size1);
		if (size1 == 0 && size2 != 0)
		{
			cout << "Team 1 won\n";
			break;
		}
		cout << "Team 2 attack team 1\n";
		Attack(team2, team1, size1, size2);
		S(team1, team2, size2, size1);
	}
	


	system("pause");
}