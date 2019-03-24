#include<iostream>
#include<ctime>

using namespace std;



//class StackMy
//{
//	enum { EMPTY = 0, MAXSIZE = 5 };
//	char stack[MAXSIZE];
//	int size;
//
//public:
//	StackMy() { size = EMPTY; }
//	void Push(char a)
//	{
//		if (!isFull())
//		{
//			size++;
//			stack[size - 1] = a;
//		}
//		else cout << "STACK IS FULL\n";
//	}
//
//	char Pop()
//	{
//		if (!isEmpty())
//		{
//			size--;
//			return stack[size];
//		}
//		else {
//			//cout << "\nSTACK IS EMPTY\n";
//			return 0;
//		}
//	}
//
//	bool isEmpty()
//	{
//		return (size == EMPTY);
//	}
//
//	bool isFull()
//	{
//		return (size == MAXSIZE);
//	}
//
//	void Clear()
//	{
//		size = EMPTY;
//	}
//
//	void Show()
//	{
//		cout << "\n-----------------------------\n";
//		for (int i = 0; i < size; i++)
//		{
//			cout << stack[i] << " ";
//		}
//		cout << endl;
//	}
//};
//
//
//bool func(char a[],StackMy &s)
//{
//	char c;
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (a[i] == '[' || a[i] == '{' || a[i] == '(')
//		{
//			s.Push(a[i]);
//		}
//		else if (a[i] == ']' )
//		{
//			c=s.Pop();
//			if (c == '[')
//				continue;
//			else
//			{
//				cout << "Error\n";
//				return 0;
//			}
//		}
//		else if (a[i] == '}')
//		{
//			c = s.Pop();
//			if (c == '{')
//				continue;
//			else
//			{
//				cout << "Error\n";
//				return 0;
//			}
//		}
//		else if (a[i] == ')')
//		{
//			c = s.Pop();
//			if (c == '(')
//				continue;
//			else
//			{
//				cout << "Error\n";
//				return 0;
//			}
//		}
//	}
//	if (s.isEmpty())
//	{
//		cout << "OK\n";
//	}
//
//}
//int main()
//{
//	char a[256];
//	cin.getline(a, 100);
//	StackMy s;
//	func(a, s);
//	system("pause");
//}

class MyStack
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
			if ( size== 0) return false;
	
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
	void show()
	{
		cout << number << '\t' << hit <<"%"<< endl;
	}
	void shoots()
	{
		int shoot = rand() % 100;
		cout << shoot << endl;
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
class vending_machine
{

public:
	friend charge;
	void Create_vending_machine(MyStack &s,charge &ch)
	{
		for (int i = 0; i < 30; i++)
		{
			s.Push(ch.number);
			ch.number++;
		}
	}
};
class automaton
{

};
int main()
{
	srand(time(0));
	MyStack s;
	charge a;
	a.show();
	a.shoots();
	system("pause");
}

