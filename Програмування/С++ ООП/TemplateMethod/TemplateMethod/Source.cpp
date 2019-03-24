#include<iostream>
#include<string>

using namespace std;

class Car
{
	
protected:
	int speed;
	string name;
	string type;
	virtual void Show() = 0;
	virtual void SetSpeed() = 0;
	virtual void SetName() = 0;
	virtual void SetType() = 0;
public:
	void Drive()
	{
		SetSpeed( );
		SetName( );
		SetType( );
		Show();
	}
};
class SportCar :public Car
{
	void SetSpeed( )
	{
		this->speed = 300;
	}
	void SetName( )
	{
		this->name = "BMW";

	}
	void SetType( )
	{
		this->type = "SportCar";

	}
	void  Show()
	{
		cout << "name:" << name << "   speed:" << speed << "    type:" << type << endl;
	}
};

class Truck :public Car
{
	void SetSpeed( )
	{
		this->speed = 100;
	}
	void SetName( )
	{
		this->name = "Opel";

	}
	void SetType( )
	{
		this->type = "truck";

	}
	void  Show()
	{
		cout << "name:" << name << "   speed:" << speed << "    type:" << type << endl;
	}
};

int main()
{
	Car *c = new SportCar();
	c->Drive();
	delete c;
	cout << endl;
	c = new  Truck();
	c->Drive();


	system("pause");
}