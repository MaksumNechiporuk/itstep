#pragma once
#include"Wheel.h"
#include"Producer.h"
#include<string>
using namespace std;

class Car
{
	string name;
	string color;
	Wheel wh[4];
	Producer pr;
public:
	Car();
	void Create_car();
	void Show();
	~Car();
};