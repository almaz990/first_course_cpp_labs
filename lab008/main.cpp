#include <iostream>
#include <cmath>
#define PI 3.14159265 
using namespace std;

// 1.
//
//double tF(double tC) {
//	return  9 / 5. * tC + 32;
//}
//
//double tK(double tC) {
//	return tC + 273.;
//}
//
//void tT(double tC1, double& farenheit1, double& kelvin1) {
//	farenheit1 = 9 / 5. * tC1 + 32;
//	kelvin1 = tC1 + 273.;
//}
//
//int main() {
//
//	double tC;
//	cout << "Enter tC: "; cin >> tC;
//	double tC1, farenheit1, kelvin1;
//	cout << "Enter tC1: "; cin >> tC1;
//
//	cout << tC << " in Farenheit scale is " << tF(tC) << endl;
//	cout << tC << " in Kelvin scale is " << tK(tC) << endl;
//
//	tT(tC1, farenheit1, kelvin1);
//	cout << tC1 << " in Farenheit scale is " << farenheit1 << endl;
//	cout << tC1 << " in Kelvin scale is " << kelvin1 << endl;
//
//	return 0;
//}

// 2.
//
//void roots(double a, double b, double c, double& x1, double& x2) {
//
//	double d = pow(b, 2) - 4 * a * c;
//	if (d > 0) {
//		x1 = (- b + pow(d, 0.5)) / 2 / a;
//		x2 = ( - b - pow(d, 0.5)) / 2 / a;
//		cout << "First root is " << x1 << endl;
//		cout << "Second root is " << x2 << endl;
//	}
//	else if (d == 0) {
//		x1 = -b / 2 / a;
//		cout << "First and Second roots are " << x1 << endl;
//	}
//	else {
//		cout << "There are no roots";
//	}
//}
//
//int main() {
//
//	double a, b, c, x1, x2;
//	cout << "Enter a: "; cin >> a;
//	cout << "Enter b: "; cin >> b;
//	cout << "Enter c: "; cin >> c;
//
//	roots(a, b, c, x1, x2);
//
//	return 0;
//}

// 3.
//
//bool func(double x, double& f) {
//
//	if (x <= 2) {
//		if (x == 0) return false;
//		f = (2 * x + (1 / (1 - x))) / 3 / x;
//		return true;
//	}
//	else if (2 < x and x <= 5) {
//		f = (10 * 7 + 2) / 7.;
//		return true;
//	}
//	else {
//		f = -3 - x;
//		return true;
//	}
//
//	return false;
//}
//
//int main() {
//
//	double a, b, f1, f2, f3;
//
//	cout << "Enter a: "; cin >> a;
//	cout << "Enter b: "; cin >> b;
//
//	func(2, f1);
//	func(0, f2);
//	func(a, f3);
//
//	if (func(0, f2) == func(2, f1) == func(a, f3) == true) { 
//		cout << "First expression: " << f1 - f2 * f3 << endl;
//	}
//	else {
//		cout << "First expression - ERROR" << endl;
//	}
//
//	func(6, f2);
//	func(a * b, f3);
//
//	if (func(2, f1) == func(6, f2) == func(a * b, f3) == true) {
//		cout << "Second expression: " << f1 - f2 + f3 << endl;
//	}
//	else {
//		cout << "Second expression - ERROR" << endl;
//	}
//	return 0;
//}

// 5.
//
//double average(double a, double b) {
//	return (a + b) / 2.;
//}
//
//double average(double a, double b, double c) {
//	return (a + b+ c) / 3.;
//}
//
//double average(double a, double b, double c, double d) {
//	return (a + b + c + d) / 4.;
//}
//
//int main() {
//
//	double a, b, c, d;
//
//	cout << "Enter a: "; cin >> a;
//	cout << "Enter b: "; cin >> b;
//	cout << "Enter c: "; cin >> c;
//	cout << "Enter d: "; cin >> d;
//
//	cout << "Average of a and b is " << average(a, b) << endl;
//	cout << "Average of a, b and c is " << average(a, b, c) << endl;
//	cout << "Average of a, b, c and d is " << average(a, b, c, d) << endl;
//
//	return 0;
//}

// 6.
//
//int square(int side, int height) {
//	return side * height / 2;
//}
//
//double square(int side1, int side2, int angle) {
//	return sin(angle * PI / 180) * side1 * side2 / 2.;
//}
//
//double square(double a, double b, double c) {
//	double p = (a + b + c) / 2.;
//	return pow(p * (p - a) * (p - b) * (p - c), 0.5);
//}
//
//int main() {
//
//	int side1, side2,  height, angle;
//	double side11, side22, side33;
//
//	cout << "Enter side1: "; cin >> side1;
//	cout << "Enter side2: "; cin >> side2;
//	cout << "Enter height to side1: "; cin >> height;
//	cout << "Enter angle: "; cin >> angle;
//	cout << "Enter side11: "; cin >> side11;
//	cout << "Enter side22: "; cin >> side22;
//	cout << "Enter side33: "; cin >> side33;
//
//	cout << "Square 1 = " << square(side1, height) << endl;
//	cout << "Square 2 = " << square(side1, side2, angle) << endl;
//	cout << "Square 3 = " << square(side11, side22, side33) << endl;
//
//	return 0;
//}

// 7.

void ticket(int n) {
	if (n / 100000 + n % 100000 / 10000 + n % 10000 / 1000 == n % 1000 / 100 + n % 100 / 10 + n % 10) {
		cout << "Ticket " << n << " lucky";
	}
	else {
		cout << "Ticket " << n << " unlucky";
	}
	cout << endl;
}

void ticket(int b1, int b2, int b3, int b4, int b5, int b6) {
	if (b1 + b2 + b3 == b4 + b5 + b6) {
		cout << "Ticket " << b1 << b2 << b3 << b4 << b5 << b6 << " lucky";
	}
	else {
		cout << "Ticket " << b1 << b2 << b3 << b4 << b5 << b6 << " unlucky";
	}
	cout << endl;
}

void ticket(int c123, int c456) {
	if (c123 / 100 + c123 % 100 / 10 + c123 % 10 == c456 / 100 + c456 % 100 / 10 + c456 % 10) {
		cout << "Ticket " << c123 << c456 << " lucky";
	}
	else {
		cout << "Ticket " << c123 << c456 << " unlucky";
	}
	cout << endl;
}


int main() {

	int na, nb1, nb2, nb3, nb4, nb5, nb6, nc123, nc456;

	cout << "Enter na: "; cin >> na;
	cout << "Enter nb1: "; cin >> nb1;
	cout << "Enter nb2: "; cin >> nb2;
	cout << "Enter nb3: "; cin >> nb3;
	cout << "Enter nb4: "; cin >> nb4;
	cout << "Enter nb5: "; cin >> nb5;
	cout << "Enter nb6: "; cin >> nb6;
	cout << "Enter nc123: "; cin >> nc123;
	cout << "Enter nc456: "; cin >> nc456;

	ticket(na); ticket(nb1, nb2, nb3, nb4, nb5, nb6); ticket(nc123, nc456);

	return 0;
}
