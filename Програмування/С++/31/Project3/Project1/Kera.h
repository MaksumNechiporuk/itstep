#pragma once
#include"Date.h"

struct kera
{
	string name_k;
	string surname_k;
	date Data;
	void showKera()
	{
		cout << name_k << "  " << surname_k << "  ";
		Data.showData();
	}
	void fillKera()
	{

		string sn[6] = { "����������", "�������", "��������", "��������", "���������", "�����" };
		string n[6] = { "������", "���������", "������", "�����", "���", "���������" };
		int c, b;
		c = rand() % 5;
		b = rand() % 5;
		name_k = n[b];
		surname_k = sn[c];
		Data.FillData(1960, 1996);
	}

};