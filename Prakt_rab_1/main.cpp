//#include<iostream>

//using namespace std;
//int main() 
//{
	//setlocale(LC_ALL, "Russian"); 
	//float a; 
	//cout << "������� ������� �����: "; 
	//cin >> a;
	//cout << int(a) << " ���. " << int(100 * (a - int(a))) << " ���." << endl;
	//cin.get(); 
//}
#include<iostream> 

using namespace std;
int main()
{
	setlocale(LC_ALL "Russian");
	cout << "������� ������� �����: ";
	double x, y, n;
	cin >> x; y = modf(x, &n);
	printf("%d ���. %d ���.", (int)n, (int)(y * 100));
	getchar();
	return 0;
}