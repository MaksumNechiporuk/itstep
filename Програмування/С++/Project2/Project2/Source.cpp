#include<iostream>
using namespace std;
int F(int x, int y) {
	int i, j;
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= y; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}return(x, y);
}
void main()
{
	setlocale(LC_CTYPE, "Rus");
	int K, N;
	cout << "¬ведите ширину и высоту:\n";
	cin >> N >> K;
	int i, j;
	for (i = 1; i <= K; i++)
	{
		for (j = 1; j <= N; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	system("pause");
}