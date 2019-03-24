#include<iostream>

using  namespace std;
 
void ver(int _size)
{
	for (int i = 0; i < _size; i++)
	{
		cout << "*" << endl;
	}
}
void hor(int _size)
{
	for (int i = 0; i < _size; i++)
	{
		cout << "*";
	}
	cout << endl;
}
int main()
{
	hor(10);
	hor(7);
	hor(4);
	cout << endl;
	hor(8);
	ver(3);
	hor(13);
	ver(3);
	hor(19);
	cout << endl;

	system("pause");
}