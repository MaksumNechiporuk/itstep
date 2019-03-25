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
			arr[i][j] = rand() % 30;
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int min = arr[0][0],k,l;
	for (int i = 0; i < strings; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
				k = i;
				l = j;
			}
		}
	
	}
	cout << endl;
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			swap(arr[i][j], arr[k][j]);		
		}
	}
	if (arr[0][0] != min)
	{
		swap(arr[0][0], arr[0][l]);
	}
	for (int i = 0; i < strings; i++)
	{
		for (int j = 0; j < columns; j++)
		{
		
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << min << endl;
	for (int i = 0; i < strings; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
	system("pause");
}
