#include<iostream>
#include<ctime>
#include<iomanip>

	using namespace std;
int a, b, c, d;
void play(int a, int b, int c, int d)
{
	int digit, arr[4], arr1[4];
	int a1, b1, c1, d1, count = 0, count1 = 0;
	for (;;)
	{
		
		cout << "¬ведiть число  ";
		cin >> digit;
		count = 0, count1 = 0;
		a1 = (digit / 1000);
		b1 = (digit % 1000) / 100;
		c1 = (digit % 100) / 10;
		d1 = (digit % 10);
		arr[0] = a1;
		arr[1] = b1;
		arr[2] = c1;
		arr[3] = d1;
		arr1[0] = a;
		arr1[1] = b;
		arr1[2] = c;
		arr1[3] = d;
		for (int i = 0; i < 4; i++)
		{


			if (arr[i] == a || arr[i] == b || arr[i] == c || arr[i] == d)
				count++;
			if (arr[i] == arr1[i])
				count1++;

		}
		cout << count1 << "-кiлькiсть бикiв" << endl << count << "-кiлькiсть корiв  " << endl;
		if (count1 == 4)
		{
			cout << "¬и перемогли\n";
			break;

		}
	}
}

bool perevirka()
{
	int digit = 1000 + rand() % 8999;

	a = (digit / 1000);
	b = (digit % 1000) / 100;
	c = (digit % 100) / 10;
	d = (digit % 10);
	cout << a << b << c << d << endl;
	if (a != b && a != c && a != d && b != c && b != d)
		return true;
	else
		return false;
}

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "ukr");
	for (;;) {

		if (perevirka())
			break;
		else
			perevirka();
	}
	play(a, b, c, d);
	system("pause");
}