#include"Team_lead.h"

void Team_lead::Show()
{
	cout << "Team_lead\n";
	Person::Show();
	cout << "Salary:" << salary << endl;
}