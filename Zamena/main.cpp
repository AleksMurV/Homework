#include <iostream>
using namespace std;

int main()
{
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl; //	2	3
	int c;
	c = a;
	a = b;
	b = c;
	cout << a << "\t" << b << endl; //	3	2
}