#include<iostream>
#include<ctime>;
using namespace std;
int main()
{
	srand(time(0));
	int arr[11];
	for (int i = 0, a = 5, b = 5; i < 6; i++, a++, b--)
	{
		arr[a] = i;
		arr[b] = i;
	}
	for (int i = 0; i < 11; i++)
	{
		cout << arr[i]<<endl;
	}
	system("pause");
}