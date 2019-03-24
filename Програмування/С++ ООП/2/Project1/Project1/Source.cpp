#include <windows.h>
#include <iostream>
#include<string>
#include<ctime>
using namespace std;
class User;

class Loger
{

public:
	string history;
	void ShowHistory()
	{
		cout << history; 
	}
	void ClearHistory()
	{
		cout << "Clear\n";
			history = '\0';
	}
	friend User;
};

class User
{

public:
	char name[30];
	string date;
	User()
	{
	}
	~User()
	{
	}
	void FillName()
	{
		cout << "Enter users name ";
		cin.getline(name, 30);
	}
	void LogOn(Loger &s)
	{
		
		time_t seconds = time(NULL);
		tm* timeinfo = localtime(&seconds);
		date=asctime(timeinfo);
		s.history += name;
		s.history += ' ';
		s.history += date;
			s.history += ' ';
			s.history += '\n';
	}
};
int main()
{
	User a;
	Loger l;
	for (int i = 0; i < 3; i++)
	{
		a.FillName();
		a.LogOn(l);
		l.ShowHistory();
	
	}
	l.ClearHistory();
	l.ShowHistory();
	system("pause");
}

