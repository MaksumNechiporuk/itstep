#pragma once
#include<string>

using namespace std;

class Producer
{
	string name;
	int year;
public:
	Producer(string name, int year);
	void Add_Producer(Producer &p);
	void Show();
	Producer();
};