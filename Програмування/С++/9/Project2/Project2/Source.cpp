#include<iostream>
using namespace std;
int main()
{

	int arr[10], kilk = 0, sum = 0;
	double sered;
	for (int i = 0; i <10; i++)
	{
		cout << "arr[" << i << "]=";
		cin >> arr[i];
		sum += arr[i];
		kilk++;
	}
	sered =  (double)sum/kilk;
	cout <<"sered="<< sered << endl;
	
	system("pause");
}