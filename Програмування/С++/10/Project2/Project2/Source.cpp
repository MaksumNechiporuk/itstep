#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int const size = 50;
	int  arr[size];
	int min=0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = 1+rand() % 50;
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}
	min = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min&&arr[i]%2!=0)
		{
			min = arr[i];
		}
	}
	cout << "min=" << min << endl;

	system("pause");
}