#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));
	int strings=10, columns=10;

	int **arr = new int *[strings];
	for (int i = 0; i < strings; i++)
	{
		arr[i] = new int[columns];
	}
	int digit = 1;
	for (int i = 0; i < strings; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] =digit;
			cout << setw(3) << arr[i][j] << " ";
			digit++;
		}
		cout << endl;
	}
	system("pause");
}