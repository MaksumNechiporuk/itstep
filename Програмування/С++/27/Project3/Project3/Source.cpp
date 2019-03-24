#include<iostream>
using namespace std;

int main()
{
	char arr[100];
	cin.getline(arr, 100);
	int c = 0;
	for (int i = 0; i <100; i++)
	{
	
			if (arr[i] == ' ' && arr[i+1] == 'a' || arr[i+1] == 'A')
				c++;


		
	}
	cout<< c<< endl;


	system("pause");
}
