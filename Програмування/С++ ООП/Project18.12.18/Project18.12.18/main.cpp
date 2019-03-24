#include<iostream>


using namespace std;

class weapon
{
protected:
	void ShootGun()
	{
		cout << "Gun\n";
	}
	void ShootAuyomat()
	{
		cout << "Auyomat\n";
	}
	void PushKnife()
	{
		cout << "Knife\n";
	}
	void ShootArbalest()
	{
		cout << "Arbalest\n";
	}
	void PushSword()
	{
		cout << "Sword\n";
	}
public:
	virtual void Attack(int &money) = 0;

};
class Gun : public weapon
{
	int price = 700;
public:
	void Attack(int &money)
	{
		cout << "price=" << price << endl;
		if (money > price)
		{
			ShootGun();
			money -= price;
		}
		else
		{
			cout << "Not enough money\n";
		}
	}

};

class Auyomat : public weapon
{
	int price = 3000;
public:
	void Attack(int &money)
	{
		cout << "price=" << price << endl;
		if (money > price)
		{
			ShootAuyomat();
			money -= price;
		}
		else
		{
			cout << "Not enough money\n";
		}
	}
}; 
class Knife : public weapon
{
	int price = 300;
public:
	
	void Attack(int &money)
	{
		cout << "price=" << price << endl;
		if (money > price)
		{
			PushKnife();
			money -= price;
		}
		else
		{
			cout << "Not enough money\n";
		}
	}
};
class Arbalest : public weapon
{
	int price = 500;
public:
	
	void Attack(int &money)
	{
		cout << "price=" << price << endl;
		if (money > price)
		{
			ShootArbalest();
			money -= price;
		}
		else
		{
			cout << "Not enough money\n";
		}
	}
}; 
class Sword : public weapon
{
	int price = 500;
public:
	
	void Attack(int &money)
	{
		cout << "price=" << price << endl;
		if (money > price)
		{

			PushSword();
			money -= price;
		}
		else
		{
			cout << "Not enough money\n";
		}
	}
};
class gamer
{
	int money = 5000;
	int c = 0;
	int b;
	weapon **a = new weapon*[5];
public:
	void play()
	{
		for (; b != 6;)
		{
			cout << "1.Gun\n";
			cout << "2.Auyomat\n";
			cout << "3.Knife\n";
			cout << "4.Arbalest\n";
			cout << "5.Sword\n";
			cout << "6.Exit\n";
			cin >> b;
			switch (b)
			{
			case 1:
			{
				c = 0;
				a[c] = new Gun();
				a[c]->Attack(money);
				cout << "money=" << money << endl;
				system("pause");
				system("cls");
				break;
			}
			case 2:
			{
				c = 1;
				a[c] = new Auyomat();
				a[c]->Attack(money);
				cout << "money=" << money << endl;
				system("pause");
				system("cls");
				break;
			}
			case 3:
			{
				c = 2;
				a[c] = new Knife();
				a[c]->Attack(money);
				cout << "money=" << money << endl;
				system("pause");
				system("cls");
				break;
			}
			case 4:
			{
				c = 3;
				a[c] = new Arbalest();
				a[c]->Attack(money);
				cout << "money=" << money << endl;
				system("pause");
				system("cls");
				break;
			}
			case 5:
			{
				c = 4;
				a[c] = new Sword();
				a[c]->Attack(money);
				cout << "money=" << money << endl;
				system("pause");
				system("cls");
				break;
			}
			}
		}
	}
};
int main()
{
	gamer pl1;
	pl1.play();
	system("pause");
}