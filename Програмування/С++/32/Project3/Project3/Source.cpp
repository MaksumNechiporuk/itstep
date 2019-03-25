#include <fstream>
#include <iostream>
using namespace std;
int main()
{
ifstream fin("input.txt");

	int p = 0;
	int s = 0;
	while (!fin.eof())
	{
		char c;
		fin.get(c);
		if (c == '\n')  p++;
		s++;
	}
	cout <<"Strings="<< p <<endl<< "Symbols=" << s << endl;
	system("pause");
}