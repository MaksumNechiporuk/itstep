#include <iostream>
using namespace std; 
int main()
{
	int number, max;
	cout<<"Enter the number \t";
	cin>> number;
	max = number;
	for (int i = 1; i < 7; i++)
	{
		cout << "Enter the number\t";
		cin>>number;
		if (number > max) 
		max = number;
	}
	cout << "The maximum number is: " << max;
	system("pause");
}
