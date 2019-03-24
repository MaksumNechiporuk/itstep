#include<iostream>
#include<array>
#include<fstream>
using namespace std;

int main()
{
	array<int, 10>arr{1,2,3,4,5,6,7,8,9,0};

	array<int, 10>::iterator it = arr.begin();
	while (it != arr.end())
	{
		cout << (*(it++)) << "  ";
	}
	array<int, 10>::reverse_iterator itr = arr.rbegin();
	cout << endl;
	while (itr != arr.rend())
	{
		cout << (*(itr++)) <<"  ";
	}
	cout << endl;
	array<int, 10>arr_rand;
	array<int, 10>::iterator it_rand = arr_rand.begin();
	while (it_rand != arr_rand.end())
	{
		*it_rand = rand() % 50;
		cout << (*(it_rand++)) << "  ";
	}
	array<int, 10>::reverse_iterator it_randr = arr_rand.rbegin();
	
	cout << endl;
	while (it_randr != arr_rand.rend())
	{

		cout << (*(it_randr++)) <<"  ";
	}
	ofstream out("File.txt");
	ostream_iterator<int> it_int = ostream_iterator<int>(out, "  ");
	copy(arr.begin(), arr.end(), it_int);
	out.close();

	cout << "\nRead from file\n";
	ifstream in("File.txt");
	array<int, 10>newArr;
	istream_iterator<int> itBeg(in);
	istream_iterator<int> itEnd;
	copy(itBeg, itEnd, newArr.begin());
	copy(newArr.begin(), newArr.end(), ostream_iterator<int>(cout, " "));
	in.close();

	system("pause");
}