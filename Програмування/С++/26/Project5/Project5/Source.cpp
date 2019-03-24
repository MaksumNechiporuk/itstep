#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

void func(char arr[100], int *whitespaces, int *vowels, int  *consonant, int *punctuation)
{
	
	for (int i = 0; arr[i]!='\0'; i++)
	{
		if ((int)arr[i]==32)
		{
			cout << (int)arr[i] << endl;
			
			(*whitespaces)++;
			cout<<*whitespaces;
		}
		 if (arr[i] == 65 || 97 || 69 || 101 || 73 || 105 || 79 || 111 || 89 || 121)
		{
			(*vowels)++;
		
		}
		 if (arr[i] == 33 || 46 || 44||45)
		{
			(*punctuation)++; 
		}
		else
		{
			(*consonant)++; 
		}
		 
	}
	cout << *whitespaces << endl;
}


int  main()
{
	srand(time(0));
	setlocale(LC_ALL, "ukr");
	int const size = 100;
	char arr[size];
	cin.getline(arr, 100);
	int whitespaces = 0, vowels = 0, consonant = 0, punctuation = 0;
	int *p_whitespaces = &whitespaces, *p_vowels = &vowels, *p_consonant = &consonant, *p_punctuation = &punctuation;
	func(arr,p_whitespaces, p_vowels, p_consonant, p_punctuation);
	cout << "Кiлькiсть голосних - " << vowels << endl;
	cout << "Кiлькiсть приголосних - " << consonant << endl;
	cout << "Кiлькiсть знакiв пунктуацiї - " << punctuation << endl;
	cout << "Кiлькiсть пробiлiв - " << whitespaces << endl;

	system("pause");
}