#include<iostream>
#include<string>

using namespace std;

class ICar
{
public:
	virtual void SetCar(string name) = 0;
	virtual void ShowCar() = 0;
};
class Car :public ICar
{
	string name;
public:
	void  SetCar(string name)
	{
		this->name = name;
	}
	void ShowCar()
	{
		cout << "Name:" << name << endl;;
	}
};
class DecoratorCar :public Car
{
protected:
		Car *car;
public:
	DecoratorCar(Car *c)
	{
		car = c;
	}
};

class Truck :public DecoratorCar
{

	double cargo_lifting;
public:
	Truck(Car *c):DecoratorCar(c)
	{}
	void Set_Cargo_Lifting(double a)
	{
		cargo_lifting = a;
	}
	void  SetCar(string name)
	{
		car->SetCar(name);
	}
	void ShowCar()
	{
		car->ShowCar();
		cout << "Cargo lifting:" << cargo_lifting << endl;
	}

};
class SportCar :public DecoratorCar
{

	double max_speed;
public:
	SportCar(Car *c) :DecoratorCar(c)
	{}
	void Set_Max_Speed(double a)
	{
		max_speed = a;
	}
	void  SetCar(string name)
	{
		car->SetCar(name);
	}
	void ShowCar()
	{
		car->ShowCar();
		cout << "Max speed:" << max_speed << endl;
	}

};
int main()
{
	Car *c = new Car();
	c->SetCar("my car");
	c->ShowCar();
	cout << endl;
	DecoratorCar *dec = new SportCar(c);
	//((SportCar*)dec)->SetCar("Sportcar");
	((SportCar*)dec)->Set_Max_Speed(250);
	((SportCar*)dec)->ShowCar();
	cout << endl;
	 dec = new Truck(c);
	 ((Truck*)dec)->SetCar("Truck");
	 ((Truck*)dec)->Set_Cargo_Lifting(5000);
	 ((Truck*)dec)->ShowCar();
	system("pause");
}