#pragma once
#include"Student.h"

class ExcelentStudent : public Student
{
	 int Scholarship=1500;
public:
	 void SetData();
	 void Show();
	 int Add_marks(int marks);

}; 
