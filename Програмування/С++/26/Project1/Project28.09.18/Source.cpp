#include<iostream>
#include<ctime>

using namespace std;

void func(int *p_arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*p_arr = rand() % 20;
		p_arr++;
	}
}
void func1(int *p_arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *p_arr << "  ";
		p_arr++;
	}
	cout << endl;
}
void func2(int *p_arr, int size)
{
	for (int i = 2; i < size; i++)
	{
		if(i%2==0)
			cout << *p_arr << "  ";
		p_arr++;
	}

}
int  main()
{
	srand(time(0));
	int const size = 20;
	int arr[size];
	int *p_arr = arr;
	func(p_arr, size);
	func1(p_arr, size);
	p_arr += 2;
	func2(p_arr, size);
	system("pause");
}