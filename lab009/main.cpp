#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


// 1.
//void arrayA(int* a, unsigned s);
//void arrayB(int* array, unsigned s);
//void arrayC(int* array, int* array1, unsigned s);
//void arrayD(int* array, int* array1, unsigned s);
//int arrayE(int* array, int x, unsigned s);
//void arrayF(int* array, int f, unsigned s);
//
//int main() {
//
//	const unsigned s{ 5 };
//	int a[s]{};
//
//	unsigned sA{ s };
//	int* aA{ new int [sA] {} };
//
//	arrayA(aA, sA);
//
//	cout << "\nb)\n\n";
//
//	const unsigned sB{ 5 };
//	int aB[sB]{ 1, 2, 3, 4, 5 };
//
//	unsigned sBD{ sB };
//	int* aBD{ new int [sBD] {2, 3, 4, 5, 6} };
//
//	arrayB(aBD, sBD);
//
//	cout << "\n\nc)\n\n";
//
//	const unsigned sC{ 5 };
//	int arrayCC[sC]{ 2, 4, 6, 8, 10 };
//	int arrayC1[sC]{ 1, 3, 5, 7, 9 };
//
//	unsigned sCD{ sC };
//	int* arrayCD{ new int [sCD] {2, 4, 6, 8, 10} };
//	int* array1CD{ new int [sCD] {1, 3, 5, 7, 9} };
//
//	arrayC(arrayCD, array1CD, sC);
//
//	cout << "\n\nd)\n\n";
//
//	const unsigned sD{ 5 };
//	int arrayDD[sD]{ 2, 4, 6, 8, 10 };
//	int arrayD1[sD]{ 1, 3, 5, 7, 9 };
//
//	unsigned sDD{ sD };
//	int* array11DD{ new int [sDD] {2, 4, 6, 8, 10} };
//	int* array1DD{ new int [sDD] {1, 3, 5, 7, 9} };
//
//	arrayD(array11DD, array1DD, sDD);
//
//	cout << "\n\ne)\n\n";
//
//	const unsigned sE{ 5 };
//	int arrayyE[sE]{ 1, 5, 2, 4, 3 };
//	int x; cout << "Enter x: "; cin >> x;
//
//	unsigned sED{ sE };
//	int* arrayED{ new int[sED] {1,5,2,4,3} };
//	
//	cout << "Result = " << arrayE(arrayED, x, sED);
//
//	cout << "\n\nf)\n\n";
//
//	const unsigned sF{ 5 };
//	int arrayForF[sF]{ 8, 4, 3, 2, 1 };
//	int f; cout << "Enter f: "; cin >> f;
//
//	arrayF(arrayForF, f, sF);
//
//}
//
//void arrayA(int* a, unsigned s) {
//	unsigned i{};
//	while (i < s) {
//		cout << "Enter a number: "; cin >> a[i];
//		i++;
//	}
//	delete[] a;
//}
//
//void arrayB(int* array, unsigned s) {
//	for (unsigned i{}; i < s; i++) {
//		cout << i << " number is " << array[i] << "\t";
//	}
//	delete[] array;
//}
//
//void arrayC(int* array, int* array1, unsigned s) {
//	int summa{};
//	for (unsigned i{}; i < s; i++) {
//		summa += array[i] * array1[i];
//	}
//	cout << "Result = " << summa;
//	delete[] array, array1;
//}
//
//void arrayD(int* array, int* array1, unsigned s) {
//	int summa{};
//	for (unsigned i{}; i < s; i++) {
//		summa += array[i] + array1[i];
//	}
//	cout << "Result = " << summa;
//	delete[] array, array1;
//}
//
//int arrayE(int* array, int x, unsigned s) {
//	int summa{ 0 };
//	for (unsigned i{}; i < s; i++) {
//		summa += array[i] * x;
//	}
//	return summa;
//	delete[] array;
//}
//
//void arrayF(int* array, int f, unsigned s) {
//	int looking{}, mn{ 10000 };
//	for (unsigned i{}; i < s; i++) {
//		if (array[i] == f) {
//			looking = array[i];
//		}
//		else if (array[i] > f) {
//			mn = min(mn, array[i]);
//		}
//	}
//	if (looking != f) {
//		cout << "Result = " << mn;
//	}
//	else {
//		cout << "Result = " << looking;
//	}
//}

// 2.
//
//void funcA(int (*array)[3], const int d);
//void funcB(int (*array)[3], const int d);
//void funcC(int (*array)[3], const int d);
//
//int main() {
//
//	const unsigned d{ 3 };
//	int table[d][3]{};
//
//	funcA(table, d);
//	funcB(table, d);
//	funcC(table, d);
//	return 0;
//}
//
//void funcA(int (*array)[3], const int d) {
//	for (unsigned i{}; i < d; i++) {
//		for (unsigned j{}; j < 3; j++) {
//			cout << "Enter a number: "; cin >> array[i][j];
//		}
//	}
//}
//
//void funcB(int (*array)[3], const int d) {
//	for (unsigned i{}; i < d; i++) {
//		for (unsigned j{}; j < 3; j++) {
//			cout << array[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}
//
//void funcC(int (*array)[3], const int d) {
//	for (unsigned i{}; i < d; i++) {
//		for (unsigned j{}; j < 3; j++) {
//			array[i][j] = pow( array[i][j], 2);
//		}
//	}
//}

// 3.

void funcA(int** array, unsigned rows, unsigned columns);
void funcB(int** array, unsigned rows, unsigned columns);
int* funcC(int** array, unsigned rows, unsigned columns);
int* funcD(int** array, unsigned rows, unsigned columns);
int** funcE(int** array, int** array1, unsigned rows, unsigned columns, unsigned rows1, unsigned columns1);

int main() {

	const unsigned rows{ 3 };
	unsigned columns{ 2 };
	int** matrica{ new int* [rows] {} };
	for (unsigned i{}; i < rows; i++) {
		matrica[i] = new int[columns] {};
	}

	const unsigned rows1{ 2 };
	unsigned columns1{ 3 };
	int** matrica1{ new int* [rows1] {} };
	for (unsigned i{}; i < rows1; i++) {
		matrica1[i] = new int[columns1] {};
	}

	funcA(matrica, rows, columns); funcA(matrica1, rows1, columns1);
	funcB(matrica, rows, columns); 
	funcC(matrica, rows, columns);
	funcD(matrica, rows, columns);
	funcE(matrica, matrica1, rows, columns, rows1, columns1);


	delete[] matrica, matrica1;

	return 0;
}

void funcA(int** array, unsigned rows, unsigned columns) {
	srand(time(NULL));
	for (unsigned i{}; i < rows; i++) {
		for (unsigned j{}; j < columns; j++) {
			array[i][j] = rand();
		}
	}
}

void funcB(int** array, unsigned rows, unsigned columns) {
	for (unsigned i{}; i < rows; i++) {
		for (unsigned j{}; j < columns; j++) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}

int* funcC(int** array, unsigned rows, unsigned columns) {
	int* arrayA{ new int[rows] {} };
	int sm{};
	for (unsigned i{}; i < rows; i++) {
		for (unsigned j{}; j < columns; j++) {
			sm += array[i][j];
		}
		arrayA[i] = sm;
		sm = 0;
	}
	return arrayA;
}

int* funcD(int** array, unsigned rows, unsigned columns) {
	
	int* newArray{ new int[rows] {} };

	int mn{ 1000000000 };
	for (unsigned i{}; i < rows; i++) {
		for (unsigned j{}; j < columns; j++) {
			mn = min(mn, array[i][j]);
		}
		newArray[i] = mn;
		mn = 1000000000;
	}
	return newArray;
}

int** funcE(int** array, int** array1, unsigned rows, unsigned columns, unsigned rows1, unsigned columns1) {
	
	int sm{};

	if (rows > rows1) {

		int** newArray{ new int* [rows] {} };
		for (unsigned i{}; i < rows; i++) {
			newArray[i] = new int[columns1];
		}

		for (unsigned i{}; i < rows; i++) {
			for (unsigned j{}; j < columns1; j++) {
				for (unsigned k{}; k < rows1; k++) {
					sm += array[i][k] * array1[k][j];
				}
				newArray[i][j] = sm;
				sm = 0;
			}
		}

		return newArray;
	}
	else if (rows1 > rows) {

	int** newArray{ new int* [rows] {} };
	for (unsigned i{}; i < rows; i++) {
		newArray[i] = new int[columns1];
	}

	for (unsigned i{}; i < rows; i++) {
		for (unsigned j{}; j < columns1; j++) {
			for (unsigned k{}; k < rows1; k++) {
				sm += array[i][k] * array1[k][j];
			}
			newArray[i][j] = sm;
			sm = 0;
		}
	}

	return newArray;
	}
}
