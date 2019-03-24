#include<iostream>
#include<ctime>

using namespace std;
void Show(int arr[], int size);
void Fill(int arr[],int size)
{
	for (int i = 0; i < size; i++)
	{
	arr[i] = rand() % 15;
	}
	Show(arr,size);
}
void Show(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}
bool  func1(int a, int b)
{
	return a > b;
		
}
void func(int &a, int &b)
{
	int temp;
	if (func1(a,b))
	{
		temp = a;
		a = b;
		b = temp;
	}
}
void Sort(int arr[], int size)
{
	for (int i = 0; i < size-1;i++)
	{
		for (int j = 0; j < size-1-i; j++)
		{
			func(arr[j] , arr[j + 1]);
			
		}
	}
	Show(arr, size);
}
int main()  
{
	srand(time(0));

	int arr[10];

	Fill(arr, 10);
	Sort(arr, 10);


	system("pause");
}