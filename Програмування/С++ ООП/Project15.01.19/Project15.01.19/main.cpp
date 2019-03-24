//#include<iostream>
//#include<string>
//#include<map>
//
//using namespace std;
//
//int main()
//{
//	string eng, ukr;
//	int c=0;
//	map<string, string> dic;
//	for (;;)
//	{
//		cout << "1.ADD\n2.SHOW\n3.Search\n4.Change\n5.EXIT\n";
//		cin >> c;
//		switch (c)
//		{
//		case 1:
//		{
//			cout << "ENG\n";
//			cin >> eng;
//			cout << "UKR\n";
//			cin >> ukr;
//			dic.insert(make_pair(eng, ukr));
//			break;
//		}
//		case 2:
//		{
//			for (auto el : dic)
//			{
//				cout << el.first << "  " << el.second << endl;
//			}
//			break;
//		}
//		case 3:
//		{
//			cout << "ENG\n";
//			cin >> eng;
//			auto el=dic.find(eng);
//			if(el!=dic.end())
//			cout << (*el).first << "  " << (*el).second << endl;
//			break;
//		}
//		case 4:
//		{
//			cout << "ENG\n";
//			cin >> eng;
//			auto el = dic.find(eng);
//			if (el != dic.end())
//			{
//				dic.erase(eng);
//				cout << "ENG\n";
//				cin >> eng;
//				cout << "UKR\n";
//				cin >> ukr;
//				dic[eng] = ukr;
//			}
//			break;
//		}
//	}
//		if (c == 5)
//			break;
//	}
//	system("pause");
//}