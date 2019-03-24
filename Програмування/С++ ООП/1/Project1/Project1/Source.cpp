#include<iostream>

using namespace std;
void menu();
class Fraction
{
public:
	void show()
	{
		
		cout << integer<<" "<<up << "/" << down;
	}
	void FillFraction()
	{
		cout << "Enter integer ";
		cin >> integer;
		cout << "Enter up ";
		cin >> up;
		cout << "Enter down ";
		cin >> down;
		show();
		normalize();
		wrong_fraction( up, down, integer);
	}
	void wrong_fraction(int &up, int &down, int &integer)
	{
		up = down * integer + up;
		integer = 0;
	}
	int gcd(int a, int b) {
		int t;
		while (b != 0) {
			t = b;
			b = a % b;
			a = t;
		}
		return a;
	}
	
private:
	
	int  up;
	int down;
	int integer=0;

	void normalize()
	{
			if (down == 0)
			{
				cout << "Error down = 0\n";
				exit;
			}
			else
			{
		int divider = gcd(up, down);
		up /= divider;
		down /= divider;
	
	}

	}
	friend void common_denominator(Fraction &a, Fraction &b, int denominator);
	friend	Fraction operator + (Fraction &a, Fraction &res);
	friend void correct_fraction(Fraction &a);
	friend Fraction operator + (Fraction &a, int &b);
	friend	Fraction operator -(Fraction &a, Fraction &res);
	friend Fraction operator - (Fraction &a, int &b);
	friend Fraction operator / (Fraction &a, Fraction &b);
	friend Fraction operator * (Fraction &a, Fraction &b);
	friend Fraction operator * (Fraction &a, int b);
	friend Fraction operator > (Fraction &a, Fraction &b);
};
Fraction operator * (Fraction &a, int b)
{
	a.up=a.up*b;
	correct_fraction(a);
	return a;

}
ostream& operator << (ostream& out, Fraction& a)
{
	a.show();
	cout << endl;
	return out;
}
istream& operator >> (istream &s, Fraction& a)
{
	a.FillFraction();
	cout << endl;
	return s;
}
int gcd(int a, int b)
{
	int denominator1 = a;
	int denominator2 = b;
	int i;
	for ( i = 1; ; i++)
	{
			if ( (i%denominator1==0) && (i%denominator2==0))
			break;		
	}
	return i;
}
void common_denominator(Fraction &a, Fraction &b, int denominator=0)
{
	denominator=gcd(a.down, b.down);
	int ups = denominator / a.down;
	a.up*= ups;
	ups =denominator/ b.down ;
	b.up *= ups;
	a.down = denominator;
	b.down = denominator;
}
void correct_fraction(Fraction &a)
{
	int drib =  a.up/a.down;
	a.integer = drib;
	a.up = a.up % a.down;

}
Fraction operator > (Fraction &a, Fraction &b)
{
	correct_fraction(a);
	correct_fraction(b);
	common_denominator(a,b);
	if(a.up>b.up)
	cout << a << ">" << b << endl;
	else if (a.up < b.up)
	cout << a << "<" << b << endl;
	return a;
}
Fraction operator + (Fraction &a, Fraction &b)
{
	Fraction res;
	
	if (a.down == b.down)
	{
		res.down = a.down;
		res.up = a.up + b.up;
	}
	correct_fraction(res);
	return res;
}
Fraction operator + (Fraction &a, int &b)
{
	a.integer = a.integer + b;

	return a;
}
Fraction operator - (Fraction &a, Fraction &b)
{
	Fraction res;

	if (a.down == b.down)
	{
		res.down = a.down;
		res.up = a.up - b.up;
	}
	correct_fraction(res);
	return res;
}
Fraction operator - (Fraction &a, int &b)
{
	a.integer = a.integer - b;

	return a;
}
Fraction operator / (Fraction &a, Fraction &b)
{
	Fraction res;

	swap(b.up, b.down);

	res = a * b;
	res.normalize();
	return res;
}
Fraction operator * (Fraction &a, Fraction &b)
{
	Fraction res;
	res.up = a.up*b.up;
	res.down = a.down*b.down;
	correct_fraction(res);
	return res;
}
void Addition()
{
	cout << "1.Add fraction to the fraction\n2.Add  number to  fraction\n";
	int c;
	cin >> c;
	
	switch (c)
	{
	case 1:
	{

		Fraction a;
		Fraction b;
		cin>>a;
		cin>>b;
		common_denominator(a, b);
		Fraction c = a + b;
		cout << "res=" << c << endl;
		break;
	}
	case 2:
	{

		Fraction a;
		cin >> a;
		cout << "Enter number ";
		int number;
		cin >> number;
		correct_fraction(a);
		a = a + number;
		cout << "res=" << a << endl;;
		break;
	}
	}
	system("pause");
	system("cls");
	menu();
}
void Subtraction()
{
	cout << "1.Subtract fraction to the fraction\n2.Subtract  number to  fraction\n";
	int c;
	cin >> c;

	switch (c)
	{
	case 1:
	{

		Fraction a;
		Fraction b;
		cin >> a;
		cin >> b;
		common_denominator(a, b);
		Fraction c = a - b;
		cout << "res=" << c << endl;
		break;
	}
	case 2:
	{

		Fraction a;
		cin >> a;

		cout << "Enter number ";
		int number;
		cin >> number;
		correct_fraction(a);
		a = a - number;
		cout << "res=" << a << endl;;
		break;
	}
	}
	system("pause");
	system("cls");
	menu();
}
void Division()
{
	cout << "1.Divide fraction to the fraction\n2.Divide  number to  fraction\n";
	int c;
	cin >> c;

	switch (c)
	{
	case 1:
	{

		Fraction a;
		Fraction b;
		cin >> a;
		cin >> b;
		cout << "a=" << a<<endl;
		cout << "b=" << b<<endl;
		
		Fraction c;
		correct_fraction(c);
		c = a / b;
		
		cout << "res=" << c << endl;
		break;
	}
	case 2:
	{

		Fraction a;
		cin >> a;
		cout << "Enter number ";
		int number;
		cin >> number;
		correct_fraction(a);
		a = a - number;
		cout << "res=" << a << endl;;
		break;
	}
	}
	system("pause");
	system("cls");
	menu();
}
void Multiplication()
{
	cout << "1.Multiply fraction to the fraction\n2.Multiply  number to  fraction\n";
	int c;
	cin >> c;

	switch (c)
	{
	case 1:
	{

		Fraction a;
		Fraction b;
		cin >> a;
		cin >> b;

		Fraction c = a * b;
		cout << "res=" << c << endl;
		break;
	}
	case 2:
	{

		Fraction a;
		cin >> a;
		cout << "Enter number ";
		int number;
		cin >> number;
		a = a * number;
		cout << "res=" << a << endl;;
		break;
	}
	}
	system("pause");
	system("cls");
	menu();
}
void menu()
{
	cout << "You want to execute\n1.Addition\n2.Multiplication\n3.Division\n4.Subtraction\n5.comparison of fractions\n6.Exit\n";
	int c;
	cin >> c;
	switch (c)
	{
	case 1: 
	{
		Addition();
		break;
	}
	case 2:
	{
		Multiplication();
		break;
	}
	case 3:
	{
		Division();
		break;
	}
	case 4:
	{
		Subtraction();
		break;
	}
	case 5:
	{
		Fraction a, b;
		cin >> a >> b;
		a > b;
		break;
	}
	}
}
int main()
{
	menu();

	system("pause");
}