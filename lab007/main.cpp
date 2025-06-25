#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

// 1.
//int sum(int x, int y) {
//	return x + y;
//}
//int diff(int x, int y) {
//	return x - y;
//}
//int mult(int x, int y) {
//	return x * y;
//}
//int divi(int x, int y) {
//	return x / y;
//}
//
//int main() {
//	int a, b;
//
//	cout << "Enter a: "; cin >> a;
//	cout << "Enter b: "; cin >> b;
//	cout << "Result = " << sum(mult(sum(diff(a, 2), b), 5), mult(1000, a));
//	
//	return 0;
//}

// 2.
//double R(double x1, double y1, double x2, double y2) {
//	return pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);
//}
//
//double S(double a, double b, double c, double d = -1.) {
//	if (d != -1.) {
//		double p = (a + b + c + d) / 2.;
//		return pow(p * (p - a) * (p - b) * (p - c) * (p - d), 0.5);
//	}
//	else {
//		double p = (a + b + c) / 2.;
//		return pow(p * (p - a) * (p - b) * (p - c), 0.5);
//	}
//}
//
//int main() {
//
//	double x1, y1, x2, y2, x3, y3, x4, y4;
//	cout << "Enter x1: "; cin >> x1;
//	cout << "Enter y1: "; cin >> y1;
//	cout << "Enter x2: "; cin >> x2;
//	cout << "Enter y2: "; cin >> y2;
//	cout << "Enter x3: "; cin >> x3;
//	cout << "Enter y3: "; cin >> y3;
//	cout << "Enter x4: "; cin >> x4;
//	cout << "Enter y4: "; cin >> y4;
//
//	cout << "a) R = " << R(x1, y1, x2, y2) << endl;
//
//	cout << "b) R = " << R(0, 0, x2, y2);
//
//	cout << "\nc) S = " << S(R(x1, y1, x2, y2), R(x2, y2, x3, y3), R(x3, y3, x1, y1));
//
//	cout << "\nd) S = " << S(R(x1, y1, x2, y2), R(x2, y2, x3, y3), R(x3, y3, x4, y4), R(x4, y4, x1, y1));
//	
//	return 0;
//}

// 3.
//
//double f(double x);
//
//int main() {
//
//	double a, b;
//	cout << "Enter a: "; cin >> a;
//	cout << "Enter b: "; cin >> b;
//	double x[7]{};
//	unsigned i{};
//	while (i < 7) {
//		cout << "Enter " << i << " element: "; cin >> x[i];
//		i++;
//	}
//	double y[7]{};
//	double mx{}, cnt{};
//	for (unsigned j{}; j < 7; j++) {
//		y[j] = f(x[j]);
//		if (y[j] < 0) cnt++;
//		mx = max(mx, y[j]);
//	}
//
//	cout << "a) Result = " << 12.5 + f(2) - f(4) * f(10) + f(a) - f(b) + f(a * b);
//	
//	cout << "\nb) Count of negative numbers = " << cnt << " ,Maximum is " << mx;
//
//	return 0;
//}
//
//double f(double x) {
//	if (x < 0) {
//		return (2 * 3 + 1) / 3.;
//	}
//	else if (0 <= x and x <= 2 * M_PI) {
//		return pow(x, 2) - 3;
//	}
//	return (1 + pow(x, 3)) / 2 / x;
//}

// 4.
//
//void stars(int n = 4, int m = 0);
//void chessDesk(int n, int m = 1);
//
//int main() {
//	cout << "a)\n"; stars();
//
//	cout << "b)\n"; stars(6);
//
//	cout << "c)\n"; stars(8, 2);
//
//	cout << "d)\n"; chessDesk(10, 3);
//
//	return 0;
//}
//
//void stars(int n, int m ) {
//	
//	int* starsArray{ new int[n] };
//	for (unsigned i{}; i < n; i++) {
//		for (unsigned k{}; k < m; k++) { cout << ' '; }
//		for (unsigned j{}; j < n; j++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//	delete[] starsArray;
//}
//
//void chessDesk(int n, int m) {
//	int* deskArray{ new int[n] };
//	bool colour = false;
//	for (unsigned i{}; i < n; i++) {
//		for (unsigned k{}; k < m; k++) {
//			for (unsigned j{}; j < n; j++) {
//				if (colour) {
//					for (unsigned l{}; l < m; l++) {
//						cout << "*";
//					}
//					colour = !colour;
//				}
//				else {
//					for (unsigned l{}; l < m; l++) {
//						cout << "0";
//					}
//					colour = !colour;
//				}
//			}
//			cout << endl;
//		}
//	colour = !colour;
//	}
// delete[] deskArray;
//}

// 5.
//
//double fact(int n);
//int degree(int x, int n);
//
//int main() {
//
//	int N, M;
//	cout << "Enter N: "; cin >> N;
//	cout << "Enter M: "; cin >> M;
//	cout <<"a) Result = " << fact(N) * fact(M) / fact(N + M);
//
//	cout << "\nb) Result = " << degree(2, 10);
//
//	return 0;
//}
//
//double fact(int n) {
//	double multi{1.};
//	while (n > 0) {
//		multi *= n;
//		n--;
//	}
//	return multi;
//}
//
//int degree(int x, int n) {
//	int res = 1;
//	for (unsigned i{}; i < n; i++) {
//		res *= x;
//	}
//	return res;
//}

// 6.
//
//void sign(int x) {
//	if (x < 0) {
//		cout << "-";
//	}
//	else {
//		cout << "+";
//	}
//}
//
//void number(int x) {
//	x = abs(x);
//	switch (x) {
//		case 0: cout << "����"; break;
//		case 1: cout << "����"; break;
//		case 2: cout << "���"; break;
//		case 3: cout << "���"; break;
//		case 4: cout << "������"; break;
//		case 5: cout << "����"; break;
//		case 6: cout << "�����"; break;
//		case 7: cout << "����"; break;
//		case 8: cout << "������"; break;
//		case 9: cout << "������"; break;
//		case 10: cout << "������"; break;
//	}
//}
//
//int main() {
//	setlocale(LC_ALL, "Rus");
//	int x;
//	cout << "Enter x in [-10,10]: "; cin >> x;
//
//	sign(x); number(x);
//
//	return 0;
//}
