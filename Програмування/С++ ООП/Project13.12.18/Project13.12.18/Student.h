#pragma once
#include"Person.h"

class Student : public Person
{
	
protected:
	int size = 5;
	int *marks = new int[5];

};


