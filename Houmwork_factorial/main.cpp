#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;


//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACHI_PREDEL
//#define PREDEL

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef FACTORIAL
	int n;
	double f = 1; // Факториал
	cout << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
	cout << n << "! = " << f << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;       //Основание степени - это число котторое умножается само на себя
	int n;          //Показатель степени
	double N = 1;   //Степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	cout << "Таблица ASCII - символов:\n";
	setlocale(LC_ALL, "Rus");
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "Rus");
#endif // ASCII

#ifdef FIBONACHI_PREDEL
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACHI_PREDEL

	int n;
	cout << "Enter number: "; cin >> n;
	for (int i = 0; i >= 0; i++)
	{
		int res = fibonachi(i);
		if (res <= n)
		{
			cout << res << "\t";
		}
		else
			break;
	}
	cout << endl;


#ifdef PREDEL
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 2; i < n; i++)
	{
		bool simple = true; //предпологаем, что число постое,
		//но нужно это проверить:
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
#endif // PREDEL


}
