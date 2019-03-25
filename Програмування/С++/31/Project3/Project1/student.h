#pragma once
#include"Date.h"
using namespace std;
struct student
{
	string name_s;
	string surname_s;
	date Data;
	int marks[10];
	double ser;
	bool privilege;
	bool vidminnuk;
	unsigned int days()
	{
		return Data.day + (Data.mouth * 30) + (Data.year * 365);
	}
	double average()
	{
		double sum = 0;
		for (int i = 0; i < 10; i++)
		{
			sum += marks[i];
		}
		return (sum / 10);
	}
	void fillmarks() {
		for (int i = 0; i < 10; i++)
		{
			marks[i] = 4 + (rand() % (12 - 4));
		}
	}
	void fillmarksVidmin()
	{
		for (int i = 0; i < 10; i++)
		{
			marks[i] = 10 + (rand() % (12 - 10));
		}
		vidminnuk = true;
	}
	void fillStudent()
	{

		string sn[6] = { "����������", "�������", "��������", "��������", "���������", "�����" };
		string n[6] = { "������", "���������", "������", "�����", "���", "���������" };
		int c, b;

		c = rand() % 5;
		b = rand() % 5;
		name_s = n[b];
		surname_s = sn[c];
		Data.FillData(2002, 2013);
		privilege = rand() % 2;
		int a;

		a = rand() % 10;
		if (a == 0) {

			fillmarksVidmin();
		}
		else
			fillmarks();

		ser = average();
	}

	void showStudent()
	{
		cout << "���� " << name_s << "  " << surname_s << "  " << endl;
		Data.showData();
		cout << "��i���:";

		for (int i = 0; i < 10; i++)
		{
			cout << marks[i] << setw(3);
		}
		cout << endl << "������� ��� - " << ser;
		cout << endl;
		cout << "�i����:";
		if (privilege == true)
			cout << "�" << endl;
		else
			cout << "����" << endl;


	}
};
struct BestStudent
{
	double average = 0;
	int class_id;
	int student_id;
};