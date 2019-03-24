#include <iostream>
using namespace std;
int main()
{
	double meters, kilometers, centimeters;
	double const a = 1000.00,b=100.00;
	cout << "Enter meters\n";
	cin >> meters;
	centimeters = meters *b;
	kilometers = meters /a;
	cout <<"kilometers="<<kilometers<<"km"<< endl;
	cout <<"centimeters="<<centimeters <<"cm"<< endl;
	system("pause");
}
