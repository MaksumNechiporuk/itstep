#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>

using namespace std;

int sizebook = 10, sizesource = 3, sizeclient = 10,sizeauthor=10;

struct Date
{
	int day;
	int mouth;
	int year;
	void Fill_data(int min,int max)
	{
		day = 1 + rand() % 30;
		mouth = 1 + rand() % 11;
		year = min + rand() % (max - min);
	}
	void Show_dob()
	{
		cout << day << ":" << mouth << ":" << year << endl;
	}


};
struct book
{
	string name;
	Date d;
	int number;
	string genre;//enum  
	bool status;
	void Fill_book()
	{
		string names[10]= { " На Західному фронті без змін","Улісс","Оповідання, романи, листи, щоденники","Гамлет","Портрет Доріана Грея","Кохання під час холери","Українські повісті"," Пригоди бравого вояка Швейка","Вигадані історії","1984" };
		name = names[rand() % 10];
		
	}

};
struct author
{
	string name;
	string surname;
	int size_book = 0;
	book *mybook = new book[size_book];
	void Fill_author()
	{
		string names[10] = { "Ерих","Джеймс","Франц","Вільям","Оскар","Ґабріель","Микола","Ярослав","Хорхе","Джордж" };
		string surnames[10] = { "Орвелл","Луїс","Гашек","Гоголь","Ґарсія","Вайлд","Шекспір","Кафка","Джойс","Марія" };
		name = names[rand() % 10];
		surname = surnames[rand() % 10];
		size_book++;

	}
	void Show_author()
	{
		cout<< name << setw(4) <<" "<< surname << endl;
	}

};
struct client
{
	string name;
	string surname;
	Date DoB;
	int numberbook = 0;
	book *b = new book[numberbook];
};
struct  source
{
	string sources;
	book *b = new book[sizebook];

};
struct library
{
	source *s = new source[sizesource];
	client *cl = new client[sizeclient];
	author *a = new  author[sizeauthor];

};

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "ukr");
	library test;
	for (int i = 0; i < sizeauthor; i++)
	{
		test.a[i].Fill_author();
		test.a[i].Show_author();
	}

	system("pause");
}