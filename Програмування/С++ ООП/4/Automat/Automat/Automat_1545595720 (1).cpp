#include<iostream>
#include<ctime>

using namespace std;

class charge
{
public:
	static int  amount;
	int number;
	int hit;
	charge()
	{
		amount++;
		number = amount;
		hit = rand() % 100;
	}
	void show()
	{
		cout << hit << "%" << endl;
	}
	void shoots()
	{
		int shoot = rand() % 100;
		show();
		if (shoot <= hit)
		{
			cout << "hit\n";
		}
		else
		{
			cout << "miss\n";
		}
	}

};
int charge::amount = 1;

class Machine
{
private:
	struct Node
	{
		charge val;
		Node* next;
	};
	Node * pHead = nullptr;
	

public:
	int size = 0;
	bool Pop(charge &val)
	{
		if (size == 0) return false;

		Node* pDel = pHead;
		val = pDel->val;
		if (size > 1)
		{
			pHead = pHead->next;
		}
		delete pDel;
		size--;
		return true;
	}
	bool Push(charge val)
	{
		Node* pNew = new Node();
		pNew->val = val;

		if (!pHead)
		{
			pNew->next = nullptr;
			pHead = pNew;
		}
		else
		{
			pNew->next = pHead;
			pHead = pNew;
		}
		size++;
		return true;
	}
	bool Clear()
	{
		if (size == 0) return false;
		Node*pDel = pHead;
		while (pHead != nullptr)
		{
			pDel = pHead;
			pHead = pHead->next;
			delete pDel;
			size--;
		}
	}
};

class automaton
{
public:
	void charge_(Machine &a,charge b[])
	{
		for (int i = 0; i<a.size; i++)
		{
			a.Push(b[i]);
		}
	}
	void Shoot(charge b[])
	{
		for (int i = 0;i<30; i++)
		{

			b[i].shoots();
		
			system("pause");
		}
	}

};
int main()
{
	srand(time(0));
	automaton b;
	charge *a= new charge [30];
	Machine m;
	int c;
	
	for (;;)
	{
		cout << "1.Shoot\n";
		cout << "2.Charge\n";
		cout << "3.Exit\n";
		cin >> c;
		switch (c)
		{
		case 1:
		{
			b.Shoot(a);
			break;
		}
		case 2:
		{
			b.charge_(m, a);
			break;
		}
		}
		if (c == 3)
			break;
		
	}
	system("pause");
}

