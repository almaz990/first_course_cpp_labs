#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// 1.
//int main() {
//	setlocale(LC_ALL, "Rus");
//
//	const int rows = 2, columns = 3;
//	int table[rows][columns]{};
//
//	srand(time(NULL));
//
//	for (int i = 0; i < rows; ++i) {
//		for (int j = 0; j < columns; ++j) {
//			table[i][j] = rand() % 31;
//		}
//	}
//
//	// a)
//	for (int i = 0; i < rows; ++i) {
//		for (int j = 0; j < columns; ++j) {
//			cout << table[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	// b)
//	/*int sm = 0;
//	for (int i = 0; i < rows; ++i) {
//		for (int j = 0; j < columns; ++j) {
//			sm += table[i][j];
//		}
//	}
//	if (sm % 2 == 0) cout << "Сумма четная";
//	else cout << "Сумма нечетная";*/
//
//	// c)
//	//int sm = 0, m = 1;
//	//for (int i = 0; i < rows; ++i) {
//	//	for (int j = 0; j < columns; ++j) {
//	//		if (table[i][j] >= 2 and table[i][j] <= 9) {
//	//			sm += table[i][j];
//	//			m *= table[i][j];
//	//		}
//	//	}
//	//}
//	//cout << "Сумма: " << sm << endl << "Произведение: " << m;
//}

// 2.
//int main() {
//	setlocale(LC_ALL, "Rus");
//
//	const int rows = 3, columns = 4;
//	int a[rows][columns];
//
//	int mn = 10000000000;
//	for (int i = 0; i < rows; ++i) {
//		for (int j = 0; j < columns; ++j) {
//			cin >> a[i][j];
//			mn = min(mn, a[i][j]);
//		}
//	}
//	for (int i = 0; i < rows; ++i) {
//		for (int j = 0; j < columns; ++j) {
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	// a)
//	//for (int i = 1; i < rows + 1; ++i) {
//	//	for (int j = 1; j < columns + 1; ++j) {
//	//		//cout << "�������: " << mn << " " << "������: " << i << " " << "�������: " << j;
//	//		if (a[i - 1][j - 1] == mn) cout << "�������: " << mn << " " << "������: " << i << " " << "�������: " << j;
//	//	}
//	//}
//
//	// b)
//	//int minJ = 0;
//	//int newArray[rows][columns];
//	//for (int i = 0; i < rows; ++i) {
//	//	for (int j = 0; j < columns; ++j) {
//	//		if (a[i][j] == mn) minJ = j;
//	//		newArray[i][j] == a[i][j];
//	//	}
//	//}
//	//for (int i = 0; i < rows; ++i) {
//	//	for (int j = 0; j < columns ; ++j) {
//	//		newArray[i][j] = a[i][j];
//	//		newArray[i][minJ] = a[i][columns - 1];
//	//		newArray[i][columns - 1] = a[i][minJ];
//
//	//	}
//	//}
//	//for (int i = 0; i < rows ; ++i) {
//	//	for (int j =0; j < columns ; ++j) {
//	//		cout << newArray[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	// �)
//	//int x[columns]{};
//	//for (int i = 0; i < rows; ++i) {
//	//	for (int j = 0; j < columns; ++j) {
//	//		x[j] += a[i][j];
//	//	}
//	//}
//	//for (int i = 0; i < columns; ++i) {
//	//	cout << x[i] << " ";
//	//}
//
//	// �)
//	//for (int i = 0; i < rows; ++i) {
//	//	for (int j = 0; j < columns; j++) {
//	//		a[0][j] = mn;
//	//	}
//	//}
//	//for (int i = 0; i < rows; ++i) {
//	//	for (int j = 0; j < columns; j++) {
//	//		cout << a[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//}

// 3.
//int main() {
//	setlocale(LC_ALL, "Rus");
//
//	// a)
//	//const int n = 5;
//	//int a[n][n]{};
//	//int cnt = 0;
//	//for (int i = 0;i < n; i++) {
//	//	for (int j = 0; j < n; j++) {
//	//		a[i][cnt] = 1;
//	//	}
//	//	cnt++;
//	//}
//	//for (int i = 0; i < n; i++) {
//	//	for (int j =0; j < n; j++) {
//	//		cout << a[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	//b)
//	//const int n = 6;
//	//int a[n][n]{};
//	//int cnt = 0, u = 0;
//	//for (int i = 0; i < n; i++) {
//	//	u = 0;
//	//	for (int j = 0; j < n; j++) {
//	//		if (j >= cnt) {
//	//			a[i][j] = n - u;
//	//			u++;
//	//		}
//	//	}
//	//	cnt++;
//	//}
//	//for (int i = 0; i < n; i++) {
//	//	for (int j =0; j < n; j++) {
//	//		cout << a[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	// �)
//	//const int n = 5;
//	//int a[n][n]{};
//	//int nN = -1;
//	//for (int i = 4; i >= 0; --i) {
//	//	for (int j = 4; j >= 0; --j) {
//	//		a[i][j] = j - nN;
//	//		if (a[i][j] < 0) a[i][j] = 0;
//	//	}
//	//	nN++;
//	//}
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < n; j++) {
//	//		cout << a[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	// �)
//	//const int n = 8;
//	//int a[n][n]{};
//	//bool colour = true;
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < n; j++) {
//	//		if (colour) {
//	//			a[i][j] = 1;
//	//			colour = false;
//	//		}
//	//		else {
//	//			a[i][j] = 0;
//	//			colour = true;
//	//		}
//	//	}
//	//	if (colour) colour = false;
//	//	else colour = true;
//	//}
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < n; j++) {
//	//		cout << a[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	// �)
//	//const int n = 10;
//	//int a[n][n]{};
//	//int cnt = 1, cnt1 = -1, cnt2 = n;
//	//bool b = false;
//	//for (int k = 0; k < n / 2 ; k++) {
//	//	for (int i = 0; i < n ; i++) {
//	//		for (int j = 0; j < n; j++) {
//	//			b = cnt1 < i and i < cnt2 and cnt1 < j and j < cnt2;
//	//			if (k == 0) {
//	//				a[i][j] = n / 2 - cnt;
//	//			}
//	//			else if (k == 1 and b){
//	//				a[i][j] = n / 2 - cnt;
//	//			} else if (k == 2 and b) {
//	//				a[i][j] = n / 2 - cnt;
//	//			}
//	//			else if (k == 3 and b) {
//	//				a[i][j] = n / 2 - cnt;
//	//			}
//	//			else if (k == 4 and b) {
//	//				a[i][j] = n / 2 - cnt;
//	//			}
//	//			
//	//		}
//	//	}
//	//	++cnt; ++cnt1; --cnt2;
//	//}
//	//for (int i = 0; i < n; i++) {
//	//	for (int j =0; j < n; j++) {
//	//		cout << a[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//}

// 4.
int main() {
	setlocale(LC_ALL, "Rus");

	int a[2][4][3];
	int red = 1, blue = 2, white = 3;
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 3; k++) {
				cin >> a[i][j][k];
			}
		}
	}

	bool colour = false, input = false;

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 4; ++j) {
			for (int k = 1; k < 3; ++k) {
				if (a[i][0][k] == a[i][0][k - 1]) {
					colour = true;
				}
				else {
					colour = false;
				}
			}
		}
	}
	if (colour)
	{
		cout << "������� ����������� ���������" << endl;
		input = true;
	}
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 4; ++j) {
			for (int k = 1; k < 3; ++k) {
				if (a[i][3][k] == a[i][3][k - 1]) {
					colour = true;
				}
				else {
					colour = false;
				}
			}
		}
	}
	if (colour)
	{
		cout << "������� ����������� ���������" << endl;
		input = true;
	}
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 4; ++j) {
			for (int k = 1; k < 3; ++k) {
				if (a[0][j][k] == a[0][j][k - 1]) {
					colour = true;
				}
				else {
					colour = false;
				}
			}
		}
	}
	if (colour)
	{
		cout << "������� ����������� ���������" << endl;
		input = true;
	}
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 4; ++j) {
			for (int k = 1; k < 3; ++k) {
				if (a[1][j][k] == a[1][j][k - 1]) {
					colour = true;
				}
				else {
					colour = false;
				}
			}
		}
	}
	if (colour)
	{
		cout << "������� ����������� ���������" << endl;
		input = true;
	}
	for (int i = 0; i < 2; ++i) {
		for (int j = 1; j < 4; ++j) {
			for (int k = 0; k < 3; ++k) {
				if (a[i][j][0] == a[i][j - 1][0]) {
					colour = true;
				}
				else {
					colour = false;
				}
			}
		}
	}
	if (colour)
	{
		cout << "������� ����������� ���������" << endl;
		input = true;
	}
	for (int i = 0; i < 2; ++i) {
		for (int j = 1; j < 4; ++j) {
			for (int k = 1; k < 3; ++k) {
				if (a[i][j][3] == a[i][j-1][3]) {
					colour = true;
				}
				else {
					colour = false;
				}
			}
		}
	}
	if (colour)
	{
		cout << "������� ����������� ���������" << endl;
		input = true;
	}
	if (!input) cout << "����������� ���������� �� �������";
}
