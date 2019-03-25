#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));

	const int size = 3;
	int arr[size][size], count = 0;
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 10;
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int index1,index2, max = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			count = 0;
			int digit = arr[i][j];
			for (int l = 0; l < size; l++)
			{	
				for (int k = 0; k < size; k++)
				{
					if (arr[l][k] == digit)
					{
						count++;
						
					}
				}
		}
			if (count > max)
			{
				max = count;
				index2 = j;
				index1 = i;
			}
		}
		}
	
	cout << " number = " << arr[index1][index2] << endl;


	system("pause");
}