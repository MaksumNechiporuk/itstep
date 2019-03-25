#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	cout <<"First digit-"<< a / 10000 << endl;
	cout <<"Second digit-"<<(a %10000)/1000 << endl;
	cout <<"Third digit-"<<(a %1000)/100<< endl;
	cout <<"Fourth digit-"<<(a % 100)/10<< endl;
	cout <<"Fifth digit-"<<a % 10 << endl;
	system("pause");
}