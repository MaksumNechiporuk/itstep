#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));

	const int size = 5;
	int arr[size][size];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 30;
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for(int k=0;k<size;k++)
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size-1; j++)
		{
			if (arr[i][j] > arr[i][j+1])
				swap(arr[i][j], arr[i][j + 1]);
		}

	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
		
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}