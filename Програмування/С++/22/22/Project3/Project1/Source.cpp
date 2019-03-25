#include<iostream>
#include<iomanip>
#include<ctime>

using namespace std;

void random(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
}
double sered_aruf(int arr[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum/size ;
}
int main()
{
	srand(time(0));
	int const size = 20;
	int arr[size];
	setlocale(LC_ALL, "ukr");
	random(arr, size);
	cout<<"Середнє арифметичне масива - "<<sered_aruf(arr, size)<<endl;
	system("pause");
}