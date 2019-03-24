#include<iostream>
#include<ctime>
#include<stack>
using  namespace std;

class Ball
{
	string color;
	friend ostream &operator << (ostream &s, const Ball & b);
public:
	void Fill_color()
	{
		string colors[4] = { "red","yelow","gren","black"};
		color = colors[rand() % 4];
	
	}
};
