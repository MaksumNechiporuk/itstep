#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

void out(char *p, int size)
{
	for (int i = 0; i < size; i++)
	{

		cout << setw(3) << *p << " ";
		p++;
	}
	cout << endl;
}
void swap1(char *a, char *b, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		a++, b--;
	}
}



int  main()
{
	srand(time(0));
	int const size = 15;
	char arr[size];
	char *p = arr;
	char *p1 = &arr[size-1];
	cin.getline(arr,100);
	cout << "arr 1:";
	out(p, size);
	cout << "arr 1:";
	swap1(p, p1, size);
	out(p, size);
	system("pause");
}