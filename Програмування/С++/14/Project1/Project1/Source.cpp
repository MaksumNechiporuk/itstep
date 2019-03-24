#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	bool check = false;
	int const size = 20;
	int arr1[size], arr2[size], arr3[size], arr_iteration_sort[3] = {}, position,iteration_find1=0, iteration_find2=0;
	for (int i = 0; i < size; i++)
	{
		arr1[i] = rand() % 100;
		arr2[i] = arr1[i];
		arr3[i] = arr1[i];
	}
	for (int i = 0; i < size; i++)
	{
		check = false;
		for (int j = 0; j < size - 1 - i; j++)//бульбашка
		{
		
			if (arr1[j] > arr1[j + 1])
			{
				swap(arr1[j], arr1[j + 1]);
				check = true;
			}
			arr_iteration_sort[0]++;
		}
		
		if (check == false)
			break;
	}
	for (int i = 0; i < size-1; i++)//алгоритм вибору
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr2[i] > arr2[j])
			{
				swap(arr2[i], arr2[j]);
			}
			arr_iteration_sort[1]++;
		}
	}
	for (int i = 1; i < size; i++)//вставкa
	{
		position =i;
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr3[j] > arr3[position])
			{
				swap(arr3[position], arr3[j]);
				position--;
				check = true;
			}
			else 
				break;
			arr_iteration_sort[2] ++;
		}
		
	}
	for (int i = 0; i < size; i++)
		cout << "arr1[" << i << "]=" << arr1[i] << endl;
	cout << "Number of iteration sorts - " << arr_iteration_sort[0] << endl << endl;
	for (int i = 0; i < size; i++)
		cout << "arr2[" << i << "]=" << arr2[i] << endl;
	cout << "Number of iteration sorts - " << arr_iteration_sort[1] << endl << endl;
	for (int i = 0; i < size; i++)
		cout << "arr3[" << i << "]=" << arr3[i] << endl;
	cout << "Number of iteration sorts - " << arr_iteration_sort[2] << endl << endl;
	int min = arr_iteration_sort[0];
	for (int i = 1; i <3; i++) {
		
		if (arr_iteration_sort[i] < min) 
		{
			min = arr_iteration_sort[i];
	
		}
	}
	if (min == arr_iteration_sort[0]&& min!= arr_iteration_sort[1]&& min != arr_iteration_sort[2])
	{
		cout <<"Buble sort fast" << endl;
	}
	else 	if (min == arr_iteration_sort[1] && min != arr_iteration_sort[0] && min != arr_iteration_sort[2])
	{
		cout << "Select sort fast" << endl;
	}
	else   if (min == arr_iteration_sort[2] && min != arr_iteration_sort[1] && min != arr_iteration_sort[0])
	{
		cout << "Insertion sort fast" << endl;
	}
	else if (arr_iteration_sort[0] == arr_iteration_sort[1] &&  arr_iteration_sort[1]== arr_iteration_sort[2])
	{
		cout << "The number of iterations is the same" << endl;
	}
	cout << endl;
	int number;
	cout << "Search\n";
	cout << "what number do you want to find?\n";
	cin >> number;
	check = false;

	for (int i = 0; i < size; i++)
	{

		if (number == arr1[i])
		{
			cout << "number position " << i << endl;
			check = true;
			break;
		}
		iteration_find1++;
	}
	int s, l=0, r=size-1;

	for (int i=0;;i++)
	{
		iteration_find2++;
		s = (l + r) / 2;
		if (arr1[s] < number)
		{
			l = s+1;
		}
		 else if (arr1[s] > number)
		{
			r = s-1;
		}
		if (arr1[s] == number)
		{
	
			check = true;
			break;
		}

		if (l == r)
		{
			break;
		}
		
	}
	if(check == true)
	cout << "binary search - " << iteration_find2 << endl << "linear search - " << iteration_find1 << endl;
	if (check == false)
		cout << "This number does not exist\n";
	else if (iteration_find1 < iteration_find2)
	{
		cout << "linear search is fast\n";
	}
	else if (iteration_find1 > iteration_find2)
	{
		cout << "binary search is fast\n";
	}
	else if (iteration_find1 == iteration_find2)
	{
		cout << "The number of iterations is the same\n";
	}
	system("pause");
}