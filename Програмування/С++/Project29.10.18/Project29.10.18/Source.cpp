#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{

	/*int sum = 0;
	for (int i = 0; i < strings; i++)
	{
	for (int j = 0; j < columns; j++)
	{
	if (i >= j)
	{
	sum += arr[i][j];
	}
	}
	}
	cout << sum << endl;*/

	srand(time(0));
	int strings=8, columns=8;
	//cout << "size=";
	//cin >> strings;
	//cout << "size1=";
	//cin >> columns;
	char **arr = new char *[strings];
	for (int i = 0; i < strings; i++)
	{
		arr[i] = new char[columns];
	}
	int h = 1 + rand() % (strings - 1), k = 1 + rand() % (columns - 1);
	arr[h][k] = '0';
	for (int i = 0; i < strings; i++)
	{
		for (int j = 0; j < columns; j++)
		{

			if (h - k == i - j && k!=j&&h!=i)
				arr[i][j] = '*';
			 if (h + k == i + j && k != j && h != i)
				arr[i][j] = '*';
		}
	}

	
	for (int i = 0; i < strings; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	system("pause");
}