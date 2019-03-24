#include<iostream>
#include<ctime>;
using namespace std;
int main()
{
	srand(time(0));
	int M[50], k = 0,b=0;
	cout << "Enter k=";
	cin >> k;

	for (int i = 0; i < 50; i++)
	{
		M[i] = rand() % 51;
		cout << "M[" << i << "]=" << M[i] << endl;
	}
	for (int i = 0; i < 50; i++)
	{
		if (M[i] == k)
		{
			cout << "Number position " << k << " - " << i << endl;
			b++;
		}
	}
	if (b == 0)
		cout << "Error\n";
	system("pause");
}