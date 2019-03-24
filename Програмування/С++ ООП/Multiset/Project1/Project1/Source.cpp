#include<iostream>
#include<string>
#include<set>

using namespace std;
int main()
{
	multiset<string> products;
	int c;
	string name;
	for (;;)
	{
		cout << "1.Add\n2.Search\n3.Show\n4.EXIT\n";
		cin >> c;
		switch (c)
		{
		case 1:
		{
			cout << "Enter name  ";
			cin >> name;
			if (!products.empty())
			{
			
				auto m = products.find(name);
				if (m!=products.end())
				{
					if ((*m) == name)
					{
						cout << "A product with such a name exists\n1.Add\n2.Replase\n";
						cin >> c;
						if (c == 1)
						{
							products.insert(name);
							break;
						}
						else
						{
							cout << "Enter name  ";
							cin >> name;
							products.insert(name);
							break;
						}

					}
					
					
				}
				else { products.insert(name); }
			}
			else
			{
				products.insert(name);
			}
			name = "\0";
			break;
		}
		case 2:
		{
			cout << "Enter name  ";
			cin >> name;
			auto m = products.find(name);
			if (m==products.end())
			{
				cout << "Product with this name does not exist\n";
			}
			else if((*m) == name)
				cout << (*m) << " - " << products.count((*m)) << endl;
				
			break;
		}
		case 3:
		{
			for (auto el : products)
			{
				cout << el << " " << endl;
			}
			break;
		}
		}

		if (c == 4)
			break;
		system("pause");
		system("cls");
	}


	system("pause");
}
