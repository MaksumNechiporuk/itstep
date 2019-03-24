#include<iostream>
using namespace std;
class time
{
private:
	int hour,minyte,sec;
public:
	time()
	{
		hour=0, minyte=0, sec=0;
	}
	time(int h, int m, int s)
	{
		hour = h, minyte = m, sec = s;
		showtime();
	}
	void entertime(int size_hour, int size)
	{
		int h = 0, m = 0, s = 0;

		do
		{
			cout << "\nEnter hours: ";
			cin >> h;
			cout << "Enter minutes: ";
			cin >> m;
			cout << "Enter secods: ";
			cin >> s;
		} while (h < size_hour && m <size && s < size);
		time(h, m, s);

}
	void showtime()
	{
		cout <<hour<<":"<<minyte<<":"<<sec<<endl;

	}
};
int main()
{
	setlocale(LC_ALL, "ukr");
	time s;
	s.entertime(24, 60);
	system("pause");



	
}