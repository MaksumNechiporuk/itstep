#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int const size = 100;
	int  arr[size], min, max,min_digit,max_digit,number=0;
	double sum = 0;
	do {

		cout << "Enter min ";
		cin >> min;
		cout << "Enter max ";
		cin >> max;
	} while (max < min);

	for (int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % 50;
	}

	min_digit = arr[min];
	max_digit = arr[min];
	for (int i = min; i <= max; i++)
	{
		sum += arr[i];
		number++;
		cout << "arr[" << i << "]=" << arr[i] << endl;
		if (min_digit > arr[i])
			min_digit = arr[i];
		if (max_digit < arr[i])
			max_digit = arr[i];
	}
	cout << "Number = " << number << endl;
	cout << "min_digit=" << min_digit << endl;
	cout << "max_digit=" << max_digit << endl;
	cout << "Arithmetic mean of array elements - " << sum / number << endl;

	system("pause");
}