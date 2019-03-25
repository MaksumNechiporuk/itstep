#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));

	const int size = 5;
	int arr[size][size], index1,index2,index3,index4;
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
	
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-2; j++)
		{
			if (i == 0 && j == 0)
			{
				if (arr[i][j] + arr[i][j + 1] > arr[i][j + 1] + arr[i][j + 2])
				{
					sum = arr[i][j] + arr[i][j + 1];
					index1 = i;
					index2 = j;
					index3 = i;
					index4 = j + 1;
				}
				else if (arr[i][j] + arr[i][j + 1] < arr[i][j + 1] + arr[i][j + 2])
				{
					sum = arr[i][j + 1] + arr[i][j + 2];
					index1 = i;
					index2 = j + 1;
					index3 = i;
					index4 = j + 2;
				}
				if (arr[i][j] + arr[i + 1][j] < arr[i][j + 1] + arr[i + 1][j + 1])
				{
					sum = arr[i][j + 1] + arr[i + 1][j + 1];
					index1 = i;
					index2 = j + 1;
					index3 = i + 1;
					index4 = j + 1;
				}
				else if (arr[i][j] + arr[i + 1][j] > arr[i][j + 1] + arr[i + 1][j + 1])
				{
					sum = arr[i][j] + arr[i + 1][j];
					index1 = i;
					index2 = j + 1;
					index3 = i + 1;
					index4 = j + 1;
				}
			}
			if (j!=size-1&&j!=0&&i!=0&&i!=size-1)
			{
				if (arr[i][j] + arr[i][j + 1] > sum && arr[i][j] + arr[i][j + 1] > arr[i][j + 1] + arr[i][j + 2])
				{
					sum = arr[i][j] + arr[i][j + 1];
					index1 = i;
					index2 = j;
					index3 = i;
					index4 = j + 1;
				}
				else if (arr[i][j] + arr[i][j + 1] < arr[i][j + 1] + arr[i][j + 2] && sum < arr[i][j + 1] + arr[i][j + 2])
				{
					sum = arr[i][j + 1] + arr[i][j + 2];
					index1 = i;
					index2 = j + 1;
					index3 = i;
					index4 = j + 2;
				}
				if (arr[i][j] + arr[i + 1][j] < arr[i][j + 1] + arr[i + 1][j + 1] && sum < arr[i][j + 1] + arr[i + 1][j + 1])
				{
					sum = arr[i][j + 1] + arr[i + 1][j + 1];
					index1 = i;
					index2 = j + 1;
					index3 = i + 1;
					index4 = j + 1;
				}
				else if (arr[i][j] + arr[i + 1][j] > sum && arr[i][j] + arr[i + 1][j] > arr[i][j + 1] + arr[i + 1][j + 1])
				{
					sum = arr[i][j] + arr[i + 1][j];
					index1 = i;
					index2 = j + 1;
					index3 = i;
					index4 = j;
				}
				
					if (arr[i][j] + arr[i][j + 1] > sum && arr[i][j] + arr[i][j + 1] > arr[i][j] + arr[i][j - 1])
					{
						sum = arr[i][j] + arr[i][j + 1];
						index1 = i;
						index2 = j;
						index3 = i;
						index4 = j + 1;
					}
					else 	 if (arr[i][j] + arr[i][j - 1] > sum && arr[i][j] + arr[i][j - 1] > arr[i][j] + arr[i][j + 1])
					{
						sum = arr[i][j] + arr[i][j - 1];
						index1 = i;
						index2 = j;
						index3 = i;
						index4 = j - 1;
					}
			
			
			}
			if (j == 0&&i>=1&&i!=size-1)
			{
				if (arr[i][j] + arr[i][j + 1] >sum&& arr[i][j] + arr[i][j + 1] > arr[i][j + 1] + arr[i][j + 2])
				{
					sum = arr[i][j] + arr[i][j + 1];
					index1 = i;
					index2 = j;
					index3 = i;
					index4 = j + 1;
				}
				else if (arr[i][j + 1] + arr[i][j + 2] > sum&& arr[i][j] + arr[i][j + 1] < arr[i][j + 1] + arr[i][j + 2])
				{
					sum = arr[i][j + 1] + arr[i][j + 2];
					index1 = i;
					index2 = j + 1;
					index3 = i;
					index4 = j + 2;
				}
				if (arr[i][j] + arr[i + 1][j] < arr[i][j + 1] + arr[i + 1][j + 1] && sum  < arr[i][j + 1] + arr[i + 1][j + 1])
				{
					sum = arr[i][j + 1] + arr[i + 1][j + 1];
					index1 = i;
					index2 = j + 1;
					index3 = i + 1;
					index4 = j + 1;
				}
				else if (arr[i][j] + arr[i + 1][j] > arr[i][j + 1] + arr[i + 1][j + 1] && arr[i][j] + arr[i + 1][j]> sum )
				{
					sum = arr[i][j] + arr[i + 1][j];
					index1 = i;
					index2 = j + 1;
					index3 = i + 1;
					index4 = j + 1;
				}
				if (arr[i][j] + arr[i - 1][j] < arr[i][j+1] + arr[i - 1][j + 1] && sum < arr[i][j + 1] + arr[i - 1][j + 1])
				{
					sum = arr[i][j + 1] + arr[i - 1][j + 1];
					index1 = i;
					index2 = j+1 ;
					index3 = i - 1;
					index4 = j +1;
				}
				else 	if (arr[i][j] + arr[i - 1][j] > arr[i][j + 1] + arr[i - 1][j + 1] && sum < arr[i][j] + arr[i - 1][j])
				{
					sum = arr[i][j] + arr[i - 1][j];
					index1 = i;
					index2 = j;
					index3 = i - 1;
					index4 = j;
				}
			}
			if (j == size - 1)
			{
				if (arr[i][j] + arr[i][j - 1] > arr[i][j - 1] + arr[i - 1][j - 1] && arr[i][j] + arr[i][j - 1] > sum)
				{
					sum = arr[i][j] + arr[i][j - 1];
					index1 = i;
					index2 = j;
					index3 = i;
					index4 = j-1;
				}
				else if (arr[i][j] + arr[i][j - 1] < arr[i][j - 1] + arr[i - 1][j - 1] && arr[i][j - 1] + arr[i - 1][j - 1] > sum)
				{
					sum = arr[i][j - 1] + arr[i - 1][j - 1];
					index1 = i;
					index2 = j-1;
					index3 = i-1;
					index4 = j - 1;
				}
			}
			if (i == 0 && j >= 1)
			{
				if (arr[i][j] + arr[i][j + 1] > arr[i][j + 1] + arr[i][j + 2]&& arr[i][j] + arr[i][j + 1]>sum)
				{
					sum = arr[i][j] + arr[i][j + 1];
					index1 = i;
					index2 = j;
					index3 = i;
					index4 = j + 1;
				}
				else if (arr[i][j] + arr[i][j + 1] < arr[i][j + 1] + arr[i][j + 2]&& arr[i][j + 1] + arr[i][j + 2]>sum)
				{
					sum = arr[i][j + 1] + arr[i][j + 2];
					index1 = i;
					index2 = j + 1;
					index3 = i;
					index4 = j + 2;
				}
				if (arr[i][j] + arr[i + 1][j] < arr[i][j + 1] + arr[i + 1][j + 1]&& arr[i][j + 1] + arr[i + 1][j + 1]>sum)
				{
					sum = arr[i][j + 1] + arr[i + 1][j + 1];
					index1 = i;
					index2 = j + 1;
					index3 = i + 1;
					index4 = j + 1;
				}
				else if (arr[i][j] + arr[i + 1][j] > arr[i][j + 1] + arr[i + 1][j + 1]&& arr[i][j] + arr[i + 1][j]>sum)
				{
					sum = arr[i][j] + arr[i + 1][j];
					index1 = i;
					index2 = j + 1;
					index3 = i + 1;
					index4 = j + 1;
				}
				if (arr[i][j] + arr[i][j - 1] > arr[i + 1][j] + arr[i + 1][j - 1] && arr[i][j] + arr[i][j - 1] > sum)
				{
					sum = arr[i][j] + arr[i][j - 1];
					index1 = i;
					index2 = j ;
					index3 = i ;
					index4 = j -1;
				}
				else 	if (arr[i][j] + arr[i][j - 1] < arr[i + 1][j] + arr[i + 1][j - 1] && arr[i + 1][j] + arr[i + 1][j - 1] > sum)
				{
					sum = arr[i + 1][j] + arr[i + 1][j - 1];
					index1 = i+1;
					index2 = j;
					index3 = i+1;
					index4 = j - 1;
				}
			}
		}
	}
	if (index1 >= index3&&index2 >= index4)
	{
		cout << "index elementa 1 - " << index3 << " " << index4 << endl << "index elementa 2 - " << index1 << " " << index2 << endl;
		cout << arr[index3][index4] << endl << arr[index1][index2] << endl << "sum=" << sum << endl;
	}
	else if (index1 <= index3&&index2 <= index4)
	{

		cout << "index elementa 1 - " << index1 << " " << index2 << endl << "index elementa 2 - " << index3 << " " << index4 << endl;
		cout << arr[index1][index2] << endl << arr[index3][index4] << endl << "sum=" << sum << endl;
	}
	
	

	system("pause");
}