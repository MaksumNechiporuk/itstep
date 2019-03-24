#include<iostream>
#include<ctime>
#include<iomanip>
#include<cmath>
#include<Windows.h>
using namespace std;
//void out(int arr[5][5], int size);
//
//void sort(int arr[5][5], int size, int a=1)
//{
//	for (int k = 0; k < size; k++)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			for (int j = 0; j < size; j++)
//			{
//				if (a == 1)
//				{
//					if (arr[k][i] < arr[k][j])
//						swap(arr[k][i], arr[k][j]);
//				}
//				else
//				{
//					if (arr[k][i] > arr[k][j])
//						swap(arr[k][i], arr[k][j]);
//				}
//			}
//		}
//	}
//	out(arr, size);
//}
//
//void out(int arr[5][5], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			
//			cout << setw(3) << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//
//}
//void fill (int arr[5][5],int size)
//{
//	for (int i=0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			arr[i][j] = rand() % 20;
//			cout << setw(3) << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//
//}
int main()
{
	srand(time(0));
	//int const size = 5;
	//int arr[size][size];
	//fill(arr, size);
	//int a;
	//cin >> a;
	//sort(arr, size, a);
	//sort(arr, size);

	//int digit = 10,digit2=12,digit3=6;
	//int *p = &digit;
	//int *t = &digit2;
	//int *v = &digit3;
	/*cout <<"sum="<<*p+*t+*v<<endl<<"arifm="<<(double)(*p + *t + *v )/3<<endl;
	if (*p < *t&&*p < *v)
		cout <<* p << endl;
	else if (*t < *p&&*t < *v)
		cout << *t << endl;
	else if (*v < *t&&*v < *p)
		cout << *v << endl;
	*/
	int digit, digit2;
	cout << "digit=";
	cin >> digit;

	int *d = &digit;
	int *d2 = &digit2;

	if (*d > 0)
	{
		cout << "+" << endl;
	
	}
	else
		cout << "-" << endl;

	char symbol;
		Sleep(2000);
		system("cls");
		cout << "digit=";
		cin >> digit;
		cout << "operation ";
		cin >> symbol;
		cout << "digit2=";
		cin >> digit2;
		cout << endl;

		switch (symbol)
		{
		case '+':
		{
			cout << *d << symbol << *d2 << "=" << *d + *d2 << endl;
			break;
		}
		case '-':
		{
			cout << *d << symbol << *d2 << "=" << *d - *d2 << endl;
			break;
		}
		case '/':
		{

			if (*d2 != 0)
			{
				cout << *d << symbol << *d2 << "=" << (double)*d / *d2 << endl;
			}
			else if (*d2 == 0)
			{
				cout << "Error" << endl;
				cout << "digit2=";
				cin >> digit2;
				cout << *d << symbol << *d2 << "=" << (double)*d / *d2 << endl;
			}
			break;
		}
		case '*':
		{
			cout << *d << symbol << *d2 << "=" << *d * *d2 << endl;
			break;
		}
		case '^':
		{
			cout << *d << symbol << *d2 << "=" << pow(*d, *d2) << endl;
			break;
		}
		case 'z':
		{
			cout << symbol << *d << "=" << sqrt(*d) << endl << symbol << *d2 << "=" << sqrt(*d2) << endl;
			break;
		}

		}

	
	cout << *d << "  " << *d2 << endl;
	*d = *d + *d2;
	*d2 = *d - *d2;
	*d=  *d - *d2;
	cout << *d << "   " << *d2 << endl;
	system("pause");
}