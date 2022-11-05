#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int num;
	int rev = 0;
	cout << "¬ведите число: "; cin >> num;
	int buf = num;
	while (buf)
	{
		rev *= 10;
		rev += buf % 10;
		buf /= 10;
	}
	cout << num << endl;
	cout << rev << endl;
	if (rev == num)
	{
		cout << "Ёто число палиндром" << endl;
	}
	else
	{
		cout << "Ёто обычное число" << endl;
	}

}