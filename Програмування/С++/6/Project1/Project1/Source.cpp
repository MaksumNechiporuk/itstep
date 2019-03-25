#include<iostream>
using namespace std;
int main()
{
 int minutes = 0, counter = 0;
 const int TIME = 3;
 cout << "Enter your minutes:";
 cin >> minutes;
 cout <<endl;
 for (int i = 0;i <= minutes;i++)
 {
  if (i % TIME == 0)
	  counter++;
 }
 if (counter % 2 != 0)
  cout << "RED\n";
 else
  cout << "GREEN\n";
 system("pause");
}