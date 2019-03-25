#include<iostream>
#include<ctime>
#include<Windows.h>

using namespace std;

void menu();
bool c = false;
int size1 = 10;
void show(int arr[], int size);
int *arr = new int[size1];
void input_position(int *arr,int &size)
{
	int *arr1 = new int[size1+1];
	int t, p;
	cout << "Enter position ";
	cin >> p;
	cout << "Enter  ";
	cin >> t;
	arr1[p] = t;
	for (int i = 0, j = 0; i < size1+1; j++, i++)
	{
		if (p == i)
		{
			i++;
		}
		else
		arr1[i] = arr[j];
		cout << arr1[i] << "  ";
	}
	Sleep(5000);
	size1++;
	menu();
}
void input_beg()
{
	
		int *arr1 = new int[size1+1];
		int t;
		cout << "Enter ";
		cin >> t;
		arr1[0] = t;
		for (int i = 0; i < size1; i++)
		{
			arr1[i+1] = arr[i];
			
		}
		delete arr;
		int *arr = new int[size1 + 1];
		for (int i = 0; i < size1 + 1; i++)
		{
			arr[i] = arr1[i];
			cout << arr[i] << "  ";
		}
	
		size1++;
		delete arr1;
		menu();
	
}
void show(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";

	}
	Sleep(3000);
}
int *input_end(int *arr, int &size)
{
	int *arr1 = new int[size+1];
	int t;
	cout << "Enter ";
	cin >> t;
	arr1[size] = t;
	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr[i];
	
	}

	size++;
	show(arr1, size);
	return arr1;

}
void fill_arr(int arr[])
{
	for (int i = 0; i < size1; i++)
	{
		arr[i] = rand() % 20;
		cout << arr[i] << "  ";
	}
	Sleep(5000);
	menu();

}
void menu()
{
	system("cls");
	cout << "1. Заповнити\n";
	cout << "2. Видалити\n";
	cout << "3. Вставити в початок\n";
	cout << "4. Вставити в кінець\n";
	cout << "5. Вставити по індексу\n";
	int a;

	cin >> a;
	switch (a)
	{
	case 1:
	{
		c = true;
		fill_arr(arr);
		system("cls");
		break;
	}
	case 2:
	{
		delete arr;
		system("cls");
		break;
	}
	case 3:
	{
		if (c == true)
		{
			input_beg();
		}	system("cls");
		break;
	}
	case 4:
	{
		if (c == true)
		{
			arr=input_end(arr, size1);
		}
		system("cls");
		break;
	}
	case 5:
	{
		if (c == true)
		{
			input_position(arr,size1);
		}
		system("cls");
		break;
	}
	}
}
int main()
{
srand(time(0));
setlocale (LC_ALL, "ukr");
menu();
	system("pause");
}