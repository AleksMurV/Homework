
/* int a, b, c, d, e; // ������ ���� ������� �����, ������� ����� ���� �����
   cin >> a;
   b = a / 100;
   c = (a % 100) / 10;
   d = a % 10;
   e = b + c + d;
   cout << e;

   int a, b;       // ������ ����������� ����� N. �������� ��������� �� ��� ������ �����.
   cin >> a;
   b = (a / 2) * 2 + 2;
   cout << b;

   int a, b, c, d, e, f, g; // ������� � ������� �������� � ������, ����� �����.
   cin >> a >> b >> c;
   d = (a + 1) / 2;
   e = (b + 1) / 2;
   f = (c + 1) / 2;
   g = d + e + f;
   cout << g;
*/
/*#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a * c + b * c / 100 << " " << b * c % 100;
}
*/

/* #include <iostream>
using namespace std;
//�������� �� ����� �� �������� ����� 3602 ����� �� ������ �� ������ �������� 1:00:02
int main()
{
    int a, h, m, s;
    cin >> a; // ������� ���������� ������
    h = a / 3600; // �������� ����� ���������� �����, �.�. 1
    m = a / 60 % 60; // 3602 �� ����� ������ �� 60 � �������� 60 � ����� �� �������, ������� ����� ����� 0
    s = a % 60; // �������� ������� 2 �� ������� 3602 �� 60
    cout << h % 24 << ":" << m / 10 << m % 10 << ":" << s / 10 << s % 10; //m/10 ���������� ��� ��������� ���� ����� ����������� ����� �� ������� ������. � ��������� ��������� ����������� �������
}


#include <iostream>
using namespace std;

int main()
{
    int a, h, m, s, m1, s1;
    cin >> a;
    h = (a / 3600) % 24;
    m = ((a / 60) % 60) / 10;
    m1 = ((a / 60) % 60) % 10;
    s = (a % 60) / 10;
    s1 = (a % 60) % 10;
    cout << h << ":" << m << m1 << ":" << s << s1;
}



#include <iostream>
using namespace std;

int main()
{
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    cout << (h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1);
}
*/
/*
#include <iostream>  // ����
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b;
    c = a * b % 109;
    d = (c + 109) % 109;
    cout << d;
}*/

/*
����� ������� + ;
���������� ����� �� "...\������\�����\", ����;

���
�, �1, �2: ���;

����
� : = ����.�����();
�1: = � / 100;
�2: = � % 100;
�2: = �2 / 10 + �2 % 10 * 10;
�����.����("%d", �1 - �2 + 1, 0, 0, 0)

��� �������.
*/

/*#include <iostream>  // ������������ �����
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << (n / 100 == n % 10 * 10 + n / 10 % 10) << endl;
}
*/

#include <iostream>  // ������
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a / (b - c) - (b - (a % (b - c))) / (b - c)) + 1 << endl;
}