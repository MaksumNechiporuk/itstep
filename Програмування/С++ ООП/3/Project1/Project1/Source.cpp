#include<iostream>
#include<ctime>

using namespace std;
class Vending_machine
{
private:
	struct Node
	{
		int val;
		Node* next;
	};
	//вказівник на перший елемент
	Node * pHead = nullptr;
	int size = 0;

public:
	bool Pop(int &val)
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
	bool Push(int val)
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
	bool Show()
	{
		cout << "\n--------------SHOW----------\n";
		if (size == 0) return false;
		Node*pCur = pHead;
		while (pCur != nullptr)
		{
			cout << pCur->val << " ";
			pCur = pCur->next;
		}
		cout << endl;
	}
};
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
	void add_charge(Vending_machine &m)
	{
		m.Push(number);
	}
	void show()
	{
	//	cout << number << '\t' << hit << "%" << endl;
	}
	void shoots(Vending_machine &m)
	{
		int shoot = rand() % 100;
		cout << shoot << endl;
		int a;
		m.Pop(a);
		if (shoot <= hit)
		{
			cout <<a<< "  hit\n";
		}
		else
		{
			cout<<a << "  miss\n";
		}
	}

};
int charge::amount = 1;
class automaton
{
public:
	string name = "AK-47";
	Vending_machine m;
	charge s[30];
	automaton(Vending_machine &k, charge l[])
	{
		m = k;
		for(int i=0;i<30;i++)
		s[i] = l[i];
	}
	void shoots(int i)
	{
		s[i].shoots(m);
		s[i].show();
	}
	void Recharge()
	{
		for(int i=0;i<30;i++)
		s->add_charge(m);

	}
};
int main()
{
	srand(time(0));
	Vending_machine k;
	charge l[30];
	automaton r(k,l);
	r.Recharge();
	for(int i=0;i<30;i++)
	r.shoots(i);
	


	system("pause");
}

