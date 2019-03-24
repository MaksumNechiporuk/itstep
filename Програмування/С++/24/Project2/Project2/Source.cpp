#include<iostream>

using namespace std;

int func(int k)
{
	if (k == 1 || k == 2) 
		return (k - 1); 
	return func(k - 1) + func(k - 2); 
}
int main()
{
	int k = 0;
	cout << "k=";
	cin >> k;
	for (int i = 1; i <= k; i++)
		cout<< func(i) << endl;
	
	
	
	system("pause");
}