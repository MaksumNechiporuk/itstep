#include<iostream>
#include<ctime>
#include<iomanip>


using namespace std;
//void func()
//{
//	cout << "Bla";
//}
//
//void main()
//{
//	srand(time(0));
//	void(*p)();//ініціалізація
//	p = func;// присвоєняння адресу
//	p();//виклик
//	system("pause");
//}


//int sum(int a,int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	srand(time(0));
//	int(*p)(int,int);
//	p = sum;
//	cout<<p(5,8)<<endl;
//	system("pause");
//}

//
//int sum(int a, int b)
//{
//	return a + b;
//}
//int dob(int a, int b)
//{
//	return a * b;
//}
//int min(int a, int b)
//{
//	return a - b;
//}
//int dil(int a, int b)
//{
//	return (double)a / b;
//}
//
//int main()
//{
//	srand(time(0));
//	int(*p)(int, int);
//	int a,b;
//	char c;
//	cout << "a=";
//	cin >> a;
//	cout << "1.+\n2.-\n3.*\n4./\n";
//	cin >> c;
//	cout << "b=";
//	cin >> b;
//	switch (c)
//	{
//	case '+':
//	{
//		p = sum;
//		cout << p(a, b) << endl;
//		break;
//	}
//	case '-':
//	{
//		p = min;
//		cout << p(a, b) << endl;
//		break;
//	}
//	case '*':
//	{
//		p = dob;
//		cout << p(a, b) << endl;
//		break;
//	}
//	case '/':
//	{
//		p = dil;
//		cout << p(a, b) << endl;
//		break;
//	}
//	}
//	
//	system("pause");
//}

//
//double sum(double a, double b)
//{
//	return a + b;
//}
//double dob(double a, double b)
//{
//	return a * b;
//}
//double min(double a, double b)
//{
//	return a - b;
//}
//double dil(double a, double b)
//{
//	return a / b;
//}
//
//int main()
//{
//	srand(time(0));
//	double(*arr[4])(double, double) = {sum,dob,min,dil};
//	double a, b;
//	cout << "a=";
//	cin >> a;
//	cout << "b=";
//	cin >> b;
//	for (int i = 0; i < 4; i++)
//	{
//		cout << arr[i](a,b) << endl;
//	}
//	system("pause");
//}


//int main()
//{
//	char a[100] = {'0'};
//	cin.getline (a,100);
//	int c = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		c++;
//		if (a[i] == '\0')
//		{
//			break;
//		}
//	}
//	cout << c-1 << endl;
//	system("pause");
//}

//int main()
//{
//	char a[100],b[100];
//	cin.getline (a,100);
//
//		for (int i = 0 ,j=0; i < 100; i++)
//		{
//			if (a[i]!=' ')
//			{
//				b[j]=a[i];
//				j++;
//			}
//		}
//		cout << b << endl;
//		system("pause");
//}

int main()
{
		char a[100];
		cin.getline (a,100);
		bool c ;
		strlen(a);
		for (int i = 0; i < strlen(a); i++)
		{
			c = false;
			if (a[i]<47||a[i]>58)
				c = true;
			
			if (c == false)
				break;
		}
		if (c == true)
		{
			cout << "+" << endl;
		}
		if (c == false)
		{
			cout << "-" << endl;
		}
	system("pause");
}