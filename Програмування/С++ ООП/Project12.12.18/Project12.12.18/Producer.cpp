#include<iostream>
#include<string>
#include"Producer.h"


Producer::Producer(string name, int year)
{
	this->name = name;
	this->year = year;
}


void Producer::Add_Producer(Producer &b)
{
	cout << "Enter  producers name - ";
	cin >> b.name;
	cout << "Enter  year - ";
	cin >> b.year;
}
void Producer::Show( )
{
	cout << "Name - " << name << endl;
	cout << "Year - " << year << endl;
}
Producer::Producer()
{

}
