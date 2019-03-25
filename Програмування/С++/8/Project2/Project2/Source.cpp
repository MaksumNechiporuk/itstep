#include<iostream>
using namespace std;
int main()
{
	int digit=0,sum=0,number=0,d1=0;
	cout << "digit=";
	cin >> digit;
	for(;;)
	{
		d1 = digit % 10;
		sum += d1;
		digit /= 10;
		number++;
		if (digit %10== 0)
		{
			break;
		}

	} 
	cout <<"Number="<<number << endl;
	cout <<"sum="<< sum <<endl;
	cout <<"The first number  "<< d1 << endl;
	system("pause");
}
