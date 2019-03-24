#include<iostream>
#include<string>
#include<map>
#include<set>
#include<iterator>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	string region, centre, city;
	map<string, set<string>>my;
	int c;
	for (;;)
	{
		cout << "1.Додати область \n2.Додати мiсто\n3.Пошук по областi\n4.Видалити мiсто з регiону\n5.Показати всi мiста регiону\n6.Видалити регiон\n7.Показати все\n8.Вихiд\n";
		cin >> c;
		system("cls");
		switch (c)
		{
		case 1:
		{
			cout << "Область\n";
			cin >> region;
			cout << "Обласний центр\n";
			cin >> centre;
			my[region].insert( centre);
			break;
		}
		case 2:
		{
			cout << "Область\n";
			cin >> region;
			cout << "Мiсто\n";
			cin >> city;
			my[region].insert(city);
			break;
		}
		case 3:
		{

			cout << "Область\n";
			cin >> region;
			cout << "Мiсто\n";
			cin >> city;
		auto f=	(my[region]).find(city);
		if (f != my[region].end())
			cout <<"Область:"<< region << "  Мiсто:" << (*f) << endl;
		else
			cout << "Даного мiста не iснує\n";
			break;
		}
		case 4:
		{cout << "Область\n";
		cin >> region;
		cout << "Мiсто\n";
			cin >> city;
			auto f = (my[region]).find(city);
			if (f != my[region].end())
				my[region].erase(city);
			else
				cout << "Даного мiста не iснує\n";
			break;
		}
		case 5:
		{
			cout << "Область\n";
			cin >> region;
			system("cls");
			cout << "Область:  " << region<< "  ";
			for (auto f : (my[region]))
			{
				cout << f << endl;
			}
			break;
		}
		case 6:
		{
			cout << "Область\n";
			cin >> region;
			auto f = my.find(region);
			if (f != my.end())
				my.erase(region);
			else
				cout << "Даного регiону не iснує\n";
			break;
		}
		case 7:
		{
			for (auto el : my)
			{
				cout<<"Область:" << el.first<< endl;
				for (auto el1 : my[el.first])
				{
					cout << el1 << endl;
				}
		}
			break;
		}
		}
		
		if (c == 8)
			break;
		system("pause");
		system("cls");
	}
	system("pause");
}