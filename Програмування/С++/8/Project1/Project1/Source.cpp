#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	srand(time(0));
	int square ,choise,sum1=0,sum2=0;
	for (int i=0;;i++)
	{
	
		for (int i=1;i<=6;i++)
		{

			square = 1 + rand() % 6;
			if (i <= 3)
			{
				sum1 += square;
				cout << "square of the first player\n";
			}
			else
			{
				sum2 += square;
				cout << "square of the second player\n";
			}
			for (int i = 1; i <= 8; i++)
			{
				for (int j = 1; j <= 8; j++)
				{
					switch (square)
					{
					case 1:
					{
						if ((i == 1) or (i == 8))
							cout << " *";
						if (((i != 1) and (i != 8)) and ((j == 1) or (j == 8)))
							cout << " *";
						if (i == 4 && j == 4)
							cout << " *";
						else if (((i != 1) and (i != 8)) and ((j != 1) and (j != 8)))
							cout << "  ";
						break;
					}
					case 2:
					{			if ((i == 1) or (i == 8))
						cout << " *";
					if (((i != 1) and (i != 8)) and ((j == 1) or (j == 8)))
						cout << " *";
					if (i == 5 && j == 4 || (i == 4 && j == 4))
						cout << " *";	
					else if (((i != 1) and (i != 8)) and ((j != 1) and (j != 8)))
						cout << "  ";
					break;
					}
					case 3:
					{			if ((i == 1) or (i == 8))
						cout << " *";
					if (((i != 1) and (i != 8)) and ((j == 1) or (j == 8)))
						cout << " *";

					if (i == 5 && j == 5 || (i == 4 && j == 4) || (i == 3 && j == 3))
						cout << " *";	
					else if (((i != 1) and (i != 8)) and ((j != 1) and (j != 8)))
						cout << "  ";
					break;
					}
					case 4:
					{			if ((i == 1) or (i == 8))
						cout << " *";
					if (((i != 1) and (i != 8)) and ((j == 1) or (j == 8)))
						cout << " *";


					if (i == 5 && j == 3 || (i == 5 && j == 6) || (i == 3 && j == 3) || (i == 3 && j == 6))
						cout << " *";	
					else if (((i != 1) and (i != 8)) and ((j != 1) and (j != 8)))
						cout << "  ";
					break;
					}
					case 5:
					{
						if ((i == 1) or (i == 8))
							cout << " *";
						if (((i != 1) and (i != 8)) and ((j == 1) or (j == 8)))
							cout << " *";

						if (i == 4 && j == 5 || i == 5 && j == 4 || (i == 5 && j == 6) || (i == 3 && j == 4) || (i == 3 && j == 6))
							cout << "* ";	
						else if (((i != 1) and (i != 8)) and ((j != 1) and (j != 8)))
							cout << "  ";
						break;
					}
					case 6:
					{			if ((i == 1) or (i == 8))
						cout << " *";
					if (((i != 1) and (i != 8)) and ((j == 1) or (j == 8)))
						cout << " *";

					if (i == 3 && j == 4 || (i == 4 && j == 4) || i == 5 && j == 4 || (i == 5 && j == 6) || (i == 4 && j == 6) || (i == 3 && j == 6))
						cout << "* ";	
					else if (((i != 1) and (i != 8)) and ((j != 1) and (j != 8)))
						cout << "  ";
					break;
					}
					}
				}
				cout << "\n";
			}
		if(i==3)
			system("pause");
		}
		cout << "player 1 - " << sum1 <<endl<< "player 2 - " << sum2<<endl;
		if (sum1 < sum2)
		{
			cout <<"Win player 2!!!\n\n\n\n\n\n\n";
		}
		else 	if (sum1 > sum2)
		{
			cout << "Win player 1!!!\n\n\n\n\n\n";
		}
		else 	if (sum1 == sum2)
		{
			cout << "The number of points is the same\n";
		}
		cout << "1.Again\n2.Exit\n";
		cin >> choise;
		system("cls");
	   if (choise == 2)
			break;
	}
	system("pause");
}