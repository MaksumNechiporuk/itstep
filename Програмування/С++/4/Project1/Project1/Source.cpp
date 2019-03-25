#include<iostream>
using namespace std;
int main()
{
	int digit, a, b, c, d;
	cout << "Enter digit 1 - ";
	cin >> digit;

	a= digit / 1000;
	b= ((digit % 1000) / 100);
	c = (digit % 100) / 10;
	d= (digit % 10);
	if (a + b == c + d)
		cout << "This number is happy\n";
	else
		cout << "this number is unlucky\n";
	cout << "Enter digit 2 - ";
	cin >> digit;

	a = digit / 1000;
	b = ((digit % 1000) / 100);
	c = (digit % 100) / 10;
	d = (digit % 10);
	if (a + b == c + d)
		cout << "This number is happy\n";
	else
		cout << "this number is unlucky\n";
	cout << "Enter digit 3 - ";
	cin >> digit;

	a = digit / 1000;
	b = ((digit % 1000) / 100);
	c = (digit % 100) / 10;
	d = (digit % 10);
	if (a + b == c + d)
		cout << "This number is happy\n";
	else
		cout << "this number is unlucky\n";

	system("pause");
}
