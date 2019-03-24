#pragma once
#include<string>
using namespace std;

class Wheel
{
	string type;
	int price;
	
public:
	Wheel();
	Wheel(string type, int price);
	void Add_Wheel(Wheel &n);
	void Show(Wheel &wh);

	

};