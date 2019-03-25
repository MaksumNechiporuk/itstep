#pragma once

#include"clas.h"
#include<iostream>
#include"Date.h"


using namespace std;

void counterP(clas cl[])
{
	int max = 0, p;

	for (int i = 0; i < 3; i++)
	{
		if (max < cl[i].counterPr())
		{
			max = cl[i].counterPr();
			p = i;
		}
	}
	cout << "Клас " << cl[p].name_c << endl;
}

void showVidmin(clas cl[])
{
	bool c = false;
	cout << "Відмінники\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (cl[i].s[j].vidminnuk == true)
			{
				cl[i].s[j].showStudent();
				c = true;
			}
		}
	}
	if (c == false)
	{
		cout << "Таких студентів нема\n";
	}
}
void top_class(clas cl[])//Топ клас
{
	double max = cl[0].Progress();
	int p = 0;
	for (int i = 1; i < 3; i++)
	{

		if (max < cl[i].Progress())
		{
			max = cl[i].Progress();
			p = i;
		}
	}
	cl[p].k.showKera();
}
void bad_class(clas cl[])//Найгірший клас
{
	double min = cl[0].Progress();
	int p = 0;
	for (int i = 1; i < 3; i++)
	{

		if (min > cl[i].Progress())
		{
			min = cl[i].Progress();
			p = i;
		}
	}
	cout << "Клас " << cl[p].name_c << endl;;
}
void date_s(Date_of_B a, clas cl[])//Студенти які родилися в один день
{
	bool c = false;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			a.day = cl[i].s[j].Data.day;
			a.mouth = cl[i].s[j].Data.mouth;
			a.year = cl[i].s[j].Data.year;

			for (int k = 0; k < 3; k++)
			{
				for (int l = 0; l < 5; l++)
				{
					if (k == i && l == j)
					{
						continue;
					}
					else if (a.day == cl[k].s[l].Data.day  && a.mouth == cl[k].s[l].Data.mouth && a.year == cl[k].s[l].Data.year)
					{
						cl[i].s[j].showStudent();
						cl[k].s[l].showStudent();
						c = true;
					}


				}
			}
		}
	}
	if (c == false)
	{
		cout << "Таких студентів немає\n";
	}
}
void Top3Stud(BestStudent stud[], clas cl[])//Топ 3 студента
{
	cout << "Топ 3" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (stud[0].average < cl[i].s[j].average())
			{

				stud[2] = stud[1];
				stud[1] = stud[0];
				stud[0].average = cl[i].s[j].average();
				stud[0].class_id = i;
				stud[0].student_id = j;
			}
			else if (stud[1].average < cl[i].s[j].average())
			{

				stud[2] = stud[1];
				stud[1].average = cl[i].s[j].average();
				stud[1].class_id = i;
				stud[1].student_id = j;
			}
			else  if (stud[2].average < cl[i].s[j].average())
			{
				stud[2].average = cl[i].s[j].average();
				stud[2].class_id = i;
				stud[2].student_id = j;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << cl[stud[i].class_id].name_c << endl;
		cl[stud[i].class_id].s[stud[i].student_id].showStudent();
	}
}
void family(clas cl[])//Брати сестри
{
	bool c = false;
	string a[6] = { "Бондаренко", "Мельник", "Шевченко", "Ткаченко", "Коваленко", "Бойко" };;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 5; k++)
			{

				if (a[i] == cl[j].s[k].surname_s)
				{
					cl[j].s[k].showStudent();
					c = true;
				}
			}
		}
	}
	if (c == false)
	{
		cout << "Таких студентів немає\n";
	}
}
void func(clas cl[]) //Середній бал більше 8.5
{
	int c = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (cl[i].s[j].average() >= 8.5)
			{
				c++;
			}
		}
	}
	cout << c << endl;
}
void older_student(clas cl[], Date_of_B a)//Найстраший студент
{
	unsigned int max;
	int p1 = 0, p2 = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			a.day = cl[i].s[j].Data.day;
			a.mouth = cl[i].s[j].Data.mouth;
			a.year = cl[i].s[j].Data.year;
			max = cl[i].s[j].days();
			for (int k = 0; k < 3; k++)
			{
				for (int l = 0; l < 5; l++)
				{
					if (max > cl[k].s[l].days())
					{
						max = cl[k].s[l].days();
						p1 = k, p2 = l;
					}
				}
			}
		}
	}
	cout << endl;
	cl[p1].s[p2].showStudent();
}