#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int arr[100],max=0,max1=0,max2=0,iter1,iter2,buf;
	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 100;
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}

	for (int i = 0; i < 100; i++)
	{
		if (max1 < arr[i])
		{
			max1 = arr[i];
			iter1 = i;
		}
	}
	for (int i = 0; i<100; i++) {
		if (arr[i]>max1)
		{
			max2 = max1;
			max1 = arr[i];
			iter2 = i;
		}
		else if (arr[i] > max2 && arr[i] != max1)
		{
			max2 = arr[i];
			iter2 = i;
		}
		}
	cout << "max1= " << iter1 <<endl<< "max2= " << iter2 << endl;
		system("pause");
}