#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));
	int strings, columns;
	cout << "size=";
	cin >> strings;
	cout << "size1=";
	cin >> columns;
	int **arr = new int *[strings];

	for (int i = 0; i < strings; i++)
	{
		arr[i] = new int[columns];
	}

	for (int i = 0; i < strings; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = rand() %10;
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int **arr1 = new int *[strings];
	for (int i = 0; i < strings; i++)
	{
		arr1[i] = new int[columns];
	}
	for (int i = 0,k=strings-1; i < strings;k--, i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr1[i][j] = arr[k][j];
		}
	}
	for (int i = 0; i < strings; i++)
	{
		for (int j = 0; j < columns; j++)
		{
		cout << setw(3) << arr1[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}
