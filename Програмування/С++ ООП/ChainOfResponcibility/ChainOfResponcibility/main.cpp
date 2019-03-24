#include<iostream>
#include<string>
#include<map>
#include<iterator>
#include<algorithm>

using namespace std;
 

class Reguest
{
	string meal;
	double money;
public:
	Reguest(string m, double money)
	{
		meal = m;
		this->money = money;
	}
	string GetMeal()
	{
		return meal;
	}
	double GetMoney()
	{
		return money;
	}
};
class Cooker
{
protected:
	Cooker *Accessor;
	map<string,int> meals;
public:
	virtual void SetAccessor(Cooker *C) = 0;
	virtual void GiveMeal(Reguest *r)=0;
};
class Barmen :public Cooker
{
public:
	Barmen()
	{
		meals.insert(make_pair("Coctail",90));
		meals.insert(make_pair("Tea",20));
		meals.insert(make_pair("Coffee",25));
	}
	void SetAccessor(Cooker *C)
	{
		Accessor = C;
	}

	void GiveMeal(Reguest *r)
	{
		cout << "Barmen\n";
		auto f=find(meals.begin(),meals.end(),r->GetMeal());
		if (f != meals.end())
		{
			if (r->GetMoney() > (*f).second)
			{
				cout << (*f).first << endl;
			}
			else { cout << "not enough money\n"; }
		}
		else
		{
			if(Accessor!=nullptr)
				Accessor->GiveMeal(r);
		}
	}
};

class SimpleSaladCooker :public Cooker
{
public:
	SimpleSaladCooker()
	{
		meals.insert(make_pair("Greek salad",40));
		meals.insert(make_pair("Olivier salad",35));
		meals.insert(make_pair("Caesar salad",40));
	}
	void SetAccessor(Cooker *C)
	{
		Accessor = C;
	}
	void GiveMeal(Reguest *r)
	{
		cout << "SimpleSaladCooker\n";
		auto f = find(meals.begin(), meals.end(), r->GetMeal());
		if (f != meals.end())
		{
			if (r->GetMoney() > (*f).second)
			{
				cout << (*f).first << endl;
			}
			else { cout << "not enough money\n"; }
		}
		else
		{
			if (Accessor != nullptr)
				Accessor->GiveMeal(r);
		}
	
	}
};
class SoupCooker :public Cooker
{
public:
	SoupCooker()
	{
		meals.insert(make_pair("Bouillon",70));
		meals.insert(make_pair("Borsch",65));
		meals.insert(make_pair("Simple soup",60));
	}
	void SetAccessor(Cooker *C)
	{
		Accessor = C;
	}
	void GiveMeal(Reguest *r)
	{
		cout << "SoupCooker\n";
		auto f = find(meals.begin(), meals.end(), r->GetMeal());
		if (f != meals.end())
		{
			if (r->GetMoney() > (*f).second)
			{
				cout << (*f).first << endl;
			}
			else { cout << "not enough money\n"; }
		}
		else
		{
			if (Accessor != nullptr)
				Accessor->GiveMeal(r);
		}
	}
	
};
class MeatCooker :public Cooker
{
public:
	MeatCooker()
	{
		meals.insert(make_pair("Steak",280));
		meals.insert(make_pair("Shish kebab",250));
		meals.insert(make_pair("Milled meat",300));
	}
	void SetAccessor(Cooker *C)
	{
		Accessor = C;
	}
	void GiveMeal(Reguest *r)
	{
		cout << "MeatCooker\n";
		auto f = find(meals.begin(), meals.end(), r->GetMeal());
		if (f != meals.end())
		{
			if (r->GetMoney() >= (*f).second)
			{
				cout << (*f).first << endl;
			}
			else { cout << "not enough money\n"; }
		}
		else
		{
			if (Accessor != nullptr)
				Accessor->GiveMeal(r);
		}
	}
	
};

int main()
{
	string m;
	cin >> m;
	Reguest a(m, 300);
	Cooker *c = new Barmen();
	Cooker *c1 = new MeatCooker();
	Cooker *c2 = new SoupCooker();
	Cooker *c3 = new SimpleSaladCooker();
	c->SetAccessor(c1);
	c1->SetAccessor(c2);
	c2->SetAccessor(c3);
	c->GiveMeal(&a);
	system("pause");
}