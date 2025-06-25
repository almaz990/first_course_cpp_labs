
#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

// 1.
int main()
{
	setlocale(LC_ALL, "Rus");

	// 1)
	auto x = 1.5;
	auto y = M_PI;
	cout << "��������: " << "x: " << x << " y: " << y << endl;
	cout << "������: " << "x: " << &x << " y: " << &y << endl;
	cout << "��������: " << &y - &x << endl;
	cout << "�������: " << "x: " << sizeof(x) << " y: " << sizeof(y) << endl;
//
//	// 2)
//	/*double a[5]{ 1.5, M_PI, -0.7, 3.0, -2.4};
//	double* ptr1 = a + 1;
//	double* ptr4 = a + 4;
//	
//	cout << "First element: " << *a << " " << &a << endl;
//	cout << "Second element: " << *(a + 1) << " " << ptr1 << endl;
//	cout << "Last element: " << *(a + 4) << " " << ptr4 << endl;
//	cout << "Sub of 1 and 2 elems: " << &a[1] - &a[0] << endl;*/
//	
//	// 3)
//	//auto x = 1.5;
//	//auto y = M_PI;
//	//double* x1 = new double{ x + y };
//	//double* y1 = new double{ y - x };
//	//cout << "�������� x1 = " << *x1 << "\t�������� y1 = " << *y1 << endl;
//	//cout << "����� x1 = " << x1 << "\t����� y1 = " << y1 << endl;
//	//cout << "�������� ������� x1 � y1 = " << x1 - y1;
//	//delete x1, y1;
//}

// 2.
//int main() {
//	size_t n;
//	cout << "Enter size of array: "; cin >> n;
//	double* array{ new double[n] {} };
//
//	for (size_t i = 0; i < n; ++i) {
//		cout << "Enter value: ";
//		cin >> *(array + i);
//	}
//	cout << "\n\n";
	//1)
	/*double sum1 = 0;
	for (double* p{ array }; p < &array[n]; ++p) {
		if (*p > 0) sum1 += *p;
	}
	cout << "sum1 = " << sum1;*/

	// 2)
	//double min1 = pow(10,10), min2 = pow(10,10);
	//for (size_t i{}; i < n; ++i) {
	//	min1 = min(min1, array[i]);
	//	if (array[i] == min1) continue;
	//	min2 = min(min2, array[i]);
	//}
	//cout << "Second minimum: " << min2;

	// 3)
	//double* array1{ new double[n] {} };

	//for (unsigned i{}; i < n; i++) {
	//	cout << "Enter value: ";
	//	cin >> *(array1 + i) ;
	//	if (*(array1 + i) > 0) *(array1 + i) *= 10;
	//	if (*(array1 + i) < 0) *(array1 + i) /= 10;
	//}
	//for (unsigned i{}; i < n; i++) {
	//	cout << array1[i] << "\t";
	//}

	// 4)
	//double scalar { 0. };
	//for (unsigned i{}; i < n; i++) {
	//	scalar += array[i] * array1[i];
	//}
	//cout << "Scalar sum = " << scalar;
	//delete array, array1;
}

// 3.
//int main() {
//
//	unsigned n{};
//	cout << "Enter a size of array: "; cin >> n;
//
//	int** array{ new int* [n] {} };
//
//	for (unsigned i{}; i < n; i++) {
//		array[i] = new int[n] {};
//	}
//	for (unsigned i{}; i < n; i++) {
//		for (unsigned j{}; j < n; j++) {
//			cout << "Enter a value ";  cin >> array[i][j];
//		}
//	}
//	for (unsigned i{}; i < n; i++) {
//		for (unsigned j{}; j < n; j++) {
//			cout << array[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	cout << endl;
//
//	// 1)
//	//int* nullArray{ new int[n] {} };
//	//int cnt{};
//	//for (unsigned i{}; i < n; i++) {
//	//	for (unsigned j{}; j < n; j++) {
//	//		if (array[i][j] == 0) nullArray[j] += 1;
//	//	}
//	//}
//	//cout << endl;
//	//for (unsigned i{}; i < n; i++) {
//	//	cout << nullArray[i] << "\t";
//	//}
//
//	// 2)
//	//unsigned cntJ{ n - 1 };
//	//int product{ 1 };
//	//for (unsigned i{}; i < n; i++) {
//	//	product *= array[i][cntJ];
//	//	cntJ--;
//	//}
//	//cout << "\n Product of numbers = " << product;
//
//	// 3)
//	//int cntJ{ 0 }, sum{ 0 };
//	//for (unsigned i{}; i < n; i++) {
//	//	for (unsigned j{}; j < n; j++) {
//	//		if (j > cntJ) sum += array[i][j];
//	//	}
//	//	cntJ++;
//	//}
//	//cout << "The sum of positive numbers = " << sum;
//	//delete array;
//}


//int main() {
//
//	const int days = 7;
//	int* daysArray{ new int[days] {} };
//
//	for (unsigned i{}; i < days; i++) {
//		int number{};
//		cout << "Enter a number of measurements: "; cin >> number;
//		daysArray[i] = number;
//	}
//
//	int** temp{ new int* [days] {} };
//
//	for (unsigned i{}; i < days; i++) {
//		temp[i] = new int[daysArray[i]];
//	}
//
//	for (unsigned i{}; i < days; i++) {
//		cout << "Enter the measurements of " << i + 1 << " day: ";
//		for (unsigned j{}; j < daysArray[i]; j++) {
//			int m{};
//			cin >> m;
//			temp[i][j] = m;
//		}
//		cout << endl;
//	}
//
//	// a)
//	int mn = 1000000000;
//	for (unsigned i{}; i < 1; i++) {
//		for (unsigned j{}; j < daysArray[i]; j++) {
//			mn = min(mn, temp[i][j]);
//		}
//	}
//	cout << "Minimum at 1st day is " << mn << endl;
//
//	// b)
//	int cnt67 = 0;
//	for (unsigned i{5}; i < days; i++) {
//		for (unsigned j{}; j < daysArray[i]; j++) {
//			if (temp[i][j] < 0) cnt67 += 1;
//		}
//	}
//	cout << "The number of negative temperatures on the weekend is " << cnt67 << endl;
//
//	// c)
//	int mx = 0, mxd = 0;
//	for (unsigned i{}; i < days; i++) {
//		for (unsigned j{}; j < daysArray[i]; j++) {
//			if (temp[i][j] > mx) {
//				mx = temp[i][j];
//				mxd = i;
//			}
//			
//		}
//	}
//	cout << "Maximum is " << mx << " Day is " << mxd << endl;
//
//	// d)
//	double cnt1 = 0., smn1 = 0.;
//	for (unsigned i{}; i < days; i++) {
//		for (unsigned j{}; j < daysArray[i]; j++) {
//			if (j == 0) {
//				cnt1 += 1;
//				smn1 += temp[i][j];
//			}
//		}
//	}
//	cout << "The arithmetic mean is " << smn1 / cnt1 << endl;
// delete[] daysArray, temp;
//}
