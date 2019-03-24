#include <iostream>
#include<ctime>
#include<iomanip>
#include<cmath>

using namespace std;
int func1(int *a)
{
	if (*a == 0)
		return 0; 
	if (*a == 1)
		return 1; 
	int *_a = a;
	int *b = a;
	
	 *b = *b - 2;
	return func1(_a) + func1( *a - 1);
}
void func(int *sum  ,int *count,double *average)
{
	int size = 10 + rand() % 10;
	int a;
	for (int i = 0; i < size; i++)
	{
	    a = rand() % 101;
		*sum += a;
		(*count)++;
		cout << a << endl;
	}
	*average= *sum / *count;
}


int main()
{
	srand(time(0));
	int a;
	cin >> a;
	int j = a;
	for (int i = 0; i < a; i++)
	{
		func1(&j);
		cout << j<<"  ";
	}
	/*int sum=0, count=0;
	double average=0;
	func(&sum, &count, &average);
	cout << "sum=" << sum << endl << "count=" << count << endl << "average=" << average<<endl;*/
	system("pause");
}