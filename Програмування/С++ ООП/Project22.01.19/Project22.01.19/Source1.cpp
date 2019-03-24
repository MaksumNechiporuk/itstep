#include<iostream>
#include<string>
#include<list>
#include<algorithm>
#include<iterator>

using namespace std;

class Figure
{
	string name;
	double area;
public:
	Figure(string n,int a)
	{
		name = n;
		area = a;
	}
	string GetName()
	{
		return name;
	}
	int GetArea()
	{
		return area;
	}
	friend ostream & operator <<(ostream &out, Figure f);
};

ostream & operator <<(ostream &out, Figure f)
{
	out << "Name:" << f.name << "   Area:" << f.area << endl;
	return out;
}


class Circle : public Figure
{
public:
	Circle(string n, int a):Figure(n,a){}
};



class Square : public Figure
{
public:
	Square(string n, int a) :Figure(n, a) {}
};


class Triangle : public Figure
{
public:
	Triangle(string n, int a) :Figure(n, a) {}
};


class FigureName
{
	string  n;
public:
	FigureName(string _n):n(_n){}
	bool operator()(Figure f)
	{
		return n==f.GetName();
	}
};

class FigureArea
{
	int  a;
public:
	FigureArea(int _a) :a(_a) {}
	bool operator()(Figure f)
	{
		return a == f.GetArea();
	}
};


int main()
{
	Figure *f = new Circle("Circle", 21);
	Figure *f1 = new Triangle("Triangle", 34);
	Figure *f2 = new Square("Square", 18.4);
	list < Figure>l{ (*f),(*f1),(*f2) };
		string name;
	cout << "Enter name:";
	cin >> name;
	copy_if(l.begin(), l.end(), ostream_iterator <Figure>(cout), FigureName(name));
		int area;
	cout << "Enter area:";
	cin >> area;
	copy_if(l.begin(), l.end(), ostream_iterator <Figure>(cout), FigureArea(area));
	system("pause");
}