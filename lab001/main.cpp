#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

// 1.
  int main()
  {
      setlocale(0, "");
      double a, b, s;
      cout << "Введите длины сторон \n";
      cout << "a= ";
      cin >> a;
      cout << "b= ";
      cin >> b;
      s = a * b;
      cout << "S = " << s;
      return 0;
  }

// 2.
// int main()
// {
//     setlocale(0, "");
//     double a, b;
//     cout << "Введите а, b: ";
//     cin >> a >> b;
//     cout << "Сумма чисел = " << a + b << endl;
//     cout << "Разность чисел = " << a - b << endl;
//     cout << "Произведение чисел = " << a * b << endl;
//     return 0;
// }

// 3.
//  int main()
//  {
//      setlocale(0, "");
//      double tc, tf, tk;
//      cout << "Введите температуру в градусах Цельсия: ";
//      cin >> tc;
//      tf = 9/5 * tc + 32;
//      tk = tc + 273;
//      cout << "Температура в градусах шкалы Фаренгейта = " << tf << "\n";
//      cout << "Температура в градусах шкалы Кельвина = " << tk << "\n";
//      return 0;
//  }

// 4.
//  int main()
//  {
//      double r, v;
//      const int pi = 3.14159;
//      cout << "Введите радиус: ";
//      cin >> r;
//      v = 4/3 * pi * r * r * r;
//      cout << "Объем шара = " << v;
//      return 0;
//  }

// 5.
//  int main()
//  {
//      double radius, length, area;
//      cout << "Введите площадь S = ";
//      cin >> area;
//      radius = sqrt(area / M_PI);
//      length = 2.0 * M_PI * radius;
//      cout << "радиус = " << radius << endl;
//      cout << "длина окружности = " << length;
//      return 0;
//  }

// 6.
// int main()
// {
//     float r, h, v, s;
//     cout << "Введите r и h: ";
//     cin >> r >> h;
//     s = 2 * M_PI * r * h + 2 * M_PI * r * r;
//     v = M_PI * r * r * h;
//     cout << "Объем цилиндра = " << v << endl;
//     cout << "Площадь поверхности цилиндра = " << s << endl;
//     return 0;
// }

// 7.
//  int main()
//  {
//      int a, b;
//      cout << "Введите a и b: ";
//      cin >> a >> b;
//      cout << "Сумма последних цифр двух чисел = " << a%10 + b%10;
//      return 0;
//  }

// 8.
//  int main()
//  {
//      int n;
//      cout << "Enter n: ";
//      cin >> n;
//      cout << "Первая цифра числа = " << n / 1000 << endl;
//      cout << "Последняя цифра числа = " << n % 10;
//      return 0;
//  }

// 9.
//  int main()
//  {
//      int n, hours, minutes, seconds;
//      cout << "Enter n: ";
//      cin >> n;
//      hours = n / 3600;
//      minutes = n % 3600 / 60;
//      seconds = n % 60;
//      cout << "Количество часов = " << hours << endl;
//      cout << "Количество минут = " << minutes << endl;
//      cout << "Количество секунд = " << seconds;
//      return 0;
//  }

// 10.
//  int main()
//  {
//      float a, b, c, v, s;
//      cout << "Enter a, b, c: ";
//      cin >> a >> b >> c;
//      v = a * b * c;
//      s = 2 * (a*b + b*c + a*c);
//      cout << "Объем = " << v << endl;
//      cout << "Площадь = " << s << endl;
//      return 0;
//  }
