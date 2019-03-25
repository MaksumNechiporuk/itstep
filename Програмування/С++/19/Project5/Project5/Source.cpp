#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));

	const int size = 5;
	int arr[size][size], index1, index2;
int  element = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 50;
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size ; j++)
		{
			if (i == 0 && j == 0)
			{
				if (arr[i][j] > arr[i][j + 1]&& arr[i][j] >arr[i-1][j])
				{
					element = arr[i][j];
					index1 = i;
					index2 = j;
				}
				
			}
			if (j != size - 1 && j != 0 && i != 0 && i != size - 1)
			{
				if (arr[i][j] > arr[i][j + 1] && arr[i][j] > arr[i+1][j] && arr[i][j] > arr[i][j - 1]&& arr[i][j] > arr[i-1][j])
				{
					element = arr[i][j];
					index1 = i;
					index2 = j;
				
				}
			}
			if (j == 0 && i >= 1 && i != size - 1)
			{
				if (arr[i][j] > arr[i][j + 1] &&  arr[i][j]> arr[i+1][j] &&arr[i][j]> arr[i-1][j])
				{
					element = arr[i][j];
					index1 = i;
					index2 = j;
					
				}
			}
			if (j == size - 1&&i!=size-1&&i!=0)
			{
				if (arr[i][j] > arr[i-1][j] &&arr[i][j]> arr[i+1][j] && arr[i] [j]> arr[i][j-1])
				{
					element = arr[i][j] ;
					index1 = i;
					index2 = j;
					
				}
			}
			if (i == 0 && j >= 1&&j!=size-1)
			{
				if (arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i + 1][j] && arr[i][j] > arr[i][j - 1])
				{
					element = arr[i][j];
					index1 = i;
					index2 = j;

				}
			}
			if (i == size - 1 && j == 0)
			{
				if (arr[i][j] > arr[i][j + 1] && arr[i][j] > arr[i + 1][j])
				{
					element = arr[i][j];
					index1 = i;
					index2 = j;
				}
			}
			if (i == size - 1 && j == size-1)
			{
				if (arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i - 1][j])
				{
					element = arr[i][j];
					index1 = i;
					index2 = j;
				}
			}
			if (i == 0 && j == size - 1)
			{
				if (arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i + 1][j])
				{
					element = arr[i][j];
					index1 = i;
					index2 = j;
				}
			}
			if (i == size-1 && j != size - 1&&j!=0)
			{
				if (arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i - 1][j] && arr[i][j] > arr[i ][j+1])
				{
					element = arr[i][j];
					index1 = i;
					index2 = j;
				}
			}
			
		}
	}

	cout << "index elementa  - " << index1 << " " << index2 << endl;
	cout << arr[index1][index2]<<endl;

	system("pause");
}