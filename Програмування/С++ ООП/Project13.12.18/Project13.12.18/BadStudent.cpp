#include"BadStudent.h"

void BadStudent :: SetData()
{
	Person::SetData("Bad","Student");
	for (int i = 0; i < size; i++)
	{
		marks[i] = 2 + rand() % (4 - 2);
	
	}
}
void BadStudent::Show()
{
	cout << "Bad student\n";
	Person::Show();
	for(int i=0;i<size;i++)
	cout << "Marks:" << marks[i] << "  " << endl;
	cout << "Scholarship:" << Scholarship << endl;
}