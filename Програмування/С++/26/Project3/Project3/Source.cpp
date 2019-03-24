#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;
void fill(int *p, int size)
{
	for (int i = 0; i < size; i++)
	{
		*p = rand() % 20;
		cout << setw(3) << *p << " ";
		p++;
	}
	cout << endl;
}
void out(int *p, int size)
{
	for (int i = 0; i < size; i++)
	{
		
		cout << setw(3) << *p << " ";
		p++;
	}
	cout << endl;
}
void swap1(int *a, int *b)
{
	*a = *a + *b;
	*b = *a -*b;
	*a = *a - *b;
	cout << "a=" << *a << endl << "b=" << *b << endl;
}
void swap2(int *a,int *b, int size)
{
	for (int i = 0; *a==*b; i++)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		a+=2, b+=2;
	}
	}
void swap3(int *a, int *b, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		a ++, b--;
	}
}



int  main()
{
	srand(time(0));
	int const size = 15;
	int arr[size];
	int *p = arr;
	int *p1 = &arr[1];
	cout << "arr 1:"; 
	fill(p, size);
	int a = 5, b = 10;
	int *p_a = &a;
	int *p_b = &b;
	swap2(p, p1, size);
	cout << "arr 2:";
	out(p, size);
	cout << "arr 3:";
	p1 =& arr[size-1];
	swap3(p, p1, size);
	out(p, size);
	cout <<endl<< "a=" << a << endl << "b=" << b<<endl;
	swap1(p_a, p_b);



	system("pause");
}