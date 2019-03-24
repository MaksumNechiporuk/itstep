#include<iostream>
#include<string>
#include"Car.h"

void Car::Create_car()
{
	cout << "Enter name - ";
	cin>>this->name;
	cout << "Enter color - ";
	cin>>this->color;
	int c=0;
	for (int i = 0; i < 4; i++)
	{
		if (c == 1)
		{
			this->wh[0] = wh[i];
		}
		
		if (c == 0) {
			wh[i].Add_Wheel(wh[i]);
			cout << "Wheels are the same?\n1.Yes\n2.No\n";
			cin >> c;
			this->wh[i] = wh[i];
		}
	
		
	}
	pr.Add_Producer(pr);
	this->pr = pr;
	system("cls");
}
void Car::Show()
{
	cout << "Name - " << name << endl;
	cout << "Color - " << color << endl;
	cout << "------Wheel-------\n";
	for(int i=0;i<4;i++)
	wh[i].Show(wh[i]);
	cout << "\n------Producer-------\n";
	pr.Show();
}
Car::~Car()
{

}
Car::Car()
{
	Create_car();
}