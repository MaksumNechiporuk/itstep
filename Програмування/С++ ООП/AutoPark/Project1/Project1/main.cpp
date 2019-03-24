#include<iostream>
#include<string>
using namespace std;

class Bus
{
public:
	string name;
	int numberbus;
	int number;
	void Show()
	{
		cout << name << "  " << number << "  " << numberbus << endl;
	}
};
//template <class T>
class BusList1
{
private:
	struct Node
	{
		Node * pNext;
		Node * pPrev;
		Bus val;
	};
	Node * pHead;
	Node * pTail;
	int size;

public:
	BusList1()
	{
		pHead = nullptr;
		pTail = nullptr;
		size = 0;
	}
	bool AddToHead(Bus val)
	{
		Node * pNew = new Node();
		pNew->pPrev = nullptr;
		pNew->val = val;

		if (!pHead)
		{
			pNew->pNext = nullptr;
			pTail = pNew;
		}
		else
		{
			pNew->pNext = pHead;
			pHead->pPrev = pNew;
		}
		pHead = pNew;
		size++;
		return true;
	}
	bool AddToTail(Bus val)
	{
		Node* pNew = new Node();
		pNew->val = val;
		pNew->pNext = nullptr;
		if (!pHead)
		{
			pNew->pNext = nullptr;
			pHead = pNew;
		}
		else
		{
			pTail->pNext = pNew;
			pNew->pPrev = pTail;
		}
		pTail = pNew;
		size++;
		return true;
	}

	Bus RemoveFromHead()
	{
		if (!pHead) return;
		Bus val = pHead->val;
		if (size == 1)
		{
			delete pHead;
			pHead = nullptr;
			pTail = nullptr;
		}
		else
		{
			Node * pDel = pHead;
			pHead = pHead->pNext;
			pHead->pPrev = nullptr;
			delete pDel;
		}
		size--;
		return val;
	}
	Bus RemoveFromTail()
	{
		if (!pHead) return;
		Bus val = pTail->val;
		if (size == 1)
		{
			delete pHead;
			pHead = nullptr;
			pTail = nullptr;
		}
		else
		{
			Node *pDel = pTail;
			pTail = pTail->pPrev;
			pTail->pNext = nullptr;
		}
		size--;
		return val;
	}


	bool AddByIndex(int ind, Bus val)
	{
		if (ind <= 0 || !pHead) return AddToHead(val);
		if (ind >= size) return AddToTail(val);
		Node * pCur = pHead;
		for (int i = 0; i < ind; i++)
		{
			pCur = pCur->pNext;
		}
		Node *pNew = new Node();
		pNew->val = val;
		pNew->pNext = pCur;
		pNew->pPrev = pCur->pPrev;
		pCur->pPrev->pNext = pNew;
		pCur->pPrev = pNew;
		size++;
	}

	Bus RemoveByIndex(int ind)
	{
		if (ind < 0 || ind >= size || !pHead)
			return;
		if (size == 1)
		{
			return RemoveFromHead();
		}
		if (ind == 0) return RemoveFromHead();
		if (ind == size - 1) return RemoveFromTail();

		Node * pCur = pHead;
		for (int i = 0; i < ind; i++)
		{
			pCur = pCur->pNext;
		}
		pCur->pNext->pPrev = pCur->pPrev;
		pCur->pPrev->pNext = pCur->pNext;
		Bus val = pCur->val;
		delete pCur;
		size--;
		return val;

	}
	bool Clear()
	{
		while (size)
		{
			RemoveFromHead();
		}
		return true;
	}

	void Show()
	{
		Node * pCur = pHead;
		while (pCur)
		{
			pCur->val.Show();
			pCur = pCur->pNext;
		}
		cout << endl;
	}
	void ShowReverse()
	{
		Node * pCur = pTail;
		while (pCur)
		{
			pCur->val.Show();
			pCur = pCur->pPrev;
		}
	}

	int GetSize()
	{
		return size;
	}
}; 
class BusList2
{
private:
	struct Node
	{
		Node * pNext;
		Node * pPrev;
		Bus val;
	};
	Node * pHead;
	Node * pTail;
	int size;

public:
	BusList2()
	{
		pHead = nullptr;
		pTail = nullptr;
		size = 0;
	}
	bool AddToHead(Bus val)
	{
		Node * pNew = new Node();
		pNew->pPrev = nullptr;
		pNew->val = val;

		if (!pHead)
		{
			pNew->pNext = nullptr;
			pTail = pNew;
		}
		else
		{
			pNew->pNext = pHead;
			pHead->pPrev = pNew;
		}
		pHead = pNew;
		size++;
		return true;
	}
	bool AddToTail(Bus val)
	{
		Node* pNew = new Node();
		pNew->val = val;
		pNew->pNext = nullptr;
		if (!pHead)
		{
			pNew->pNext = nullptr;
			pHead = pNew;
		}
		else
		{
			pTail->pNext = pNew;
			pNew->pPrev = pTail;
		}
		pTail = pNew;
		size++;
		return true;
	}

	Bus RemoveFromHead()
	{
		if (!pHead) return;
		Bus val = pHead->val;
		if (size == 1)
		{
			delete pHead;
			pHead = nullptr;
			pTail = nullptr;
		}
		else
		{
			Node * pDel = pHead;
			pHead = pHead->pNext;
			pHead->pPrev = nullptr;
			delete pDel;
		}
		size--;
		return val;
	}
	Bus RemoveFromTail()
	{
		if (!pHead) return ;
		Bus val = pTail->val;
		if (size == 1)
		{
			delete pHead;
			pHead = nullptr;
			pTail = nullptr;
		}
		else
		{
			Node *pDel = pTail;
			pTail = pTail->pPrev;
			pTail->pNext = nullptr;
		}
		size--;
		return val;
	}


	bool AddByIndex(int ind, Bus val)
	{
		if (ind <= 0 || !pHead) return AddToHead(val);
		if (ind >= size) return AddToTail(val);
		Node * pCur = pHead;
		for (int i = 0; i < ind; i++)
		{
			pCur = pCur->pNext;
		}
		Node *pNew = new Node();
		pNew->val = val;
		pNew->pNext = pCur;
		pNew->pPrev = pCur->pPrev;
		pCur->pPrev->pNext = pNew;
		pCur->pPrev = pNew;
		size++;
	}

	Bus RemoveByIndex(int ind)
	{
		if (ind < 0 || ind >= size || !pHead)
			return;
		if (size == 1)
		{
			return RemoveFromHead();
		}
		if (ind == 0) return RemoveFromHead();
		if (ind == size - 1) return RemoveFromTail();

		Node * pCur = pHead;
		for (int i = 0; i < ind; i++)
		{
			pCur = pCur->pNext;
		}
		pCur->pNext->pPrev = pCur->pPrev;
		pCur->pPrev->pNext = pCur->pNext;
		Bus val = pCur->val;
		delete pCur;
		size--;
		return val;

	}
	bool Clear()
	{
		while (size)
		{
			RemoveFromHead();
		}
		return true;
	}

	void Show()
	{
		Node * pCur = pHead;
		while (pCur)
		{
			pCur->val.Show();
			pCur = pCur->pNext;
		}
		cout << endl;
	}
	void ShowReverse()
	{
		Node * pCur = pTail;
		while (pCur)
		{
			pCur->val.Show();
			pCur = pCur->pPrev;
		}
	}

	int GetSize()
	{
		return size;
	}
};
class AutoPark
{
public:
	BusList1 b1;
	BusList2 b2;
};
void main()
{
	BusList1  list;
	/*list.AddToHead(1);
	list.AddToHead(2);
	list.AddToHead(3);
	list.AddToTail(4);
	list.AddToTail(5);
	list.AddToTail(6);
	list.AddToTail(7);
	list.AddToTail(8);
	list.Show();
	list.AddByIndex(0, 100);
	list.AddByIndex(9, 112);
	list.AddByIndex(12, 99);
	list.Show();*/


	list.RemoveByIndex(3);
	list.RemoveByIndex(3);
	list.RemoveByIndex(3);
	list.RemoveByIndex(3);
	list.RemoveByIndex(3);
	list.RemoveByIndex(3);

	list.Show();
	cout << endl;
	cout << endl;
	cout << endl;
	list.ShowReverse();
	cout << endl;
	/*for (size_t i = 0; i < 3; i++)
	{
		cout << "from head: " << list.RemoveFromHead() << endl;
		cout << "from tail: " << list.RemoveFromTail() << endl;
	}*/
	list.Show();
	cout << endl;
	my3.AddToHead(Bus());
	my3.AddToHead(Bus());
	my3.Show();
	system("pause");
}