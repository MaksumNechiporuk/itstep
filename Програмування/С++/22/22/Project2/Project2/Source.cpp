#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;
void zapov(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}
void out(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
    }
	cout << endl;
}
void comparison(int arr[], int arr1[], int size)
{
	int a = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == arr1[i])
		{
			a++;
		}
	}
	cout << "The number of identical items - " << a << endl;
}
void swap(int arr[], int arr1[], int size)
{
	for (int i = 0; i < size; i++)
	{
		swap(arr[i], arr1[i]);
	}
}
void clear(int arr[], int arr1[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
		arr1[i] = 0;

	}
}
int main()
{
	srand(time(0));
	int const size = 10;
	int arr[size],arr1[size];
	zapov(arr, size);
	out(arr, size);
	zapov(arr1, size);
	out(arr1, size);
	comparison(arr, arr1, size);
	cout<< endl;
	swap(arr, arr1, size);
	out(arr, size);
	out(arr1, size);
	clear(arr, arr1, size);
	cout << endl;
	out(arr, size);
	out(arr1, size);
	system("pause");
}