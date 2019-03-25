#pragma once
#include"student.h"
#include"Kera.h"

struct clas
{
	string name_c;
	student s[5];
	kera k;
	int counterPrivileg = 0;
	double Progress()
	{
		double sum = 0;
		for (int i = 0; i < 5; i++)
		{

			sum += s[i].ser;

		}
		return sum / 5;
	}
	int counterPr()
	{
		int c = 0;
		for (int i = 0; i < 5; i++)
		{
			if (s[i].privilege == true)
			{
				c++;
			}
		}
		return c;

	}

};