#include<iostream>
#include<ctime>
#include<iomanip>
#include<cstdlib>
using namespace std;

//struct employee
//{
//	struct data
//	{
//		int day;
//		int mouth;
//		int year;
//	};
//	char name[15];
//	double salary;
//	data Data;
// };
//
//int main()
//{
//	srand(time(0));
//	employee person[10];
//	char name[10];
//	for (int i = 0; i < 10; i++)
//	{
//		_itoa_s(i+1,name,10);
//		strcpy_s(person[i].name,name);
//		person[i].salary = 1500 + rand() % (20000-1500);
//		person[i].Data.year = 1960+ rand() % (2000-1960);
//		person[i].Data.day = 1 + rand() % 31;
//		person[i].Data.mouth = 1 + rand() % 12;
//		cout <<"Name: "<< person[i].name << endl <<"Salary: "<<  person[i].salary << endl <<"Date:"<< person[i].Data.day << "." << person[i].Data.mouth << "."<<person[i].Data.year << endl << endl;
//	}
//	int max = person[0].salary,j=0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (person[i].salary > max)
//		{
//			max= person[i].salary;
//			j = i;
//	    }
//	}
//	cout << "Name: " << "The biggest salary in:"<<endl<< person[j].name << endl << "Salary: " << person[j].salary << endl << "Date:" << person[j].Data.day << "." << person[j].Data.mouth << "." << person[j].Data.year << endl << endl;
//	
//
//	system("pause");
//}
//struct drib
//{
//	double c;
//	double z;
//};
//void func(drib &b)
//{
//	b.c = 1;
//	b.z = 0;//посилання
//	//b->c = 1;
//	//b->z = 0;указатель
//	//cout << b.c / b.z << endl;
//}
//int main()
//{
//	srand(time(0));
//	drib a;
//	a.c = 5;
//	a.z = 10;
//	func(a);
//	cout<<a.c/a.z;
//	system("pause");
//}
//struct drib
//{
//	double ch;
//	double zn;
//};
//drib func(drib &a,drib &c,drib &b)
//{
//	a.ch *= b.zn;
//	b.ch *= a.zn;
//	a.zn *= b.zn;
//	b.zn *= a.zn;
//	c.ch = a.ch + b.ch;
//	c.zn = a.zn;
//	return c;
//}
//int main()
//{
//	srand(time(0));
//	drib a;
//	drib c;
//	drib b;
//	a.ch = 10;
//	a.zn = 15;
//	b.ch = 2;
//	b.zn = 5;
//	cout << a.ch << "/" << a.zn << endl;
//	cout << b.ch << "/" << b.zn << endl;
//	func(a,c,b);
//
//	cout << c.ch << "/" << c.zn << endl;
//	system("pause");
//}
struct clas
{
	struct student
	{
		struct data
		{
			int day;
			int mouth;
			int year;
		};
		char surname[15];
		char name[15];
		int rating[10];
		data Data;
		bool p;
		int rating_s;
	};

};
int main()
{
	srand(time(0));

	system("pause");
}