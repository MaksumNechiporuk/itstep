#include<iostream>
using namespace std;

int main()
{
	char arr[100],arr1[100];
	cin.getline(arr, 100);
	int sum = 0,s;

	for (int i = 0; i < strlen(arr); i+=2)
	{
	
		sum += atoi(arr);
		
		
			
	}
	for (int i = 0,j=0; i < 100; i ++)
	{

		arr1[j] = arr[i];
		j++;
		if (arr[i] == '+')
		{
			arr1[j] = '+';
			j++;
			arr1[j] = '+';
			j++;
		}

	}
	
	cout << sum<<endl;
	cout << arr1<<endl;

	system("pause");
}
