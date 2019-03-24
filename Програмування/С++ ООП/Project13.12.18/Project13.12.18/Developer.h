#pragma once
#pragma once
#include"Employee.h"

class Developer : public Employee
{

	int salary = 5000;
public:
	void Show();
	void IncreseSalary(Developer &dev);

};
