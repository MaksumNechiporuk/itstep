#include<iostream>
using namespace std;
int main()
{
	char arr[] = { "Hello" };
	int count = 0;
	for (int i = 0;true; i++)
	{
		count++;
		if (arr[i] == '\0')
			break;
	}
	cout <<arr<<endl<<"Number of items "<< count-1<<endl;
	system("pause");
}