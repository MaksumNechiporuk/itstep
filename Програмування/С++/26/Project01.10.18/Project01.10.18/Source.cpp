#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	srand(time(0));

	char arr[100],arr1[100];
	cin.getline(arr, 100);
	cin.getline(arr1, 100);
	strcmp(arr1, arr);
	cout << strncmp(arr1, arr,5) << endl;
	
	
	system("pause");
}