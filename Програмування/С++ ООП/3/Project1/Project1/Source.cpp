#include<iostream>
#include<ctime>
#include<Windows.h>
#include<string>
#include <sstream>


using namespace std;

class Document
{
public:
	string name;
	int size;
	int prior;
	Document()
	{
		static int n = 1;
		ostringstream ss;
		ss << n;
		name = "Document_";
		name += ss.str();
		n++;
		size = 100 + rand() % (1000 - 100);
		prior = 1 + rand() % (10 - 1);
	}

	void show()
	{
		cout << name << " - " << size <<"  prior - "<<prior<< endl;
	}
};
class Spooler
{
	int MAXSIZE;
	string *queue;
	int*prior;
	int size;

public:
	Document doc;

	void Fill( int MAXSIZE = 10)
	{

		size = 0;
		this->MAXSIZE = MAXSIZE;
		queue = new string[size];
		prior = new int[size];
	}
	

	bool dequeue(string & val, int &p)
	{
		if (!isEmpty())
		{
			int indMax = 0;
			int maxPrior = prior[indMax];
			for (int i = 0; i < size; i++)
			{
				if (prior[i]>maxPrior)
				{
					maxPrior = prior[i];
					indMax = i;
				}
			}

			
			val = queue[indMax];
			p = prior[indMax];
			for (int i = indMax; i < size-1; i++)
			{
				queue[i] = queue[i + 1];
				prior[i] = prior[i + 1];
			}
			size--;
			return true;
		}
		return false;
	}

	void enqueue(Document &d)
	{

		if (!isFull())
		{
			string a; 
			int p;
		a = d.name;
			p = d.prior;
			size++;
			int *tempPrior = new int[size];
			string*temp = new string[size];
			for(int i=0;i<size-1;i++)
			{
				tempPrior[i] = prior[i];
				temp[i] = queue[i];
			}
			temp[size - 1] = a;
			tempPrior[size - 1] = p;

			delete[] prior;
			delete[]queue;
			prior = tempPrior;
			queue = temp;
		}
	}

	bool isEmpty()
	{
		if (size == 0)return true;
		return false;
	}

	bool isFull()
	{
		if (size == MAXSIZE)return true;
		return false;

	}

	void Clear()
	{
		size = 0;
	}

	void Show()
	{
		for (int i = 0; i < size; i++)
		{
			cout << queue[i] << " ";
			cout << prior[i] << endl;
		}
		cout << endl;
	}

	int GetSize()
	{
		return size;
	}

	~Spooler() { delete[]queue; }
};
class Printer
{
public:
	Spooler n;
	void Print(Spooler &s)
	{
		n = s;
		int prior = 0;
		string val = " ";
		for (int i = 0; i < 10; i++)
		{
			if (s.isEmpty())
				break;
			s.dequeue(val, prior);
			cout << "Print: " << val<<endl;
			for (int j = 0; j < 3; j++)
			{
				cout << ".";
				Sleep(s.doc.size);
			}
			
			cout << endl << "Complete\n\n\n\n";
			val = -1;
			prior = -1;

		}
	}
};
int main()
{
	srand(time(0));
	Document *a =new Document[5];
	for (int i = 0; i < 5; i++)
	{
		a[i].show();
	}
	Spooler b;
	b.Fill();
	for (int i = 0; i < 5; i++)
	{
		b.enqueue(a[i]);
	}
	Printer p;
	p.Print(b);
	
	


	system("pause");
}