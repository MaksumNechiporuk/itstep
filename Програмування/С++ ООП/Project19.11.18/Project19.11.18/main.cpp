#include<iostream>
#include<ctime>
#include<stack>
#include"Ball.h"

using  namespace std;

int main()
{
	srand(time(0));
	Ball balls[20];
	for (int i = 0; i < 20; i++) 
	{
		balls[i].Fill_color();
		//cout << balls[i].color;
	}

	system("pause");
}