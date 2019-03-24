#include<iostream>
using namespace std;

int main()
{
	char arr[100];
	cin.getline(arr, 100);
	int  p;

	
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] = '.')
			p = i;
		

	}
	cout << "position=" << p << endl;


	system("pause");
}
