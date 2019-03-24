#include<iostream>

using namespace std;

class MyException : public exception
{
	char *message = nullptr;
	int _line;
public:
	MyException(char *mess)
	{
		message = mess;
	}
	MyException(int line)
	{
		_line = line;
	}
	virtual const char* what() const throw()override
	{
		cout << "Developed by Max  " << __DATE__ << endl;
		cout << message << endl;
		cout << _line << endl;
		return "Exception\n";
	}
};
int main()
{

		
		system("pause");
}