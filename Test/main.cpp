
/* int a, b, c, d, e; // дается трех значное число, вывести сумму этих чисел
   cin >> a;
   b = a / 100;
   c = (a % 100) / 10;
   d = a % 10;
   e = b + c + d;
   cout << e;

   int a, b;       // Дается натуральное число N. Выведите следующее за ним четное число.
   cin >> a;
   b = (a / 2) * 2 + 2;
   cout << b;

   int a, b, c, d, e, f, g; // Решение с партами отдельно в каждом, вывод общий.
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
//Допустим на входе мы получаем число 3602 Тогда на выходе мы должны получить 1:00:02
int main()
{
    int a, h, m, s;
    cin >> a; // Входное количество секунд
    h = a / 3600; // Получаем целое количество часов, т.е. 1
    m = a / 60 % 60; // 3602 мы делим нацело на 60 и получаем 60 и делим на остаток, который будет равен 0
    s = a % 60; // Получаем остаток 2 от деления 3602 на 60
    cout << h % 24 << ":" << m / 10 << m % 10 << ":" << s / 10 << s % 10; //m/10 необходимо для получения нуля перед количеством минут по условию задачи. С секундами поступаем аналогичным образом
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
#include <iostream>  // МКАД
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
ОТДЕЛ Задание + ;
ИСПОЛЬЗУЕТ Вывод ИЗ "...\Отделы\Обмен\", Приём;

ПЕР
ч, ч1, ч2: ЦЕЛ;

УКАЗ
ч : = Приём.Число();
ч1: = ч / 100;
ч2: = ч % 100;
ч2: = ч2 / 10 + ч2 % 10 * 10;
Вывод.ЧЦел("%d", ч1 - ч2 + 1, 0, 0, 0)

КОН Задание.
*/

/*#include <iostream>  // Симметричное число
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << (n / 100 == n % 10 * 10 + n / 10 % 10) << endl;
}
*/

#include <iostream>  // Улитка
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a / (b - c) - (b - (a % (b - c))) / (b - c)) + 1 << endl;
}