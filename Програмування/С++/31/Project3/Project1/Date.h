#pragma once
#include<iostream>

using namespace std;
struct date
{
	int day;
	int mouth;
	int year;
	void showData()
	{
		cout << day << "." << mouth << "." << year << endl;
	}
	void FillData(int min, int max)
	{
		day = 1 + rand() % 31;
		mouth = 1 + rand() % 12;
		year = min + (rand() % (max - min));
	}
};
struct Date_of_B
{
	int day = 0;
	int mouth;
	int year;
};