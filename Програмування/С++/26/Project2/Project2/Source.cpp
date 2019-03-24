#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;
void fill(int *p, int size)
{
	for (int i = 0; i < size; i++)
	{
		*p = rand() % 20;
		cout << setw(3) << *p<<" " ;
		p++;
	}
	cout << endl;
}
bool func(int *p, int *p1, int size)
{
	int sum = 0, sum1 = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *p;
		sum1 += *p1;
		p++, p1++;
	}
	if (sum == sum1)
		return true;
	else
		return false;
}

int  main()
{
	srand(time(0));
	int const size = 15;
	int arr[size], arr1[size];
	int *p = arr;
	fill(p, size);
	int *p1 = arr1;
	fill(p1, size);
	cout << std::boolalpha << func(p, p1, size) << endl;
	system("pause");
}