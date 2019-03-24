#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int const size = 50;
	char arr[size];
	int p;

	for (int i = 0; i < size; i++)
	{
		arr[i] = 65 + rand() % 26;
	}
	for (int i = 1; i < size; i++)
	{
		p = i;
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				p--;
			}
			else
				break;
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}
	system("pause");
}