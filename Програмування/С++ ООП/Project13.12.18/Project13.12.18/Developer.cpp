#include"Developer.h"

void Developer :: Show()
{
	cout << "Developer\n";
	Person::Show();
	cout << "Salary:" << salary << endl;
}