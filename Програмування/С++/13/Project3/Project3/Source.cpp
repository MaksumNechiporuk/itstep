#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	bool check = false;
	int const size = 6;
	int arr1[size], arr2[size], iteration_arr1 = 0, iteration_arr2 = 0;
	for (int i = 0; i < size; i++)
	{
		arr1[i] = rand() % 20;
		arr2[i]=arr1[i];

	}
	for (int i = 0; i < size; i++)
	{
		check = false;
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr1[j] > arr1[j + 1])
			{
				swap(arr1[j], arr1[j + 1]);
				check = true;	
			}
		}
		iteration_arr1++;
		if (check == false)
			break;
	}
	cout << endl;
	for (int i = 0; i < size ; i++)
	{
		check = false;
		for (int j = size-1; j >i; j--)
		{
			if (arr2[j - 1] > arr2[j])
			{
				swap(arr2[j - 1], arr2[j]);
				check = true;
				
			}
		
		}
		iteration_arr2++;
		if (check == false)
			break;
	}
	for (int i = 0; i < size; i++)
		cout << "arr1[" << i << "]=" << arr1[i] << endl;
	cout << "Number of iteration sorts (stones) - " << iteration_arr1 << endl;
	for (int i = 0; i < size; i++)
		cout << "arr2[" << i << "]=" << arr2[i] << endl;
	cout << "Number of iteration sorts (bubble) - " << iteration_arr2<<endl<< endl;
	if (iteration_arr1 < iteration_arr2)
		cout << "The stones method was faster\n\n";
	else 	if (iteration_arr1 > iteration_arr2)
		cout << "The bubble method was faster\n\n";
	else if (iteration_arr1 == iteration_arr2)
		cout << "The number of iterations is the same\n\n";
	system("pause");
}