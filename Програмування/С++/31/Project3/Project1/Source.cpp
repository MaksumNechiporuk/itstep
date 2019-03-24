#include<iostream>
#include<ctime>
#include<string>
#include<iomanip>
#include<cstdlib>
#include"clas.h"
#include"function.h"

using namespace std;





int main()
{
	srand(time(0));
	setlocale(LC_ALL, "ukr");
	clas cl[3];
	Date_of_B a;
	BestStudent best_students[3];
	char arr[10];
	for (int j = 0; j < 3; j++)
	{
		_itoa_s(j + 1, arr, 10);
		cl[j].name_c = arr;
		cout << cl[j].name_c << endl;
		for (int i = 0; i < 5; i++)
		{
			cl[j].s[i].fillStudent();
			cout << i + 1 << ")";	cl[j].s[i].showStudent();
		}
		cout << "Керiвник:";
		cl[j].k.fillKera();
		cl[j].k.showKera();
		cout << endl;
	}	int c = 0;
	cout << endl;		cout << endl;
	for(;c!=10;){
	cout << "1.Топ 3 студента\n";
	cout << "2.Вивести усіх відмінників \n";
	cout << "3.Вивести  керівника, в класі якого найкраща успішність \n";
	cout << "4.Вивести назву класа з найгіршою успішністю \n";
	cout << "5.Вивести всіх братів і сестер \n";
	cout << "6.Вивести дітей, які народились в один день \n";
	cout << "7.Вивести найстаршого учня \n";
	cout << "8.Скільки учнів мають середній бал більше 8.5? \n";
	cout << "9.В якому класі найбільше пільговиків?\n";
	cout << "10.Вихід \n";
	 c;
	cin >> c;
	switch (c)
	{
	case 1:
	{
		Top3Stud(best_students, cl);
		break;
	}
	case 2:
	{
		showVidmin(cl);
		break;
	}
	case 3:
	{top_class(cl);
	break;
	}
	case 4:
	{
		bad_class(cl);
		break;
	}
	case 5:
	{family(cl);
	break;
	}
	case 6:
	{
		date_s(a, cl);
		break;
	}
	case 7:
	{	older_student(cl, a);
	break;
	}
	case 8:
	{func(cl);
	break;
	}
	case 9:
	{
		counterP(cl);

		break;
	}
	case 10:
	{
		break;
	}
	}
}
	system("pause");
}