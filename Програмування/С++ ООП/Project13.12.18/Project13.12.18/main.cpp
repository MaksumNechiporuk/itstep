#include<iostream>
#include"Person.h"
#include"BadStudent.h"
#include"Developer.h"
#include"Employee.h"
#include"ExcelentStudent.h"
#include"Student.h"
#include"Team_lead.h"
using namespace std;
class Захар
{
public:
	void Show()
	{
		cout << "Zahar\n";
	}
};
int main()
{
	//BadStudent st;

	Захар з;
	з.Show();
	Student *p = new BadStudent();
	//p->SetData();
	((BadStudent*)p)->Show();
	system("pause");
}