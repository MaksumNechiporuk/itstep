#include<iostream>
#include<string>
#include<map>
#include<iterator>
#include<algorithm>
#include<vector>
#include<Windows.h>


using namespace std;

void SetCol(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}
class Reguest
{
	string name;
	string color;
	int quantity;
	double money;
public:
	Reguest(string m, double money, int q, string col)
	{
		name = m;
		color = col;
		quantity = q;
		this->money = money;
	}
	string GetName()
	{
		return name;
	}
	string GetColor()
	{
		return color;
	}
	int GetQuantity()
	{
		return quantity;
	}
	double GetMoney()
	{
		return money;
	}
	void SetMoney(double m)
	{
		 money=m;
	}
	void Show()
	{
		SetCol(10);
		cout <<"Person:"<< name << "  " << color << "  " << quantity << "  " << money << endl;
	}
};
class Seller
{
	
protected:
	Seller *Accessor;
	vector<string> products_name;
	vector<int>products_quantity;
	vector<string>products_color;
	vector<double>products_price;
	void Show(int i)
	{
		SetCol(14);
		cout << "Product\n";
		cout << products_name[i] << endl;
		cout << products_quantity[i] << endl;
		cout << products_color[i] << endl;
		cout << products_price[i] << endl;
		SetCol(7);
	}

public:
	virtual void SetAccessor(Seller *C) = 0;
	virtual void GiveProducts(Reguest *r) = 0;
};
class Seller_Princesses :public Seller
{
public:
	Seller_Princesses()
	{

		products_name.push_back("Princess 1");
		products_quantity.push_back(10);
		products_color.push_back("red");
		products_price.push_back(100);
		
		
		products_name.push_back("Princess 2");
		products_quantity.push_back(10);
		products_color.push_back("yellow");
		products_price.push_back(200);

		products_name.push_back("Princess 3");
		products_quantity.push_back(5);
		products_color.push_back("pink");
		products_price.push_back(300);
	
		
	}
	void SetAccessor(Seller *C)
	{
		Accessor = C;
	}

	void GiveProducts(Reguest *r)
	{
		cout << "\nPrincesses\n";

		auto f = find(products_name.begin(), products_name.end(), r->GetName());
		if (f != products_name.end())
		{
			r->Show();
			auto it = products_name.begin();
			int i = 0;
			for ( ;;)
			{
				if ((*it) == r->GetName())
					break;
				i++;				it++;

			}
			Show(i);
			if (it != products_name.end())
			{
				if (products_quantity[i] >= r->GetQuantity() && products_color[i] == r->GetColor())
				{
					if ((r->GetQuantity()*products_price[i]) <= r->GetMoney())
					{
						products_quantity[i] -= r->GetQuantity();
						r->SetMoney((r->GetMoney() - (r->GetQuantity()*products_price[i])));
						Show(i);
						cout << endl;
						r->Show();
					}
					else
					{
						cout << "not enough money\n";
					}
				}
			}

		
			
	}
		else
		{
			cout << "This product does not exist\n";

			if (Accessor != nullptr)
				Accessor->GiveProducts(r);
		}
	}
};

class SellerGoblins :public Seller
{
public:
	SellerGoblins()
	{

		products_name.push_back("Goblin 1");
		products_quantity.push_back(10);
		products_color.push_back("red");
		products_price.push_back(100);


		products_name.push_back("Goblin 2");
		products_quantity.push_back(10);
		products_color.push_back("red");
		products_price.push_back(200);

		products_name.push_back("Goblin 3");
		products_quantity.push_back(5);
		products_color.push_back("pink");
		products_price.push_back(300);


	}
	void SetAccessor(Seller *C)
	{
		Accessor = C;
	}

	void GiveProducts(Reguest *r)
	{
	cout << "\nGoblins\n";

		auto f = find(products_name.begin(), products_name.end(), r->GetName());
		if (f != products_name.end())
		{
			r->Show();
			auto it = products_name.begin();
			int i = 0;
			for (;;)
			{
				if ((*it) == r->GetName())
					break;
				it++;

				i++;
				
			}
			Show(i);
			if (it != products_name.end())
			{
				if (products_quantity[i] >= r->GetQuantity() && products_color[i] == r->GetColor())
				{
					if ((r->GetQuantity()*products_price[i]) <= r->GetMoney())
					{
						products_quantity[i] -= r->GetQuantity();
						r->SetMoney((r->GetMoney() - (r->GetQuantity()*products_price[i])));
						Show(i);
						cout << endl;
						r->Show();
					}
					else
					{
						cout << "not enough money\n";
					}
				}
			}
		}
		else
		{
			
			cout << "This product does not exist\n";

			if (Accessor != nullptr)
				Accessor->GiveProducts(r);
		}
	}
};
class RocketSalesman :public Seller
{
public:
	RocketSalesman()
	{

		products_name.push_back("Rocket 1");
		products_quantity.push_back(17);
		products_color.push_back("red");
		products_price.push_back(1000);


		products_name.push_back("Rocket 2");
		products_quantity.push_back(10);
		products_color.push_back("red");
		products_price.push_back(2000);

		products_name.push_back("Rocket 3");
		products_quantity.push_back(5);
		products_color.push_back("pink");
		products_price.push_back(3000);


	}
	void SetAccessor(Seller *C)
	{
		Accessor = C;
	}

	void GiveProducts(Reguest *r)
	{
		cout << "\nRockets\n";

		auto f = find(products_name.begin(), products_name.end(), r->GetName());
		if (f != products_name.end())
		{
			r->Show();
			auto it = products_name.begin();
			int i = 0;
			for (;;)
			{
				if ((*it) == r->GetName())
					break;
				it++;

				i++;

			}
			Show(i);
			if (it != products_name.end())
			{
				if (products_quantity[i] >= r->GetQuantity() && products_color[i] == r->GetColor())
				{
					if ((r->GetQuantity()*products_price[i]) <= r->GetMoney())
					{
						products_quantity[i] -= r->GetQuantity();
						r->SetMoney((r->GetMoney() - (r->GetQuantity()*products_price[i])));
						Show(i);
						cout << endl;
						r->Show();
					}
					else
					{
						cout << "not enough money\n";
					}
				}
			}
		}
		else
		{

			cout << "This product does not exist\n";

			if (Accessor != nullptr)
				Accessor->GiveProducts(r);
		}
	}
};
class StonesSeller :public Seller
{
public:
	StonesSeller()
	{

		products_name.push_back("Stone 1");
		products_quantity.push_back(10);
		products_color.push_back("red");
		products_price.push_back(100);


		products_name.push_back("Stone 2");
		products_quantity.push_back(10);
		products_color.push_back("red");
		products_price.push_back(200);

		products_name.push_back("Stone 3");
		products_quantity.push_back(5);
		products_color.push_back("pink");
		products_price.push_back(300);


	}
	void SetAccessor(Seller *C)
	{
		Accessor = C;
	}

	void GiveProducts(Reguest *r)
	{
		cout << "\nStones\n";

		auto f = find(products_name.begin(), products_name.end(), r->GetName());
		if (f != products_name.end())
		{
			r->Show();
			auto it = products_name.begin();
			int i = 0;
			for (;;)
			{
				if ((*it) == r->GetName())
					break;
				it++;

				i++;

			}
			Show(i);
			if (it != products_name.end())
			{
				if (products_quantity[i] >= r->GetQuantity() && products_color[i] == r->GetColor())
				{
					if ((r->GetQuantity()*products_price[i]) <= r->GetMoney())
					{
						products_quantity[i] -= r->GetQuantity();
						r->SetMoney((r->GetMoney() - (r->GetQuantity()*products_price[i])));
						Show(i);
						cout << endl;
						r->Show();
					}
					else
					{
						cout << "not enough money\n";
					}
				}
			}
		}
		else
		{
			cout << "This product does not exist\n";

			if (Accessor != nullptr)
				Accessor->GiveProducts(r);
			
			
		}
	}
};

int main()
{

	Reguest a("Rocket 1", 30000,10,"red");
	Seller *c = new Seller_Princesses();
	Seller *c1 = new SellerGoblins();
	Seller *c2 = new RocketSalesman();
	Seller *c3 = new SellerGoblins();
	c->SetAccessor(c1);
	c1->SetAccessor(c2);
	c2->SetAccessor(c3);
	c->GiveProducts(&a);
	system("pause");
}