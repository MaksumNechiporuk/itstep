#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;
int sizebook = 10,sizesource=3;

struct Date
{
	int day;
	int mouth;
	int year;
};
struct book
{
	
	string name;
	string author;
	Date d;
	int number;
	string genre;
};
struct client
{
	string name;
	string surname;
	Date DoB;
	book b;
};
struct  source
{
	string source;
	book *b= new book [sizebook];

};
struct library
{
	source *s=new source [sizesource];
};

int main()
{
	srand(time(0));

	system("pause");
}