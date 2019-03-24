#pragma once
#include"Employee.h"

class Team_lead : public Employee
{
	int salary = 10000;
public:
		void Show();
		void IncreseSalary(Team_lead &tl);

};
