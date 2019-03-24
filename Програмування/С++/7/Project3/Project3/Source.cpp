#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	srand(time(0));
	int number, number_max = 0,i=0;
	while (i < 100)
	{
		number = rand() % 5000 + 1;
			if (number > number_max)
			{
				number_max = number;

			}
		i++;
	}
	cout << "max number:" << number_max << endl;
	system("pause");
}