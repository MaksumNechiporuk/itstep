#include<iostream>
#include<string>
#include<Windows.h>
#include<map>
#include<set>
#include<vector>


using namespace std;

void SetCol(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}


class IPhoneBook
{
public:
	virtual void Show() = 0;

};

class Simple : public IPhoneBook
{
	map<string, string> simpleBook;
public:

	void Show()
	{
		int i = 1;
		for (auto a : simpleBook)
		{
			cout <<i<<"."<< a.first << "  " << a.second << endl;
			i++;
		}
	}
	
	void AddNewElement(string name,string number)
	{
		simpleBook.insert(make_pair(name, number));
	}
};
class Cool : public IPhoneBook
{
	vector<string> coolBook;
public:

	void Show()
	{

		int i = 0;
		int c = 1;
		for (auto a : coolBook)
		{
			
			if (i > 3)
			{
				i = 0;
				cout << endl;
			}
			cout<<c<<"."<<a<<"  ";
			i++;
			c++;
		}
		cout << endl;
	}
	void AddNewElement(string name, string number,string add_ifa,string message)
	{
		coolBook.push_back(name);
		coolBook.push_back(number);
		coolBook.push_back(message);
		coolBook.push_back(add_ifa);
	}
};

class Color
{
	IPhoneBook *pb = nullptr;
public:
	Color(IPhoneBook *_pb)
	{
		pb = _pb;
	}
	void Show()
	{
		
		SetCol(10);
		pb->Show();
		SetCol(7);
	}
};
class Simple_
{
	IPhoneBook *pb = nullptr;
public:
	Simple_(IPhoneBook *_pb)
	{
		pb = _pb;
	}
	void Show()
	{
		
		pb->Show();
	}
};
class Cool_
{
	IPhoneBook *pb = nullptr;
public:
	Cool_(IPhoneBook *_pb)
	{
		pb = _pb;
	}
	void Show()
	{
		for (size_t i = 0; i < 50; i++)
		{
			SetCol(13);
			cout << "*";
		}
		cout << endl;
		SetCol(10);

		pb->Show();
		for (size_t i = 0; i < 50; i++)
		{
			SetCol(13);
			cout << "*";
		}
		cout << endl;
		SetCol(7);

	}
};
void menu()
{
	int c;
	cout << "1.Simple Book\n2.Cool Book\n";
	cin >> c;
	switch (c)
	{
	case 1:
	{
		Simple *b = new Simple();
		b->AddNewElement("Pupkin", "253674895");
		b->AddNewElement("Petrov", "297612875");
		b->AddNewElement("Ivanov", "342462595");
		b->AddNewElement("Sergeev", "226670834");
		cout << "1.Cool\n2.Simple\n3.Color\n";
		cin >> c;
		switch (c)
		{
		case 1:
		{
			Cool_ *c = new Cool_(b);
			c->Show();
			break;
		}
		case 2:
		{
			Simple_ *c = new Simple_(b);
			c->Show();
			break;
		}
		case 3:
		{
			Color *c = new Color(b);
			c->Show();
			break;
		}
		}

		break;
	}
	case 2:
	{
		Cool *b = new Cool();
		b->AddNewElement("Pupkin", "253674895", "Birthday:11.12.89", "Quantity of message:12");
		b->AddNewElement("Petrov", "297612875", "Birthday:6.7.92", "Quantity of message:30");
		b->AddNewElement("Ivanov", "342462595", "Birthday:1.3.80", "Quantity of message:45");
		b->AddNewElement("Sergeev", "226670834", "Birthday:30.10.95", "Quantity of message:26");
		cout << "1.Cool\n2.Simple\n3.Color\n";
		cin >> c;
		switch (c)
		{
		case 1:
		{
			Cool_ *c = new Cool_(b);
			c->Show();
			break;
		}
		case 2:
		{
			Simple_ *c = new Simple_(b);
			c->Show();
			break;
		}
		case 3:
		{
			Color *c = new Color(b);
			c->Show();
			break;
		}
		}
		break;
	}
	}

}
int main()
{
	menu();

	system("pause");
}