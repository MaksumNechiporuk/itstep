#include<iostream>
using namespace std;
int main()
{
	int const size = 10;
	int arr[size],p;
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "]=";
		cin >> arr[i];
	}
	for (int i = 1; i < size; i++)
	{
		p = i;
		for (int j = i - 1; (j >= 0); j--)
		{
			if (arr[j] > arr[p])
			{
				swap(arr[p], arr[j]);
				p--;
			}
			else
				break;
		}
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}
	system("pause");
}