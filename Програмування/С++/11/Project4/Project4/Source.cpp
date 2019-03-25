#include<iostream>
#include<ctime>;
using namespace std;
int main()
{
	srand(time(0));
	int arr[20],number,b=0,max=0,max_digit;
	for (int i = 0; i < 20; i++)
	{
		arr[i] = rand() % 20;
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}

	for (int i = 0; i < 20; i++)
	{
		b = 0;
		for (int j = 1; j < 20; j++)
		{
			if (arr[j] == arr[i])
			{
				b++;
			}
		}
		if (b > max)
		{
			max = b;
			max_digit = arr[i];
		}
	}
	cout << "max=" << max << endl << "max_digit=" << max_digit << endl;
	system("pause");
}