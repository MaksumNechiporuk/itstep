#include<iostream>
#include<queue>
#include<string>
#include<list>
using namespace std;

int main()
{
	list<list<string>> ls{ list<string>{"Vasia","Nadia","Roma"} };
	auto it = (*ls.begin());

	system("pause");
}