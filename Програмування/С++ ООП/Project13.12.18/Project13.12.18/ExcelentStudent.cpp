#include"ExcelentStudent.h"

void ExcelentStudent::SetData()
{

	Person::SetData("Excelent", "Student");
	for (int i = 0; i < size; i++)
	{
		marks[i] = 4 + rand() % (5 - 4);

	}
}
void ExcelentStudent::Show()
{
	cout << "Excelent student\n";
	Person::Show();
	for (int i = 0; i < size; i++)
		cout << "Marks:" << marks[i] << "  " << endl;
	cout << "Scholarship:" << Scholarship << endl;
}