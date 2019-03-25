#include<iostream>
using namespace std;
int main()
{
	int pin = 1995, call, sms, choice = 0;
	double score = 5.45, sum = 0, kyivstar = 0.25, life = 0.15, vodafon = 0.35, minutes, kyivstars = 0.10, lifes = 0.20, vodafons = 0.50;

	for (int i = 1;; i++)
	{

		cout << "Enter your pin or 0 to exit  ";
		cin >> pin;
		if (pin == 0)
		{
			break;
		}
		else if (pin == 1995)
		{

			for (;;)
			{

				cout << "1.Refill account on your phone\n2.Call\n3.Send sms\n4.Exit\n";
				cin >> choice;
				if (choice == 4)
				{
					break;
				}
				switch (choice)
				{
				case 1:
				{
					system("cls");
					cout << "Enter the amount  ";
					cin >> sum;
					if (sum < 0)
						cout << "Error\n";
					else
					{
						score += sum;
						cout << "On the account " << score << endl;
					}
					break;
				}
				case 2:
				{
					system("cls");
					cout << "Select an operator \n1.Kyivstar\n2.Life \n3.Vodafon\n";
					cin >> call;
					cout << "minutes=  ";
					cin >> minutes;
					if (call == 1)
					{

						kyivstar *= minutes;

					}
					else if (call == 2)
					{

						life *= minutes;

					}
					else if (call == 3)
					{

						vodafon *= minutes;

					}
					cout << "On the account " << score - vodafon << endl;
					break;
				}
				case 3:
				{
					system("cls");
					cout << "Select an operator \n1.Kyivstar\n2.Life \n3.Vodafon\n";
					cin >> sms;
					if (sms == 1)
					{

						cout << "On the account " << score - kyivstars << endl;
					}
					else if (sms == 2)
					{

						cout << "On the account " << score - lifes << endl;
					}
					else if (sms == 3)
					{

						cout << "On the account " << score - vodafons << endl;
					}
					break;
				}
				}
			}
		}
		else if (i == 3)
		{
			cout << "You blocked the phone\n";
			break;
		}
		else
			cout << "Error\n";
	}
	system("pause");

}