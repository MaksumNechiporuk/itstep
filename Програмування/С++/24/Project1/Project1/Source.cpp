#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;
template <typename T>
void fill(T arr[][5], int size);
template <typename T>
void func(T arr[][5], int size);
template <typename T>
void out(T arr[][5], int size);
template <typename T>
void out_diagonal(T arr[][5], int size);
template <typename T>
void max(T arr[][5], int size);
template <typename T>
void clear_arr(T arr[][5], int size);
template <typename T>
void clear_arr(T arr[][5], int size)
{
	for (int i = 0; i < size ; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = 0;
		}

	}
}
template <typename T>
void func(T arr[][5], int size)
{
	for (int i = 0; i<size/2; i++)
	{
		for (int j = 0; j < size; j++)
		{
			swap (arr[i][j],arr[size-1-i][j]);
		}

	}

}

template <typename T>
void max(T arr[][5], int size)
{
	T max = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (max < arr[i][j])
				max = arr[i][j];
		}

	}
	cout << "max=" << max << endl;

}
template <typename T>
void out_diagonal(T arr[][5], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if(i==j)
			cout<< arr[i][j] << "  ";
		}
	
	}
	cout << endl;

}
template <typename T>
void out(T arr[][5], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout<<setw(4)<<arr[i][j]<<"  ";
		}
		cout << endl;
	}
	cout << endl;

}
template <typename T>
void fill(T arr[][5],int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

}

int main()
{
	srand(time(0));
	int const size = 5;
	int arr[size][size];
	fill(arr, size);
	out(arr, size);
	out_diagonal(arr, size);
	max(arr, size);
	func(arr, size);
	out(arr, size);
	clear_arr(arr, size);
	out(arr, size);
	system("pause");
}