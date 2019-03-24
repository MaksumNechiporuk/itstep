#include<iostream>
#include<set>
#include<map>
#include<string>
#include<algorithm>
#include<fstream>
#include<vector>
using namespace std;
void ReadFromFile(string filename, set<string> *eng)
{
	

		ifstream in(filename);
		char key[50];
		while (!in.eof())
		{
			in.getline(key, 50);
			eng->insert(key);
			if (in.eof()) break;
		}
		in.close();
}

int main()
{
	set<string> eng;
	vector<string> sorts;
	string rand_s,rand;
	
	ReadFromFile("vocabulary.txt", &eng);
	cout << "Enter rand\n";
	cin >> rand_s;
	rand = rand_s;
	string words;
	sort(rand_s.begin(),rand_s.end());
	
	for (auto it : eng)
	{
			words=it;
			sort(words.begin(), words.end());
			sorts.push_back(words);
	}
	/*for (auto it : sorts)
	{
		cout << it << endl;
	}*/
	auto iter = eng.begin();
	for (auto it : sorts)
	{
		if (it == rand_s)
		{
			cout << (*iter) << "  " << rand << endl;
		}
			iter++;
	}
	system("pause");
}
