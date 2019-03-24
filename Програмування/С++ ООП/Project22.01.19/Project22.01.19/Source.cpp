//#include<iostream>
//#include<string>
//#include<list>
//#include<algorithm>
//#include<iterator>
//
//using namespace std;
//
//class Figure
//{
//	string name;
//	double area;
//public:
//	Figure(int Type)
//	{
//		string names[3] = { "circle","square","triangle" };
//		name = names[Type-1];
//
//		switch (Type)
//		{
//		case 1:
//		{
//			area = 12.3;
//			break;
//		}
//		case 2:
//		{
//			area = 28.9;
//			break;
//		}
//		case 3:
//		{
//			area = 23.5;
//			break;
//		}
//		}
//
//	}
//	string GetName()
//	{
//		return name;
//	}
//	int GetArea()
//	{
//		return area;
//	}
//	friend ostream & operator <<(ostream &out, Figure f);
//};
//ostream & operator <<(ostream &out, Figure f)
//{
//	out << "Name:" << f.name << "   Area:" << f.area << endl;
//	return out;
//}
//class FigureName
//{
//	string  n;
//public:
//	FigureName(string _n):n(_n){}
//	bool operator()(Figure f)
//	{
//		return n==f.GetName();
//	}
//};
//class FigureArea
//{
//	int  a;
//public:
//	FigureArea(int _a) :a(_a) {}
//	bool operator()(Figure f)
//	{
//		return a == f.GetArea();
//	}
//};
//int main()
//{
//	Figure f(1);
//	Figure f1(2);
//	Figure f2(1);
//	list <Figure> l{ f1,f2,f };
//	string name;
//	cout << "Enter name:";
//	cin >> name;
//	copy_if(l.begin(), l.end(),ostream_iterator <Figure>(cout),FigureName (name));
//	int area;
//	cout << "Enter area:";
//	cin >> area;
//	copy_if(l.begin(), l.end(), ostream_iterator <Figure>(cout), FigureArea(area));
//	
//	system("pause");
//}