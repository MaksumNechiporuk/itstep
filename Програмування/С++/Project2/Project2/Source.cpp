#include<iostream>
using namespace std;
int main()
{
	int weight=70, a[1], day1=11, month1=10, year1=2000, day=15, month=6, year=2015;
	a[0] = 1;
	a[1] = 82;
	cout << "Name:\t\tMaksum\n";
	cout << "Lastname:\tNechiporuk\n";
	cout << "Name:\t\tIvanovich\n";
	cout << "Address:\tVidinskaya 5v kv 68\n";
	cout << "Weight:\t\t"<< weight <<"kg\n";
	cout << "Height:\t\t" << a[0] << "m  " << a[1] << "sm\n";
	cout << "Year:\t\t" << day1 << "\/" << month1 << "\/" << year1 << endl;
	cout << "School finished in   " << day << "\/" << month << "\/" << year << endl;
	system("pause");
}