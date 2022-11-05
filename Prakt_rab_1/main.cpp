//#include<iostream>

//using namespace std;
//int main() 
//{
	//setlocale(LC_ALL, "Russian"); 
	//float a; 
	//cout << "¬ведите дробное число: "; 
	//cin >> a;
	//cout << int(a) << " грн. " << int(100 * (a - int(a))) << " коп." << endl;
	//cin.get(); 
//}
#include<iostream> 

using namespace std;
int main()
{
	setlocale(LC_ALL "Russian");
	cout << "¬ведите дробное число: ";
	double x, y, n;
	cin >> x; y = modf(x, &n);
	printf("%d грн. %d коп.", (int)n, (int)(y * 100));
	getchar();
	return 0;
}