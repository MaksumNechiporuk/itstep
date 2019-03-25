#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

	const int size = 50;
	int arr[size], position;
	bool flag = false;
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % size;
	}
	for (int i = 0; i < size; i++)
	{
		cout << "Arr[" << i << "]=" << arr[i] << endl;
	}
	int choice1, choice2;
	for(;;)
	{
	cout << "Select the type of sort:" << endl;
	cout << "Bubble Sort-1" << endl;
	cout << "Insertion Sort-2" << endl<<"Exit-0\n";
	cout << "choice=";
	cin >> choice1;
	if (choice1 == 0)
		break;
	cout << "Sort of maximum to minimum-1" << endl;
	cout << "Sort of minimum to maximum-2" << endl << "choice2=";
	cin >> choice2;
	switch (choice1)
	{
	case 1:
	{
		switch (choice2)
		{
		case 1:
		{
			for (int i = 0; i < size; i++)
			{
				flag = false;
				for (int j = 0; j < size - 1 - i; j++)
				{
					if (arr[j] < arr[j + 1])
					{
						swap(arr[j], arr[j + 1]);
						flag = true;
					}
				}
				if (flag == false)
				{
					cout << i << endl;
					break;

				}
			}
			break;
		}

		case 2:
		{
			for (int i = 0; i < size; i++)
			{
				flag = false;
				for (int j = 0; j < size - 1 - i; j++)
				{
					if (arr[j] > arr[j + 1])
					{
						swap(arr[j], arr[j + 1]);
						flag = true;
					}


				}
				if (flag == false)
				{
					cout << i << endl;
					break;

				}
			}
			break;
		}
		}

	case 2:
	{
		switch (choice2)
		{
		case 1:
		{
			for (int i = 1; i < size; i++)
			{
				position = i;
				for (int j = i - 1; (j >= 0); j--)
				{
					if (arr[j] < arr[position])
					{
						swap(arr[position], arr[j]);
						position--;
					}
					else
						break;
				}
			}
			break;
		}

		case 2:
		{
			for (int i = 1; i < size; i++)
			{
				position = i;
				for (int j = i - 1; (j >= 0); j--)
				{
					if (arr[j] > arr[position])
					{
						swap(arr[position], arr[j]);
						position--;
					}
					else
						break;
				}
			}

			break;
		}
		}

	}
	}
	}
	cout << endl;
	for (int i = 0; i<size; i++)
		cout << "Arr[" << i << "]=" << arr[i] << endl;
}

	system("pause");
}
