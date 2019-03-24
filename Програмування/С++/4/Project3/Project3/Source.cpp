#include <iostream>
using namespace std;
int main()
{
	int  day, day1,month, year, month1, year1;
	cout << "Enter the date of birth of the first person (day month year):\n ";
	cin >> day >> month >> year;
	cout << "Enter the date of birth of the second person (day month year):\n ";
	cin >> day1 >> month1 >> year1;
	cout << "date of birth of the first person - " << day << "\/"<< month <<"\/" << year<<endl;
	cout << "date of birth of the second person - " << day1 << "\/" << month1 << "\/" << year1 << endl;
	day = day + (month * 30) + (year * 365);
	day1 = day1 + (month1 * 30) + (year1 * 365);

	if (day1 > day)
		cout << "The first person is older\n";
	else if (day1 < day)
		cout << "The second person is older\n";
	else
		cout << "Two people have the same age\n";
	system("pause");
}