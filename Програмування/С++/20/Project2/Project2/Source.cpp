#include<iostream>

using  namespace std;

bool func(int _a)
{
	if (_a < 0)
		return false;
	else
	return true;
}
int main()
{
	int a;
	cout << "Enter a ";
	cin >> a;
	cout << boolalpha << func(a) << endl;;

	system("pause");
}