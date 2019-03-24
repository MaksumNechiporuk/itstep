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
		cout << "1.������ ������� \n2.������ �i���\n3.����� �� ������i\n4.�������� �i��� � ���i���\n5.�������� ��i �i��� ���i���\n6.�������� ���i��\n7.�������� ���\n8.���i�\n";
		cin >> c;
		system("cls");
		switch (c)
		{
		case 1:
		{
			cout << "�������\n";
			cin >> region;
			cout << "�������� �����\n";
			cin >> centre;
			my[region].insert( centre);
			break;
		}
		case 2:
		{
			cout << "�������\n";
			cin >> region;
			cout << "�i���\n";
			cin >> city;
			my[region].insert(city);
			break;
		}
		case 3:
		{

			cout << "�������\n";
			cin >> region;
			cout << "�i���\n";
			cin >> city;
		auto f=	(my[region]).find(city);
		if (f != my[region].end())
			cout <<"�������:"<< region << "  �i���:" << (*f) << endl;
		else
			cout << "������ �i��� �� i���\n";
			break;
		}
		case 4:
		{cout << "�������\n";
		cin >> region;
		cout << "�i���\n";
			cin >> city;
			auto f = (my[region]).find(city);
			if (f != my[region].end())
				my[region].erase(city);
			else
				cout << "������ �i��� �� i���\n";
			break;
		}
		case 5:
		{
			cout << "�������\n";
			cin >> region;
			system("cls");
			cout << "�������:  " << region<< "  ";
			for (auto f : (my[region]))
			{
				cout << f << endl;
			}
			break;
		}
		case 6:
		{
			cout << "�������\n";
			cin >> region;
			auto f = my.find(region);
			if (f != my.end())
				my.erase(region);
			else
				cout << "������ ���i��� �� i���\n";
			break;
		}
		case 7:
		{
			for (auto el : my)
			{
				cout<<"�������:" << el.first<< endl;
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