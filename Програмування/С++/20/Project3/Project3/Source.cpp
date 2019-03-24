#include<iostream>
#include<cmath>
using  namespace std;

float power(float number, float power)
{
	return (pow(number, power));
}
int main()
{
	float a, b;
	cout << "Enter number "; 
	cin >> a;
	cout << "Enter power ";
	cin >> b;
	cout << a << "^" << b << "="<< power(a, b)<<endl;
	system("pause");

}