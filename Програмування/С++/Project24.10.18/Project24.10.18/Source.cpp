#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;

int main()

{
	srand(time(0));
	
	//int a, b;
	//cin >> a;
	//cin >> b;

	//	for (int j = 0; j < size1; j++)
	//	{
	//		cout << arr[a][j] << "   ";
	//	}
	//
	//cout << endl;
	//
	//	for (int j = 0; j <size; j++)
	//	{
	//		cout << arr[j][b]<<"  ";
	//	}
	
	
	//int sum = 0, sum1 = 0;
	//for (int i = 0; i < size; i++)
	//{
	//	
	//	sum = 0;
	//	for (int j = 0; j < size1; j++)
	//	{
	//		cout <<setw(3)<< arr[i][j] << " ";
	//		sum += arr[i][j];
	//		
	//	}
	//	cout << setw(3)<<"sum=" << sum<<" ";
	//	cout << endl;

	//}
	//cout << endl;
	//for (int i = 0; i < size; i++)
	//{
	//	sum = 0;
	//	for (int j = 0; j < size1; j++)
	//	{
	//		cout << setw(3) << arr[j][i] << " ";
	//		sum += arr[j][i];
	//	}
	//	cout << setw(3) << "sum=" << sum << " ";
	//	cout << endl;
	//}


	int strings, columns, strings1, columns1;
	cout << "size=";
	cin >> strings;
	cout << "size1=";
	cin >> columns;
	int **arr = new int *[strings];
	int **arr1;
		for (int i = 0; i < strings; i++)
		{
			arr[i] = new int[columns];
		}
		for (int i = 0; i < strings; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				arr[i][j] = -20 + rand() % (20 + 20);
				cout << setw(3) << arr[i][j] << " ";
			}
			cout << endl;
		}
		for (;;)
		{
			
			cout << "size=";
			cin >> strings1;
			cout << "size1=";
			cin >> columns1;

			arr1 = new int *[strings1];
			for (int i = 0; i < strings1; i++)
			{
				arr1[i] = new int[columns1];
			}

			for (int i = 0; i < strings1; i++)
			{
				for (int j = 0; j < columns1; j++)
				{
					if (strings > i&&j < columns)
						arr1[i][j] = arr[i][j];
					else
						arr1[i][j] = -20 + rand() % (20 + 20);
				}
			}

			for (int i = 0; i < strings; i++)
			{
				delete[]arr[i];
			}
			delete[]arr;

	
			arr = arr1;
			strings = strings1;
			columns = columns1;

			//for (int i = 0; i < strings1; i++)
			//{
			//	arr[i] = new int[columns1];
			//}

			//for (int i = 0; i < strings1; i++)
			//{
			//	for (int j = 0; j < columns1; j++)
			//	{
			//		arr[i][j] = 0;
			//	}
			//}
			//for (int i = 0; i < strings; i++)
			//{
			//	for (int j = 0; j < columns; j++)
			//	{
			//		arr[i][j] = arr1[i][j];
			//	}
			//}
			//for (int i =0; i < strings1; i++)
			//{
			//	for (int j = 0; j < columns1; j++)
			//	{
			//		if(arr[i][j]==0)
			//		arr[i][j] = -20 + rand() % (20 + 20);
			//	}
			//}

			for (int i = 0; i < strings; i++)
			{
				for (int j = 0; j < columns; j++)
				{
					cout << setw(3) << arr[i][j] <<" ";
				}
				cout << endl;
			}
		
		
			/*for (int i = 0; i < strings1; i++)
			{
				delete[]arr1[i];
			}
			delete[]arr1;*/
		}


	system("pause");
}