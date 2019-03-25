#define SUMMARY(s,a,n) s=0; for(int i=0; i<n; i++) s += a[i];
#define show(a,n)  for(int i=0; i<n; i++) cout<<a[i]<<"  ";cout << endl;
#define max_e(max_, a, n)  max_=a[0];  for(int i=0; i<n; i++) if(max_<a[i]) max_=a[i];
#include<iostream>

using namespace std;

int main()

{
int const n = 10;
	int a[n];
	int s = 0;
	int max_;

	for (int i = 0; i < n; ++i)//создаем массив
	{
		a[i] = rand() % 10;
	}
	show(a, n)
	SUMMARY(s, a, n)
		cout << s << endl;
	max_e(max_, a, n)
		cout << max_ << endl;
	system("pause");
}