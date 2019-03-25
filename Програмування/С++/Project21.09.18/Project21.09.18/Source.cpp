#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;
//void func(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		*arr = rand() % 20;
//		cout << *arr<< "  ";
//		arr++;
//	}
//	cout << endl;
//}
//void func1 (int *parr,int *parr1, int *parr2, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		*parr2 = *parr;
//		parr2++;
//		*parr2 = *parr1;
//		parr2++;
//		parr1++;
//		parr++;
//	}
//}






//void func(int *a, int *b, int *c)
//{
//	if (*a > *b&&*a > *c)
//		cout << *a << endl;
//	else if (*b > *a&&*b > *c)
//		cout << *b << endl;
//	else if (*c > *a&&*c > *b)
//		cout << *c << endl;
//}



//void func(int &a, int &b)
//{
//	a = a + b;
//	b = a - b;
//	a = a - b;
//}
//
//int main()
//{
//	srand(time(0));
	/*const int size = 5, size1 = 10;
	int arr[size], arr1[size], arr2[size1];
	int *parr=arr, *parr1=arr1, *parr2=arr2;
	func(arr, size);
	func(arr1, size);
	func1(parr, parr1, parr2,size);
	for (int i = 0; i < size1; i++)
	{

	cout << *parr2 << "  ";
	parr2++;
	}

	cout << endl;*/


	//int *a = new int(1);
	//int *b = new int(2);
	//int *c = new int(3);
	//func(a, b, c);
	//delete a;
	//delete b;
	//delete c;
	//cout << a << endl << b << endl << c << endl;

	//int a = 2, b = 23;
	//cout << a << " " << b << endl;
	//func(a, b);
	//cout << a << " " << b << endl;





	void func(int arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			*arr =1+ rand() % 50;
			cout << *arr<< "  ";
			arr++;
		}
		cout << endl;
	}
	int func1(int arr[], int size)
	{
		int &min = arr[0];
		for (int i = 0; i < size; i++)
		{
			if (min > arr[i])
			{
				min = arr[i];
			}
		}
		return min;
	}
int main()
{
	srand(time(0));
	int const size = 10;
	int arr[10];
	func(arr, size);
	cout<< func1(arr, size) <<endl<<func1(arr, size)*2<<endl;
	system("pause");
}