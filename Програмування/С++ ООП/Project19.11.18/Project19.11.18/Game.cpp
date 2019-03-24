#include<iostream>
#include<string>

using namespace std;

class My_game
{
	static string  name;
	static int money;
	static int life;
public:
	 void show()
	{
		cout << name << "  " << money << "  " << life << endl;
	}
};
string My_game::name = "Mario";
int My_game::money = 100;
int My_game::life = 3;

int main()
{
	My_game m;
	m.show();
	system("pause");
}
