#include <iostream>

using namespace std;

// 1. b
// int main()
// {
//     setlocale(0, "");
//     double a1, b1, a2, b2;
//     cout << "Введите стороны 1-го прямоугольника \n";
//     cout << "a1= "; cin >> a1;
//     cout << "b1= "; cin >> b1;
//     cout << "Введите стороны 2-го прямоугольника \n";
//     cout << "a2= "; cin >> a2;
//     cout << "b2= "; cin >> b2;
//     double s1, s2;
//     s1 = a1 * b1;
//     s2 = a2 * b2;
//     if (s1 > s2)
//         cout << "max площадь у первого, S= " << s1;    
//     else if (s2 > s1)
//         cout << "max площадь у второго, S= " << s2;
//     else
//         cout << "Площади первого и второго равны";
//     return 0;
// }

// 1. c
// int main()
// {
//     setlocale(0, "");
//     double a1, b1, a2, b2, a3, b3;
//     cout << "Введите стороны 1-го прямоугольника \n";
//     cout << "a1= "; cin >> a1;
//     cout << "b1= "; cin >> b1;
//     cout << "Введите стороны 2-го прямоугольника \n";
//     cout << "a2= "; cin >> a2;
//     cout << "b2= "; cin >> b2;
//     cout << "Введите стороны 3-го прямоугольника \n";
//     cout << "a3= "; cin >> a3;
//     cout << "b3= "; cin >> b3;
//     double s1, s2, s3;
//     s1 = a1 * b1;
//     s2 = a2 * b2;
//     s3 = a3 * b3;
//     // 1)
//     // if (s2 > s1)
//     //     if (s2 > s3)
//     //         cout << "Максимальная площадь у 2-го, S = " << s2;
//     //     else
//     //         cout << "Максимальная площадь у 3-го, S = " << s3;
//     // else if (s1 > s2)
//     //     if (s1 > s3)
//     //         cout << "Максимальная площадь у 1-го, S = " << s1;
//     //     else
//     //         cout << "Максимальная площадь у 3-го, S = " << s3;
//     // else if (s2 > s3)
//     //     if (s2 > s1)
//     //         cout << "Максимальная площадь у 2-го, S = " << s2;
//     //     else
//     //         cout << "Максимальная площадь у 1-го, S = " << s1;
//     // else if (s3 > s2)
//     //     if (s3 > s1)
//     //         cout << "Максимальная площадь у 3-го, S = " << s3;
//     //     else
//     //         cout << "Максимальная площадь у 1-го, S = " << s1;            
//     // else if (s3 > s1)
//     //     if (s3 > s2)
//     //         cout << "Максимальная площадь у 3-го, S = " << s3;
//     //     else
//     //         cout << "Максимальная площадь у 2-го, S = " << s2;
//     // else if (s1 > s3)
//     //     if (s1 > s2)
//     //         cout << "Максимальная площадь у 1-го, S = " << s1;
//     //     else
//     //         cout << "Максимальная площадь у 2-го, S = " << s2;
    
//     // 2)
//     // if (s1 < s2)
//     //     s1 = s2;
//     // cout << "max площадь = " << (s1 > s3 ? s1 : s3);

//     // 3)
//     //cout << "max площадь = " << max(s3, max(s1, s2));
// }

// 2.
// int main()
// {
//     int a;
//     cin >> a;
//     cout << "a)" << endl;
//     if (a > 0)
//         cout << "Число положительное" << endl;
//     else if (a < 0)
//         cout << "Число отрицательное" << endl;
//     else
//         cout << "Число равно нулю" << endl;  
//     cout << "b)" << endl;
//     if (a % 2 == 0)
//         cout << "Число четное" << endl;
//     else
//         cout << "Число нечетное" << endl;
// }

//3. a)
int main()
{
    double x, f;
    cin >> x;
    if ( x <= -2 )
        f = 0;
    else if ( x <= 10)
        f = x*x + 4*x + 5; 
    else
        cout << 1 / (x*x + 4*x - 5);
    cout << f; 
}

// 3. b)
// int main()
// {
//     double x, f;
//     cin >> x;
//     if (!x)
//         cout << "Введено некорректное число" << endl;
//     else if ( x <= -2 )
//         cout << 0;
//     else if ( x <= 0 )
//         cout << x*x + 4*x + 5; 
//     else
//         cout << 1 / (x*x + 4*x - 5); 
// }

// 4.
// int main()
// {
//     int dM, dW;
//     cout << "Введите дату: " << endl;
//     cout << "День месяца: " << endl;
//     cin >> dM;
//     cout << "Номер дня в неделе: " << endl;
//     cin >> dW;
//     if ( ((dM == 13) and (dW == 5 or dW == 2)) or (dM == 17 and dW == 5) )
//         cout << "Неудачный день" << endl;
// }

// 5.
// int main()
// {
//     float a, b, r, z, c;
//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     cout << "r = ";
//     cin >> r;
//     cout << "z = ";
//     cin >> z;
//     cout << "c = ";
//     cin >> c;
//     cout << "1)" << endl;
//     if ( a >= 2*r and b >= 2*r)
//         cout << "Уместится" << endl;
//     else
//         cout << "Не уместится" << endl;
//     cout << "2)" << endl;
//     if ( a >= 2*r and b >= 2*r and z <= c)
//         cout << "Уместится" << endl;
//     else
//         cout << "Не уместится" << endl;
// }

// 5 b)
// int main()
// {
//     float x, y, z, a, b;
//     cout << "x = ";
//     cin >> x;
//     cout << "y = ";
//     cin >> y;
//     cout << "z = ";
//     cin >> z;
//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     if ( (x <= a and y <= b) or (x <= b and y <= a) or (x <= a and z <= b) or (x <= b and z <= a) or (y <= a and z <= b) or (y <= b and z <= a))
//         cout << "Кирпич пройдет" << endl;
//     else
//         cout << "Кирпич не пройдет" << endl;
// }

// 6.
// int main() {
//     setlocale(0, "");
//     int x;
//     cout << "Введите свою оценку: ";
//     cin >> x;
//     switch (x) {
//         case 5: cout << "отлично"; break;
//         case 4: cout << "хорошо";
//         case 3: cout << "удовлетворительно"; break;
//         case 2:
//         case 1: cout << "плохо"; break;
//         default: cout << "неверные данные";
//     }
//     return 0;
// }

// 7.
// int main() {
//     float n, m;
//     char f;
//     int op;
//     cout << "Введите 1-е число\n";
//     cin >> n;
//     cout << "Введите 2-е число\n";
//     cin >> m;
//     cout << "Введите знак арифметической операции\n";
//     cin >> f;
//     switch (f) {
//         case '+': cout << "Результат = " << n + m; break;
//         case '-': cout << "Результат = " << n - m; break;
//         case '*': cout << "Результат = " << n * m; break;
//         default: cout << "Ошибка ввода"; break;
//     }
// }

// 8.
// int main() {
//     float x, y;
//     cout << "Введите x: \n";
//     cin >> x;
//     cout << "Введите y: \n";
//     cin >> y;
//     double n = pow(x,2) + pow(y,2);
//     if (n >= -4 and n <= 4) cout << "10 очков";
//     else if (n >= -16 and n <= 16) cout << "5 очков";
//     else cout << "0 очков";
//             
// }

// 9.
// int main() {
//     float x, y;
//     cout << "Введите x: \n";
//     cin >> x;
//     cout << "Введите y: \n";
//     cin >> y;
//     // a)
//     //if (x >= -2 and x <= 0 and y <= 1 and y >= 0)
//     //    cout << "Точка принадлежит области пункта a)";
//     // b)
//     //if (pow(x, 2) + pow(y, 2) <= 25)
//     //   cout << "Точка принадлежит области пункта b)";
//     // c)
//     // 
//     // if (pow(x, 2) + pow(y, 2) <= 36 and pow(x, 2) + pow(y, 2) >= 9)
//     //     cout << "Точка принадлежит области пункта c)";
//     // d)
//     // if (x>0&&y>0&&y<=-2*x+2)
//     //   cout << "Точка принадлежит области пункта d)";
// }

// 10.
// int main() {
//     double x, y, z;
//     cin >> x >> y >> z; 
//     if ( x + y > z and x + z > y and y + z > x) {
//         cout << "Треугольник существует" << endl;
//         if ( x == z and z == y)
//             cout << "Треугольник равносторонний";
//         if (x == z and z != y or x == y and y != z or y == z and z != x)
//             cout << "Треугольник равнобедренный";
//         if (x != z and z != y and x != y)
//             cout << "Треугольник разносторонний";
//     }
// }

// 11.
// int main() {
//     int day, num_month, year;
//     cin >> day >> num_month >> year;
//     int day1, num_month1, year1;
//     cin >> day1 >> num_month1 >> year1;
//     int age = year1 - year - 1;
//     if (num_month1 > num_month or num_month1 == num_month and day1 >= day)
//         age += 1;
//     if (age % 10 == 1)
//         cout << "Вам " << age << " " << "год";
//     if (age % 10 == 2 or age % 10 == 3 or age % 10 == 4)
//         cout << "Вам " << age << " " << "года";
//     else
//         cout << "Вам " << age << " " << "лет";
// }

// 12.
// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     a)
//     int sm;
//     if (a > 10)
//         sm += a;
//     if (b > 10)
//         sm += b;
//     if (c > 10)
//         sm += c;
//     cout << "Сумма = " << sm;
    
//     b)
//     int n;
//     if (a % 2 == 0)
//         n += 1;
//     if (b % 2 == 0)
//         n += 1;
//     if (c % 2 == 0)
//         n += 1;
//     cout << "Количество = " << n;

//     c)
//     int sm = a + b + c;
//     int mx = max(a, max(b,c));
//     int mn = min(a, min(b,c));
//     int k = sm - mx - mn;
//     cout << "Среднее = " << k;

//     d)
//     int mn = min(a, min(b,c));
//     if (mn == a)
//         cout << "Номер = " << "1";
//     if (mn == b)
//         cout << "Номер = " << "2";
//     if (mn == c)
//         cout << "Номер = " << "3";
// }
