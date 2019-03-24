#include"Person.h"

void Person::Show()
{
	cout << "name:" << name << endl << "surname:" << surname << endl;
}
void Person::SetData(string name,string surname)
{

	cout << "Enter name:";
	cin >> name;
	cout << "Enter surname:";
	cin >> surname;
	this->name = name;
	this->surname = surname;
}
