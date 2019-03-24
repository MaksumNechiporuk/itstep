#include<iostream>
#include<ctime>

using namespace std;



class StackMy
{
	enum { EMPTY = 0, MAXSIZE = 5 };
	char stack[MAXSIZE];
	int size;

public:
	StackMy() { size = EMPTY; }
	void Push(char a)
	{
		if (!isFull())
		{
			size++;
			stack[size - 1] = a;
		}
		else cout << "STACK IS FULL\n";
	}

	char Pop()
	{
		if (!isEmpty())
		{
			size--;
			return stack[size];
		}
		else {
			cout << "\nSTACK IS EMPTY\n";
			return 0;
		}
	}

	bool isEmpty()
	{
		return (size == EMPTY);
	}

	bool isFull()
	{
		return (size == MAXSIZE);
	}

	void Clear()
	{
		size = EMPTY;
	}

	void Show()
	{
		cout << "\n-----------------------------\n";
		for (int i = 0; i < size; i++)
		{
			cout << stack[i] << " ";
		}
		cout << endl;
	}
};


bool func(char a[],StackMy &s)
{
	char c;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == '[' || a[i] == '{' || a[i] == '(')
		{
			s.Push(a[i]);
		}
		else if (a[i] == ']' )
		{
			c=s.Pop();
			if (c == '[')
				continue;
			else
			{
				cout << "Error\n";
				return 0;
			}
		}
		else if (a[i] == '}')
		{
			c = s.Pop();
			if (c == '{')
				continue;
			else
			{
				cout << "Error\n";
				return 0;
			}
		}
		else if (a[i] == ')')
		{
			c = s.Pop();
			if (c == '(')
				continue;
			else
			{
				cout << "Error\n";
				return 0;
			}
		}
	}
	if (s.isEmpty())
	{
		cout << "OK\n";
	}

}
int main()
{
	char a[256];
	cin.getline(a, 100);
	StackMy s;
	func(a, s);
	system("pause");
}