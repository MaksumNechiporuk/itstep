#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int arr[50];
	for (int i = 0; i < 50; i++)
	{
		arr[i] = -50 + rand() % 100;
		cout << "arr[" << i << "]=" << arr[i] << endl;
		if (arr[i] < 0)
			arr[i] *= -1;
	}
	cout<< endl<<endl;
	for (int i = 0; i < 50; i++)
	{
		
		cout << "arr[" << i << "]=" << arr[i] << endl;
		
	}
	system("pause");
}