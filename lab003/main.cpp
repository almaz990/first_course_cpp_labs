#include <iostream>
#include <math.h>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

// 1. a)
 int main() {
    setlocale(LC_ALL, "Rus");
    int k = 0;
    while ( k <= 100) {
        double tf = 9 * k / 5 + 32 ;
        cout << "Температура в градусах Цельсия = " << k << endl;
        cout << "Температура в градусах Фаренгейта = " << tf << endl;
        k += 10;
        }
 }

// 1. b)
  //int main() {
  //    double k = 0.;
  //    do {
  //        cout << log(k + 1) * sin(k) << endl;
  //        k += 0.5;
  //    } while (k <= 5.);
  //}

// 1. c)
 //int main() {
 //    for (double k = 0.; k <= 2. * 3.14159; k += 3.14159 / 6.) {
 //        cout << cos(k) << endl;
 //    }
 //}

// 1. d)
 //int main() {
 //    for (double k = -1.5; k <= 1.5; k += 0.25) {
 //        if (k > 1.) {
 //            cout << 1. + sqrt(abs(cos(k))) << endl;
 //        } else if (k >= -0.5 and k <= 1.) {
 //            cout << k + 1. << endl;
 //        } else {
 //            cout << 1. - k*k << endl;
 //        }
 //    }
 //}

// 2.
 //int main() {
 //    setlocale(LC_ALL, "Rus");
 //    cout << "Введите 7 чисел" << endl;
 //    int n, mn = 1000000000, sm = 0, count = 0;
 //    for (int i = 0; i < 7; i++) {
 //        cin >> n;
 //        if (n < 0) {
 //            count += 1;
 //        }
 //        if (n > 9 and n < 100) {
 //            sm += n;
 //        }
 //        mn = min(mn, n);
 //    }
 //    cout << "a) " << count << endl << "b) " << sm << endl << "c) " << mn << endl;
 //}

// 3.
 //int main() {
 //    
 //    int n;
 //    cout << "Enter n: "; cin >> n;
 //    double f = 1.0;
 //    double sm = 0;
 //    for (int i = 1; i <= n; ++i, f / (i * 2.0)) {
 //        sm += (f / (i * 2.0));
 //    }
 //    cout << sm;
 //}

// 4.
 //int main() {
 //    int n;
 //    cout << "Enter n";
 //    cin >> n;
 //    double x;
 //    cout << "Enter x";
 //    cin >> x;
 //    double sm = cos(x);
 //    for (int i = 0; i < n; ++i) {
 //        sm = cos(sm + x);
 //    }
 //    cout << sm << endl;
 //    double sm1 = pow(x, 0.5);
 //    for (int j = 0; j < n; ++j) {
 //        sm1 = pow(sm1 + x, 0.5);
 //    }
 //    cout << sm1 << endl;
 //}

// 5.
 //int main()
 //{
 //    double e = 0.001;
 //    double sm = 1.0;
 //    bool b = false;

 //    for (int i = 3;; i += 2)
 //    {
 //        if (1.0 / i < e) {
 //            break;
 //        }
 //        if (b == false)
 //        {
 //            sm -= 1.0 / i;
 //            b = true;
 //        }
 //        else
 //        {
 //            sm += 1.0 / i;
 //            b = false;
 //        }

 //    }
 //    cout << sm << endl;
 //    cout << "\n\n" << 3.14159 / 4.0;
 //}

//6.
 //int main() {
 //    setlocale(LC_ALL, "Rus");
 //    bool input = true;
 //    int n, count = 0, count2 = 0;
 //    while (true) {
 //        cout << "Введите 0 для остановки ввода" << endl;
 //        cin >> n;
 //        if (n == 0) break;
 //        count += 1;
 //        if ((n & 1) == 0) count2 += 1;
 //    }
 //    cout << "Количество введенных чисел = " << count << endl;
 //    cout << "Количество четных чисел = " << count2 << endl;
 //}

// 7.
 //int main()
 //{
 //    setlocale(LC_ALL, "Rus");
 //    int n, xn = 0, yn = 0, x1 = 0, y1 = 0;
 //    int x = 0, y = 0;
 //    double p = 0.0;
 //    cin >> n;
 //    for (int i = 1; i < n + 1; ++i)
 //    {
 //        cin >> xn >> yn;
 //        if (i == 1)
 //        {
 //            x = xn;
 //            y = yn;
 //            continue;
 //        }
 //        else
 //        {
 //            p += pow(pow((xn - x1), 2) + pow((yn - y1), 2), 0.5);
 //        }
 //        if (i == n)
 //        {
 //            p += pow(pow((x - xn), 2) + pow((y - yn), 2), 0.5);
 //        }
 //        x1 = xn;
 //        y1 = yn;
 //    }
 //    cout << n << " " << p << endl;
 //}

// 8.
//int main() {
//	setlocale(LC_ALL, "Rus");
//	int n;
//	cin >> n;
//	bool colour = true;
//	for (int i = 0; i <= n; ++i) {
//		cout << endl;
//		for (int j = 0; j <= n; ++j) {
//			if (colour) {
//				cout << "*";
//				colour = false;
//			}
//			else {
//				cout << "o";
//				colour = true;
//			}
//		}
//	}
//}

// 9.
//int main() {
//	setlocale(LC_ALL, "Rus");
//	int count = 0;
//	int mx = 0;
//	while (true) {
//		cout << "Введите число: ";
//		int x;
//		cin >> x;
//		if (x > mx) {
//			mx = x;
//			count = 1;
//		}
//		else if (x == mx) count++;
//
//		if (x == 0) break;
//	}
//	cout << count;
//}
