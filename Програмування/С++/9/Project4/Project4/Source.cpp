#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	long arr[7];
	int sum = 0;
	for (int i = 0; i<7; i++)
	{
		cout << "arr[" << i << "]=";
		cin >> arr[i];
		if (arr[i] % 2 == 0)
		sum += arr[i];
	}
	cout << "sum=" << sum << endl;
	system("pause");
}