#pragma once
#include<string>
#include<iostream>

using namespace std;

class Person
{
	string name;
	string surname;

public:
	void Show();
	void SetData(string name, string surname);
	
};
