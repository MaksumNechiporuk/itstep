#include<iostream>
#include<string>
#include"Wheel.h"

using namespace std;

Wheel::Wheel(string type, int price)
{
	this->type = type;
	this->price = price;
}

	
void Wheel::Add_Wheel(Wheel &b)
{
	cout << "Enter types wheel - ";
	cin >> b.type;
	cout << "Enter  price - ";
	cin >> b.price;
}
void Wheel::Show(Wheel  &wh)
{
	cout << "Type - " << wh.type << endl;
	cout << "Price - " <<wh. price << endl;
}
Wheel::Wheel()
{

}