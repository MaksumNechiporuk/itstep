#include <iostream>
using namespace std;
int main()
{
	double day, dayminute;
	double const minute = 1440;
	cout << "Enter the number of days\n";
	cin >> day;
	dayminute = day * minute;
	cout << dayminute <<"  minutes"<< endl;
	system("pause");
}
