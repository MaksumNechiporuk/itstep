#include<iostream>
#include<ctime>
#include <typeinfo>
using namespace std;




//int S(int a, int b=5)
//{
//	return a * b;
//}

//int fectorial(int a)//Πεκσπρ³ÿ
//{
//	int f;
//	if (a == 0)
//		return 1;
//	else
//		f = a * fectorial(a - 1);
//	return f;
//}

template <typename T>
void fun(T a)
{
	cout <<a<<" - "<< typeid(a).name() << endl;
}
int main() 
{
	srand(time(0));

	/*double a, b;
	char q, c;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "q=";
	cin >> q;
	cout << "c=";
	cin >> c;
	fun(a, b);
	fun(q, c);*/
	
	int a;
	char b;
	double c;

	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	
	fun(a);
	fun(b);
	fun(c);
	


	/*int a;
	cout << "a=";
	cin >> a;
	fun(a,12.5);*/
	/*fun('c');
	fun(12.5);*/






	//cout << S(2) << endl;
	//cout << S(5, 5) << endl;




	/*int f;
	cout << "Enter fectorial  ";
	cin >> f;
	cout << f << "!=" << fectorial(f) << endl;
*/


	system("pause");
}