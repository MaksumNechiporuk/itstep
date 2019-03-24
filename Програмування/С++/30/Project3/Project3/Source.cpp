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
			arr[i][j] = rand() % 10;
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	int sum_main = 0, sum_unmain = 0;
	for (int i = 0; i < strings; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (i == j)
			{
				sum_main += arr[i][j];
			}
			if (columns - i - 1 == j)
			{
				sum_unmain += arr[i][j];
			}
		}
	}
	char symbol;
	if (sum_main < sum_unmain)
	{
	
		symbol = '<';
	}
	else if (sum_main > sum_unmain)
		symbol = '>';
	else
		symbol = '=';

	cout << "sum_main" << symbol << "sum_unmain" << endl;
		cout << sum_main <<symbol << sum_unmain << endl;
	
	system("pause");
}