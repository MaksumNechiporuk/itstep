#include<iostream>
#include<string>

using namespace std;

class House
{
	string doors;
	string foundation;
	int rooms;
	string material;
public:
	void Show()
	{
		cout <<"foundation:" <<foundation << "  " <<"Dours material:"<< doors << "  "<<"Rooms:" << rooms << "  Material house:" << material << endl;
	}
	virtual void SetDoors(string d)
	{
		doors = d;
	}
	virtual void SetFoundation(string f)
	{
		foundation = f;
	}
	virtual void SetRooms(int r)
	{
		rooms = r;
	}
	virtual void SetMaterial(string m)
	{
		material = m;
	}
};
class AbstractBuilder
{
protected:
	House * house;
public:
	AbstractBuilder()
	{
		house = new House();
	}
	House * GetHouse()
	{
		if (house != nullptr)
			return house;
	}

	virtual void SetData() = 0;

};
class WoodenBuilder : public AbstractBuilder
{
public:
	void SetData()
	{
		house->SetDoors("Wooden");
		house->SetFoundation("Expencive");
		house->SetRooms(5);
		house->SetMaterial("Wooden");
		house->Show();
	}
};
class BrickBuilder : public AbstractBuilder
{
public:
	void SetData()
	{
		house->SetDoors("Brick");
		house->SetFoundation("Expencive");
		house->SetRooms(5);
		house->SetMaterial("Brick");
		house->Show();
	}
};
class Director
	{
		AbstractBuilder * _builder;
	public:
		void SetBuilder(AbstractBuilder * builder)
		{
			_builder = builder;
		
		}
		void BuildHouse()
		{
			_builder->SetData();
	}
		
	};

void main()
{
	Director * d = new Director();
	AbstractBuilder * builder1 = new BrickBuilder();
	AbstractBuilder * builder2 = new WoodenBuilder();
	d->SetBuilder(builder2);
	d->BuildHouse();
	cout << endl;
	d->SetBuilder(builder1);
	d->BuildHouse();	
	system("pause");
}
