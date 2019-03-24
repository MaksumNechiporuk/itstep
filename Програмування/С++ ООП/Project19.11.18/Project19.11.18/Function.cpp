#include<iostream>
#include<ctime>
#include<stack>

using  namespace std;

ostream &operator << (ostream &s, const Ball & b)
{
       s << b.color;
	return s;
}