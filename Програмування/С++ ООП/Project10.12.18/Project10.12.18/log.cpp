#include<iostream>
#include<cmath>
#include<ctime>
#include<thread>
using namespace std;

void Fill(int arr[])
{
	for (int i = 0; i < 100000; i++)
		arr[i] =1+ rand() % 1000000;
}
void d(int arr[])
{
	double sum = 0;
	for (int i = 0; i < 100000 - 1; i++)
	{
		sum += (arr[i] - arr[i + 1])*(arr[i] - arr[i + 1]);
	}
	sum/=100000;
	cout << "sqrt=" << sqrt(sum) << endl;
}
int main()
{
	srand(time(0));
	int arr[100000];
	thread th1(Fill,arr);
	thread th2(d, arr);
	
	for (int i = 0; i < 100; i++)
	{
		cout << "*";
	}
	cout << endl;
	th1.join();
	th2.join();

	system("pause");
}