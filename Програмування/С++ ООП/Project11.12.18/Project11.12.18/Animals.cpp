#include<iostream>
#include<string>
using namespace std;

class Animals
{
	string name;
	string color;
	string vote;
public:
	void SetData(string name,string color, string vote)
	{
		 this->name=name;
		 this->color=color;
		 this->vote=vote;
	}
	void GetVote()
	{
		cout << vote << endl;
	}
	void Show()
	{
		cout << name << "  " << color << "  " << vote << endl;
	}
};
class dog : public Animals
{
public:
	void tastes()
	{
		cout << "Tastes\n";
	}
};
class Lion : public Animals
{
public:
	void ToEat()
	{
		cout << "Eat\n";
	}
};
class Cat : public Animals
{
public:
	void Scratch()
	{
		cout << "Scratch\n";
	}
};
int main()
{
	dog d;
	d.SetData("Ruzik", "Black", "Gav Gav");
	d.Show();
	d.tastes();
	cout << endl;
	Cat c;
	c.SetData("Myrzik", "Gray", "May May");
	c.Show();
	c.Scratch();
	cout << endl;
	Lion l;
	l.SetData("Monster", "Black", "Roar");
	l.Show();
	l.ToEat();
	
	system("pause");
}