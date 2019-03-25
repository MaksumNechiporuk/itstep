#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	bool check = false;
	int const size = 20;
	int arr1[size], arr2[size],iteration_arr1=0,iteration_arr2=0;
	for (int i = 0; i < size; i++)
	{
		arr1[i] = rand() % 100;
		arr2[i] = rand() % 100;
	}
	for (int i = 0; i < size; i++)
	{
		check = false;
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr1[j] > arr1[j+1])
			{
				swap(arr1[j], arr1[j+1]);
				check = true;
			}
	    }
		iteration_arr1++;
		if (check == false)
			break;
	}
	for (int i = 0; i < size; i++)
	{
		check = false;
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr2[j] > arr2[j + 1])
			{
				swap(arr2[j], arr2[j + 1]);
				check = true;
			}
		}
		iteration_arr2++;
		if (check == false)
			break;
	}
	for (int i = 0; i < size; i++)
		cout<<"arr1["<<i<<"]=" << arr1[i] << endl;
	cout <<"Number of iteration sorts - "<<iteration_arr1<< endl;
	for (int i = 0; i < size; i++)
		cout << "arr2[" << i << "]=" << arr2[i] << endl;
	cout << "Number of iteration sorts - " << iteration_arr2 << endl<<endl;
	if (iteration_arr1 < iteration_arr2)
		cout << "The first array was released faster\n\n";
	else 	if (iteration_arr1 > iteration_arr2)
		cout << "The second array was released faster\n\n";
	else if (iteration_arr1 == iteration_arr2)
		cout << "The number of iterations is the same\n\n";
	system("pause");
}