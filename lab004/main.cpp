#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 1.
//int main() {
//	setlocale(LC_ALL, "Rus");
//	int array[10];
//	int i{ 0 };
//	while (i < 10) {
//		cin >> array[i];
//		++i;
//	}
//	// a)
	//cout << "Второй: " << array[1];
	//cout << "Предпоследний: " << array[9];

	// b)
	//for (i = 1; i < 10; i += 2) {
	//	cout << array[i] << endl;
	//}

	// c)
	//double sm = 0.;
	//for (i = 0; i < 10; ++i) {
	//	sm += array[i];
	//}
	//cout << sm / 10.;

	// d)
	//int array1[]{ -2,4,3,-7,0,12,9,-2,4,2 };
	//for (i = 0; i < 10; ++i) {
	//	if (array[i] < 0 and array1[i] > 0) {
	//		cout << "(" << array[i] << ")" << " + " << array1[i] << " = " << array[i] + array1[i] << endl;
	//	}
	//	else if (array1[i] < 0 and array[i] > 0) {
	//		cout << array[i] << " + " << "(" << array1[i] << ")" << " = " << array[i] + array1[i] << endl;
	//	}
	//	else if (array[i] < 0 and array1[i] < 0) {
	//		cout << "(" << array[i] << ")" << " + " << "(" << array1[i] << ")" << " = " << array[i] + array1[i] << endl;
	//	}
	//	else {
	//		cout << array[i] << " + " << array1[i] << " = "  << array[i] + array1[i] << endl;
	//	}
	//}
//}

// 2.
//int main() {
//	setlocale(LC_ALL, "Rus");
//
//	int array[8];
//	
//	for (int k = 0; k < 8; ++k) {
//
//		if (k == 0) array[k] = 0;
//		if (k == 1) array[k] = 1;
//		if (k == 2) array[k] = 1;
//		if (k > 2) array[k] = array[k - 2] + array[k - 1];
//		
//		cout << array[k] << " " ;
//	}
//}

// 3.
//int main() {
//
//	int x[7], y[7];
//
//	srand(time(NULL));
//
//	for (int i = 0; i < 7; ++i) {
//		x[i] = rand() % 21;
//		y[i] = rand() % 21;
//	}
//	for (int i = 0; i < 7; ++i) {
//		cout << x[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < 7; ++i) {
//		cout << y[i] << " ";
//	}
//	cout << endl;
//	 //a)
//	/*int third[21];
//	int count = 0;
//	int cnt = 0;
//	for (int i = 0; i < 21; i++) {
//		if (count == 0) {
//			third[i] = x[cnt];
//			count = 1;
//		}
//		else if (count == 1) {
//			third[i] = y[cnt];
//			count = 2;
//		}
//		else if (count == 2) {
//			third[i] = x[cnt] + y[cnt];
//			count = 0;
//			cnt++;
//		}
//	}
//	for (int i = 0; i < 21; ++i) {
//		cout << third[i] << " ";
//	}*/
//	// b)
//	//int second[14];
//	//bool flag = true;
//	//int cnt = 0;
//	//int cnt1 = 0;
//	//for (int i = 0; i < 14; ++i) {
//	//	if (flag) {
//	//		second[i] = x[6 - cnt1];
//	//		flag = false;
//	//		cnt1++;
//	//	}
//	//	else if (!flag) {
//	//		if (cnt == 6) {
//	//			second[i] = y[cnt] + x[0];
//	//		}
//	//		else if (cnt < 6) {
//	//			second[i] = y[cnt] + x[cnt + 1];
//	//			flag = true;
//	//			cnt++;
//	//			
//	//		}
//	//	}
//	//	
//	//}
//	//for (int i = 0; i < 14; ++i) {
//	//	cout << second[i] << " ";
//	//}
//}

// 4.
//int main() {
//	setlocale(LC_ALL, "Rus");
//	int array[10];
//	int i = 0;
//	while (i < 10) {
//		cout << "Введите число: "; cin >> array[i];
//		++i;
//	}
//	int w = 0;
//	cout << "Введите число w: "; cin >> w;
//	for (int j = 0; j < 10; ++j) {
//		for (int k = 0; k < 10; ++k) {
//			if (j == k) continue;
//			if (array[j] + array[k] == w)
//				cout << "Результат: " <<  array[j] << " " << array[k] << " " << "Индексы: " << j << " " << k << endl;
//
//		}
//	}
//
//}
