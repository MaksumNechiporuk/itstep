#include <windows.h>
#include <iostream>
#include<cstring>
using namespace std;
class User;

class Loger
{

public:
	char history[256];
	
	
	void ShowHistory()
	{
		cout << history<<endl;
	}
	void ClearHistory()
	{
		for(int i=0;i<strlen(history);i++)
		history[i]=' ';
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
		cout << "Enter users name ";
		cin.getline(name, 30);
		SYSTEMTIME st;
		GetSystemTime(&st);
		date = st.wDay + '.' + st.wMonth + '.' + st.wYear;
	}
	void LogOn(Loger &s)
	{
	
		strcat_s(s.history, name);
		date = st.wDay + '.' + st.wMonth + '.' + st.wYear;
strcat_s(s.history, "\n");
		cout <<s.history << endl;
	}
	
	
};
int main()

{
	User a;
	Loger l;
	a.LogOn(l);
	//l.ShowHistory();

	system("pause");
}