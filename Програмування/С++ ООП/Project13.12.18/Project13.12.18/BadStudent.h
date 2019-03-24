#pragma once
#include"Student.h"

class BadStudent : public Student
{
	int Scholarship = 980;
public:
	void SetData();
	void Show();
	void Add_marks(BadStudent &sb);
};