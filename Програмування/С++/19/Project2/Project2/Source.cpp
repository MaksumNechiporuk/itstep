#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));

	const int size = 5;
	int arr[size][size],count=0;
	float sum=0;
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
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (i==j )
				{
			
					count++;
					sum += arr[i][j];
				}
				 if (j == size - i - 1)
				{
			
					count++;
					sum += arr[i][j];
				}
			}

		}

		cout <<"Sered_aruf="<< sum / count << endl;
	system("pause");
}