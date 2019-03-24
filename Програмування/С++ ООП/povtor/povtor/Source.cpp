#include<iostream>
//#include<set>
//#include<vector>
//#include<ctime>
//#include<iterator>
//
//using namespace std;
//
//int main()
//{
//	srand(time(0));
//	vector <int>v;
//	multiset<int> s;
//	set<int> s1;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(rand() % 10);
//		s.insert(rand() % 10);
//	}
//	for (auto el : v)
//	{
//		cout << el << "  ";
//		s1.insert(el);
//	}
//	cout << endl;
//	for (auto el :s)
//	{
//		cout << el << "  ";
//	}
//	v.clear();
//
//	for (auto el : s1)
//	{
//		v.push_back(el);
//	}
//	/*auto iter = v.begin();
//	auto iter1 = v.begin()+1;
//	for (; iter != v.end();)
//	{
//		for (;iter1!=v.end();)
//		{
//			if ((*iter) == (*iter1))
//			{
//				v.erase(iter);
//			}
//			iter1++;
//		}
//		iter++;
//	}
//	*/
//	cout << endl;
//	cout << endl;
//	for (auto el : v)
//	{
//		cout << el << "  ";
//	}
//	cout << endl;
//	system("pause");
//}#include<iostream>
#include<iostream>

using namespace std;

class Test {
public:
	Test() {
		cout << "Test";
	}
private:
	~Test() {
		cout << "~Test";
	}
};

void main() {
	Test obj;
	Test obj2 = obj;
	system("pause");
}