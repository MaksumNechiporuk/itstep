#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iterator>
#include<string>
#include<Windows.h>

using namespace std;

void SetCol(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}
//bool pred(int digit)
//{
//	return digit % 2 == 0;
//}
//
//bool pred1(const string s)
//{
//	return s.size()>5;
//}
void p(string s)
{
	if (s.size() > 5)
	{
		SetCol(10);
		s.resize(5);
	}
	else
		SetCol(12);  
	cout << s << endl;
	SetCol(7);
}
int main()
{
	srand(time(0));
	/*vector<int>v;
	int a;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(rand() % 10);
	}
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	a = count_if(v.begin(), v.end(), pred);
	vector<int>v1(a);
	copy_if(v.begin(), v.end(), v1.begin(), pred);
	cout << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
	cout << endl << endl;
	
	
	vector<string>v2 {"mather","father","sister","brother","cat"};
	copy(v2.begin(), v2.end(), ostream_iterator<string>(cout, " "));
	cout << endl;
	a = count_if(v2.begin(), v2.end(), pred1);
	vector<string>v3(a);
	copy_if(v2.begin(), v2.end(), v3.begin(), pred1);
	cout << endl;

	copy(v3.begin(), v3.end(), ostream_iterator<string>(cout, " "));
	cout << endl;*/

	vector<string>v2{ "mather","father","sister","brother","cat" };

	for_each(v2.begin(), v2.end(), p);
	system("pause");
}