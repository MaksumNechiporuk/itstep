
#include <time.h>
#include <iostream>
using namespace std;
int main()
{
	srand(time(0));
	int digit, number, i = 0;
	clock_t timer;
	digit = rand() % 500 + 1;
	cout << "Game \"Guess the number\"\n";
	cout << "If you want stop game enter 0\n";
	timer = clock();
	do
	{
		cout << "Enter number\t";
		cin >> number;
		if (number == 0)
		{
			cout << "Game over\n";
		}
		else if (digit<number)
		{
			cout << "Your number bigger\n";
		}
		else if (digit>number)
		{
			cout << "Your number smaller\n";
		}
		i++;
	} while (number != 0 && number != digit);
	timer = clock() - timer;
	if (number == digit)
	{
		cout << "You win!!!:)\n";
	}
	cout << "Attempts=" << i << endl << "Time=" << timer / 1000 << endl;
	system("pause");
}