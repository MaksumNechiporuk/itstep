#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Node
{
	string key;
	string val;
	Node* left;
	Node* right;
};

class BinaryTree
{
public:

	void AddToTree(Node*&root, string key, string val)
	{
		if (!root)
		{
			root = new Node();
			root->key = key;
			root->val = val;
			root->left = nullptr;
			root->right = nullptr;
		}
		else if (key > root->key) { AddToTree(root->right, key, val); }
		else if (key < root->key) { AddToTree(root->left, key, val); }
		else if (key == root->key)
		{
			root->val = val;
			return;
		}
	}
	void Show(Node* root)
	{
		if (!root) return;

		if (root->left) { Show(root->left); }
		cout << root->key << " : " << root->val << "\n";

		if (root->right) { Show(root->right); }
	}
	Node* FindMin(Node * root)
	{
		if (!root->left) return root;
		FindMin(root->left);
	}

	void Delete(Node*& root)
	{
		if (root->left) { Delete(root->left); }
		if (root->right) { Delete(root->right); }
		delete root;
		root = nullptr;
		ofstream out("myFile.txt");
		out.clear();
		out.close();
	}
	void DelByKey(Node *& root, string key, BinaryTree &bt)
	{
		if (root == nullptr) { cout << "There is no such word\n"; return; }
		if (key < root->key) DelByKey(root->left, key, bt);
		if (key > root->key) DelByKey(root->right, key, bt);
		if (root->key == key)
		{
			if (!root->left && !root->right)
			{
				delete root;

				root = nullptr;
				return;
			}
			else if (!root->left)
			{
				Node * del = root;
				root = root->right;

				delete del;
				return;
			}
			else if (!root->right)
			{
				Node * del = root;
				root = root->left;

				delete del;
				return;
			}
			else
			{
				Node* minNode = FindMin(root->right);
				root->val = minNode->val;
				root->key = minNode->key;
				DelByKey(root->right, minNode->key, bt);
			}
		}

	}
	void Search(Node* root, string key)
	{
		if (root == nullptr)
		{
			cout << "No such value\n";
			return;
		}
		if (root->key == key)
		{
			cout << root->key << " : " << root->val << "\n";
			return;
		}
		if (key < root->key)
		{
			Search(root->left, key);
		}
		if (key > root->key)
		{
			Search(root->right, key);
		}
	}

	bool SaveToFile(string filename, Node * root)
	{
		if (!root) return false;
		ofstream out(filename, ios_base::app);
		SaveNodeToFile(root, filename);
		out.close();
		return true;
	}
	void SaveNodeToFile(Node * cur, string filename)
	{
		ofstream out(filename, ios_base::app);
		if (cur->left)	SaveNodeToFile(cur->left, filename);
		if (cur->right)	SaveNodeToFile(cur->right, filename);
		out << cur->key << ":" << cur->val << ".";
	}

	bool ReadFromFile(string filename, Node *& root)
	{
		ifstream in(filename);
		char key[50];
		char val[50];
		while (!in.eof())
		{
			in.getline(key, 50, ':');
			if (in.eof()) break;
			in.getline(val, 50, '.');
			if (in.eof()) break;
			AddToTree(root, key, val);
		}
		in.close();
		return true;
	}
};
void Add_word(Node *&root, BinaryTree &bt)
{
	string key, value;
	root = nullptr;
	cout << "Enter word: ";
	cin >> key;
	cout << "Enter translation of the word: ";
	cin >> value;
	bt.AddToTree(root, key, value);
	if (bt.SaveToFile("myFile.txt", root)) cout << "Saved\n";
}
void Menu(string filename, BinaryTree &bt, Node *& root)
{

	system("cls");
	cout << "Dictionary\n\n";
	cout << "1.Show dictionary\n";
	cout << "2.Clear dictionary\n";
	cout << "3.Search word\n";
	cout << "4.Add word\n";
	cout << "5.Delete word\n";
	cout << "6.Exit\n";
	int choice;
	cout << "Your choice__________\b\b\b\b\b";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		bt.Show(root);

		break;
	}
	case 2:
	{
		bt.Delete(root);

		break;
	}
	case 3:
	{
		string word;
		cout << "Enter word: ";
		cin >> word;
		bt.Search(root, word);
		break;
	}
	case 4:
	{
		Add_word(root, bt);
		break;
	}
	case 5:
	{
		string word;
		cout << "Enter word: ";
		cin >> word;
		bt.DelByKey(root, word, bt);
		break;
	}
	case 6:
	{
		break;
	}
	}
}
void main()
{
	string filename = "myFile.txt";
	BinaryTree bt;
	Node * root = nullptr;
	bt.ReadFromFile(filename, root);
	Menu(filename, bt, root);
	cout << endl;
	int choice = 0;
	for (; choice != 2;)
	{
		cout << "1.Back\n";
		cout << "2.Exit\n";
		cout << "Your choice__________\b\b\b\b\b";
		cin >> choice;
		if (choice == 1)
			Menu(filename, bt, root);

	}
	system("pause");
}