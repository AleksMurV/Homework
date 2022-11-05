#include<iostream>
#include<conio.h>
using namespace std;

#define UP_ARROW 72
#define UP_DOWN  80 
#define UP_RIGHT 75 
#define UP_LEFT  77

#define Enter  13
#define Escape 27

//define SHOOTER_IF
//define SHOOTER_SW

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();
#ifdef SHOOTER_IF
		if (key == 'w' || key == 'W' || key == UP_ARROW)
		{
			cout << "�����" << endl;
		}
		else if (key == 's' || key == 'S' || key == UP_DOWN)
		{
			cout << "�����" << endl;
		}
		else if (key == 'd' || key == 'D' || key == UP_RIGHT)
		{
			cout << "������" << endl;
		}
		else if (key == 'a' || key == 'A' || key == UP_LEFT)
		{
			cout << "�����" << endl;
		}
		else if (key == ' ')
		{
			cout << "������" << endl;
		}
		else if (key == Enter)
		{
			cout << "�����" << endl;
		}
		else
		{
			if (key != -32 && key != Escape) cout << "Error" << endl;
		}
#endif // SHOOTER_IF
#ifdef SHOOTER_SW
		switch (key)
		{
		case 'w': case 'W': case UP_ARROW: cout << "�����" << endl; break;
		case 's': case 'S': case UP_DOWN:  cout << "�����" << endl;  break;
		case 'd': case 'D': case UP_RIGHT: cout << "������" << endl; break;
		case 'a': case 'A': case UP_LEFT:  cout << "�����" << endl;  break;
		case ' ':    cout << "������" << endl; break;
		case Enter:  cout << "�����" << endl;  break;
		case Escape: cout << "�����" << endl;  break;
		case -32:break;
		default: cout << "Error" << endl;
		}
#endif // SHOOTER_SW

	} while (key != Escape);
}