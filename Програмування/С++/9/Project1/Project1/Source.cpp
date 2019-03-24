#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	srand(time(0));
	int temperature[7],min=0,max=0;
	cout << "Table of temperature for a week\n";
	for (int i = 0; i < 7; i++)
	{
		temperature[i] = rand() % 36;
	}
	min = temperature[0];
	for (int i = 0; i < 7; i++)
	{
		if (min > temperature[i])
			min = temperature[i];
		if (max < temperature[i])
			max = temperature[i];
		cout <<"Day "<<i+1<<"\t"<< temperature[i] << endl;
	}
	cout << "min=" << min << endl << "max=" << max << endl;
	system("pause");
}