#include<iostream>
#include<ctime>
#include<string>
#include<iomanip>
#include<cstdlib>


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
	void FillData(int min,int max)
	{
		 day = 1 + rand()%31;
		 mouth=1+rand()%12;
		 year=min+(rand() %(max-min));
	}
};
struct Date_of_B
{
	int day=0;
	int mouth;
	int year;
};
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

		string sn[6] = { "Бондаренко", "Мельник", "Шевченко", "Ткаченко", "Коваленко", "Бойко" };
		string n[6] = { "Олексій", "Олександр", "Максим", "Борис", "Юрій", "Владислав" };
		int c, b;
		c = rand() % 5;
		b = rand() % 5;
		name_k = n[b];
		surname_k = sn[c];
		Data.FillData(1960, 1996);
	}
	
};
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

		string sn[6] = { "Бондаренко", "Мельник", "Шевченко", "Ткаченко", "Коваленко", "Бойко" };
		string n[6] = { "Олексій", "Олександр", "Максим", "Борис", "Юрій", "Владислав"};
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
		cout << "Клас " << name_s << "  " << surname_s << "  " << endl;
		Data.showData();
		cout << "Оцiнки:";

		for (int i = 0; i < 10; i++)
		{
			cout << marks[i] << setw(3);
		}
		cout <<endl<<"Середній бал - " << ser;
		cout << endl;
		cout << "Пiльги:";
		if (privilege == true)
			cout << "є" << endl;
		else 
			cout << "нема" << endl;
	

	}
};
struct clas
{
	string name_c;
	student s[5];
	kera k;
	int counterPrivileg=0;
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
void counterP(clas cl[])
{
	int max =0,p;

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
struct BestStudent
{
	double average=0;
	int class_id;
	int student_id;
};
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
	cout << "Клас "  << cl[p].name_c << endl;;
}
void date_s(Date_of_B a, clas cl[])//Студенти які родилися в один день
{
	bool c=false;
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
				stud[0].average= cl[i].s[j].average();
				stud[0].class_id = i;
				stud[0].student_id = j;
			}
			 else if (stud[1].average <cl[i].s[j].average())
			{
				
				stud[2] = stud[1];
				stud[1].average = cl[i].s[j].average();
				stud[1].class_id = i;
				stud[1].student_id = j;
			}
			 else  if (stud[2].average <cl[i].s[j].average())
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
	int c=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if(cl[i].s[j].average() >=8.5)
			{
				c++;
			}
		}
	}
	cout << c << endl;
}
void older_student(clas cl[],Date_of_B a)//Найстраший студент
{
	unsigned int max;
	int p1=0,p2=0;
	
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