#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int const size = 50;
	int N, b = 0, arr[size];
	cout << "N=";
	cin >> N;
	double sum=0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
		cout << "arr[" << i << "]=" << arr[i] << endl;
		if (arr[i] > N)
		{
			b++;
			sum += arr[i];
		}
	}
	cout << "Arithmetic mean of array elements - " << sum / b << endl;

	system("pause");
}