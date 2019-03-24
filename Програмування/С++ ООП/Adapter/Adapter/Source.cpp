#include<iostream>

using namespace std;

class IRule
{
public:
	virtual void MoveLeft() = 0;
	virtual void MoveUp() = 0;
	virtual void MoveDown() = 0;
	virtual void MoveRight() = 0;
};
class Joi
{
public:
	void Move(int dir)
	{

		switch (dir)
		{
		case 1:
		{
			cout << "Move up\n";
			break;
		}
		case 2:
		{
			cout << "Move down\n";
			break;
		}
		case 3:
		{
			cout << "Move left\n";
			break;
		}
		case 4:
		{
			cout << "Move right\n";
			break;
		}
		}
	}
};
class Adapter :public IRule
{
	Joi *j;
public:
	Adapter()
	{
		j = new Joi;
	}
	void MoveLeft()
	{
		j->Move(3);
	}
	void MoveUp()
	{
		j->Move(1);
	}
	void MoveDown()
	{
		j->Move(2);
	}
	void MoveRight()
	{
		j->Move(4);
	}

};
class KeyboardRule :public IRule
{
public:
	void MoveLeft()
	{
		cout << " Press A\n";
	}
	void MoveUp()
	{
		cout << "Press W\n";
	}
	void MoveDown()
	{
		cout << "Press S\n";
	}
	void MoveRight()
	{
		cout << "Press D\n";
	}
};
void Game(IRule *rule)
{
	cout << "Enter ";
	char c;
	cin >> c;
	switch(c)
	{
	case 'a': 
	{
		rule->MoveLeft();
		break; 
	}
	case 'd': 
	{
		rule->MoveRight();
		break; 
	}
	case 's': 
	{
		rule->MoveDown();
		break; 
	}
	case 'w':
	{
		rule->MoveUp();
		break; 
	}
	}
}
int main()
{
	IRule *r = new Adapter();
	Game(r);
	system("pause");
}
