#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;
//struct car
//{
//	char name[30];
//	char engine[50];
//	int doors;
//	bool cond;
//	double maxSpeed;
//};
//
//
//int main()
//{
//	srand(time(0));
//	car BMW750;
//	BMW750.doors =4;
//	BMW750.cond = true;
//	BMW750.maxSpeed = 267.5;
//	BMW750.name[0] = 'n';
//	system("pause");
//}


//struct drib {
//	double chuselnuk;
//	double znamenuk;
//	double rezults;
//};
//int main()
//{
//	drib a, b, c;
//	cout << "chuselnuk a ";
//	cin >> a.chuselnuk;
//	cout << "znamenuk a ";
//	cin >> a.znamenuk;
//	a.rezults = a.chuselnuk / a.znamenuk;
//	cout << "chuselnuk b ";
//	cin >> b.chuselnuk;
//	cout << "znamenuk b " ;
//	cin >> b.znamenuk;
//	b.rezults = b.chuselnuk / b.znamenuk;
//	cout << "chuselnuk c ";
//	cin >> c.chuselnuk;
//	cout << "znamenuk c ";
//	cin >> c.znamenuk;
//	c.rezults = c.chuselnuk / c.znamenuk;
//	double max;
//	if (a.rezults > b.rezults)
//		max= a.rezults;
//	else
//		max = b.rezults;
//	if (max < c.rezults)
//		max = c.rezults;
//	cout << "max=" << max << endl;
//	cout << "a=" << a.rezults << endl;
//	cout << "b=" << b.rezults << endl;
//	cout << "c=" << c.rezults << endl;
//
//
//	system("pause");
//}

//struct zavod
//{
//	char name[30];
//	people employee;
//};
//struct people
//{
//	char name[20];
//	double age;
//	char specialnist[30];
//	double money;
//};
//int main()
//{
//	zavod a, b, c;
//
//	strcpy(a.name, "zavod 1");
//	strcpy(b.name, "zavod 2");
//	strcpy(c.name, "zavod 3");
//
//	strcpy(a.employee.name,"Prudiuk Borus");
//	a.employee.age = 30;
//	strcpy(a.employee.specialnist, "locksmith");
//	a.employee.money = 4000;
//	
//	strcpy(b.employee.name, "Salo Volodumur");
//	b.employee.age = 36;
//	strcpy(b.employee.specialnist, "mechanic");
//	b.employee.money = 5000;
//	
//	strcpy(c.employee.name, "Korniuk Vasa");
//	c.employee.age = 20;
//	strcpy(c.employee.specialnist, "cleaner");
//	c.employee.money = 3000;
//	
//
//	system("pause");
//}

struct date
{
	int day;
	int year;
	int mouth;
};
struct car
{
	char name[30];
	double maxSpeed;
	date date_v;
};
struct person
{
		char name[20];
		date birth_day;
		car machine;
};



int main()
{
	person p1, p2, p3;
	strcpy_s(p1.name,"Korniuk Vasa");
	p1.birth_day.day = 11;
	p1.birth_day.year=1995;
	p1.birth_day.mouth=5;

	strcpy_s(p2.name, "Prudiuk Vasul");
	p2.birth_day.day = 6;
	p2.birth_day.year = 1998;
	p2.birth_day.mouth = 9;

	strcpy_s(p3.name, "Kovalchuk Maruna");
	p3.birth_day.day = 28;
	p3.birth_day.year = 1993;
	p3.birth_day.mouth = 8;

	strcpy_s(p1.machine.name, "AUDI");
	p1.machine.maxSpeed = 150;
	p1.machine.date_v.day = 11;
	p1.machine.date_v.year = 2008;
	p1.machine.date_v.mouth = 8;

	strcpy_s(p1.machine.name, "NISSAN");
	p1.machine.maxSpeed = 200;
	p1.machine.date_v.day = 20;
	p1.machine.date_v.year = 2003;
	p1.machine.date_v.mouth = 4;

	strcpy_s(p1.machine.name, "RENAULT");
	p1.machine.maxSpeed = 180;
	p1.machine.date_v.day = 23;
	p1.machine.date_v.year = 2010;
	p1.machine.date_v.mouth = 12;
	cout << p1.name << " - " << p1.machine.name<< endl;
	cout << p2.name << " - " << p2.machine.name << endl;
	cout << p3.name << " - " << p3.machine.name << endl;
	system("pause");
}

