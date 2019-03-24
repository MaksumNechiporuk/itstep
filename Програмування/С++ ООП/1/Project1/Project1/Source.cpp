#include<iostream>

using namespace std;

class Fraction
{
public:
	void show()
	{
		normalize();
		cout << integer << " " << up << "/" << down << endl;
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
		wrong_fraction(up, down, integer);
	}
	void wrong_fraction(int &up, int &down, int &integer)
	{
		up = down * integer + up;
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
	int integer;

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
	friend Fraction operator + (Fraction &a, int b);
};
ostream& operator << (ostream& out, Fraction& a)
{
	a.show();
	return out;
}
istream& operator >> (istream &s, Fraction &v)
	{
	v.FillFraction();
	return s;
	}
int gcd(int a, int b)
{
	int denominator1 = a;
	int denominator2 = b;
	int i;
	for (i = 1; ; i++)
	{
		if ((i%denominator1 == 0) && (i%denominator2 == 0))
			break;
	}
	return i;
}
void common_denominator(Fraction &a, Fraction &b, int denominator = 0)
{
	denominator = gcd(a.down, b.down);
	int ups = denominator / a.down;
	a.up *= ups;
	ups = denominator / b.down;
	b.up *= ups;
	a.down = denominator;
	b.down = denominator;
}
void correct_fraction(Fraction &a)
{
	int drib = a.up / a.down;
	a.integer = drib;
	a.up = a.up % a.down;
	
}
Fraction operator + (Fraction &a, Fraction &b)
{
	Fraction res;

	if (a.down == b.down)
	{
		res.down = a.down;
		res.up = a.up + b.up;
	}
	a.normalize();
	correct_fraction(res);
	return res;
}
Fraction operator + (Fraction &a, int b)
{
	correct_fraction(a);
	a.integer = a.integer + b;
	a.normalize();

	return a;
}
void Addition()
{
	int c;
	cout << "Addition\n1.Add fraction to the fraction\n2.Add a number to a fraction\n";
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
		Fraction res = a + b;
		cout << "res=" << res << endl;;
		break;
	}
	case 2:
	{
		Fraction a;
		int intg;
		cout << "Enter number ";
		cin >> intg;
		cin >> a;
		Fraction res = a + intg;
		cout << "res=" << res << endl;;
		break;
	}
	}
}
void menu()
{
	int c;
	cout << "You want to execute\n1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n";
	cout << "Your choice________\b\b\b";
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
		break;
	}
	case 3:
	{
		break;
	}
	case 4:
	{
		break;
	}
	}
}
int main()
{
	menu();
	
	system("pause");
}