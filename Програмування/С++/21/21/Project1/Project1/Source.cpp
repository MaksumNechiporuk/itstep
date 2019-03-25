#include <iostream> 
#include <clocale> 
#include <windows.h> 
#include <time.h> 
using namespace std;

int main()
{
	int size = 5;
	
		cin >> size;
	int *a = new int[size];
	int *arr;
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 20;
		cout << a[i] << "  ";
	}
	int size1;
	for (;;)
	{
		cin>>size1;
		arr = new int[size1];
		
		for (int i = 0; i < size1; i++)
		{
	
			if (i < size)
				arr[i] = a[i];
				
			else
				arr[i] = rand() % 20;
		}
		delete[]a;
		size = size1;
		a = arr;
		for (int i = 0; i < size; i++)
		{
			cout << a[i] << "  ";
		}
	
	}

	system("pause");
}