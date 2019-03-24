#include<iostream>
#include<string>
#include<list>

using namespace std;

class Component
{
public:
	virtual void Add(Component* comp) = 0;
	virtual void GetValue(int lev) = 0;
};

class Department : public Component
{
protected:
	list<Component*> department;
	string name;
public:
	Department(string name) :name(name)
	{
	}
	void Add(Component * comp)
	{
		department.push_back(comp);
	}
	void GetValue(int lev)
	{
		for (size_t i = 0; i < lev; i++)
		{
			cout << "*";
		}
		cout << name << endl;
		for (auto el : department)
		{
			el->GetValue(lev + 6);
		}
	}
};
class Employee : public Component
{
	string Name;
public:
	Employee(string n) :Name(n)
	{

	}
	void Add(Component * comp)
	{
	
		cout << "You can't do this. Its leaf!!!";
	
	}
	void GetValue(int lev)
	{
	
		for (size_t i = 0; i < lev; i++)
		{
			cout << "-";
		}
		cout << Name << endl;
	
	}

	
};


int main()
{
	Component * main_d = new Department("Main department");
	Component * dep1 = new Department("Development department");
	Component * dep2 = new Department("Department of product introduction");
	Component * dep3 = new Department("Accounting");
	main_d->Add(dep1);
	main_d->Add(dep2);
	main_d->Add(dep3);

	Component * Emp1 = new Employee("Pupkin");
	Component * Emp2 = new Employee("Petrov");
	Component * Emp3 = new Employee("Ivanov");
	Component * Emp4 = new Employee("Kazanov");
	Component * Emp5 = new Employee("Babok");
	Component * Emp6 = new Employee("Tapok");
	dep1->Add(Emp1);
	dep1->Add(Emp2);
	dep2->Add(Emp3);
	dep2->Add(Emp4);
	dep3->Add(Emp5);
	dep3->Add(Emp6);
	main_d->GetValue(0);
	system("pause");
}
