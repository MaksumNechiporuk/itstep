#include<iostream>
using namespace std;
int main()
{
	char symbol;
	cout << "Enter symbol\t";
	cin >> symbol;
	int i=0, j=0,x,y;
	cout << "Enter the dimension\t";
	cin >> x >> y;
	while (i < x)
	{
		while (j < y)
		{
			cout << symbol;
			j++;
		}
		j = 0;
		i++;
		cout << endl;
	}

	system("pause");
}