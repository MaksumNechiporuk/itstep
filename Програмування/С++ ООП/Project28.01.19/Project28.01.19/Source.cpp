#include<iostream>
#include<string>
#include<set>
#include<fstream>
#include<vector>
#include<iterator>

using namespace std;

void ReadFromFile(string filename, vector<string> *words, int &i)
{


	ifstream in(filename);
	char key[50];
	while (!in.eof())
	{
	
		in.getline(key, 50);
		words->push_back(key);
		i++;
		if (in.eof()) break;
	}
	in.close();
}
class SaveInfo
{
	vector<string> text;
	string type;
	int i;
public:
	SaveInfo() = default;
	SaveInfo(string type) :type(type)
	{
		ReadFromFile("v.txt", &text, i);
	}
	string GetText(int &i)
	{
		return text[i];
	}
	int GetNumber()
	{
		return i;
	}

};
class SaveInfoToFile :public SaveInfo
{
public:
	SaveInfoToFile():SaveInfo("File")
	{
		int i = 0;
		ofstream out("v1.txt", ios_base::app);
		for (; i < GetNumber();i++)
			out << GetText(i) << endl;
		out.close();
	}
};
class SaveInfoConsole :public SaveInfo
{
public:
	SaveInfoConsole() :SaveInfo("Console")
	{
		int i = 0;
		
		for (; i < GetNumber(); i++)
		cout << GetText(i) << endl;

	}
};

class Fabric
{
public:
	SaveInfo *GetClass(int c)
	{
		switch (c)
		{
		case 1:
		{
			return  new SaveInfoToFile();
			break;
		}
		case 2:
		{
			return  new SaveInfoConsole();
			break;
		}
		}
		
	}
};

int main()
{
	Fabric a;
	int c;
	cout << "1.Save file\n2.Console\n";
	cin >> c;
	SaveInfo *f=a.GetClass(c);

	system("pause");
}