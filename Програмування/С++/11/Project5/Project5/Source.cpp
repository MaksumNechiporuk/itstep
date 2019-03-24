#include<iostream>
#include<ctime>;
using namespace std;
int main()
{
//	srand(time(0));
	bool check = true;
	int const size=26;
	char arr[size],symbol;
	cout << "symbol=";
	cin >> symbol;
	for (int i = 65, j=0;j<size, i < 91;j++, i++)
	{
		arr[j] = i;
		cout << "arr[" << j << "]=" << arr[j] << endl;
	}
	for (int i = 0; i < size; i++)
	{
		
		if (arr[i] == symbol)
		{
			cout << "Position symbol - " << i << endl;
			check = false;
		}
	}
	if (check == true)
		cout << "Error\n";
	system("pause");
}