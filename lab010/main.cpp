#include <iostream>

using namespace std;


//1.
//int cfact(int n);
//
//int main() {
//
//	int n;
//	cout << "Enter n: "; cin >> n;
//
//	cfact(n);
//
//	return 0;
//}
//
//int cfact(int n) {
//	if (n >= 1) cout << n * cfact(n - 1) << "\t";
//	return 1;
//}

//2.
//int pos();
//
//int main() {
//	
//	pos();
//
//	return 0;
//}
//
//int pos() {
//	int n; cout << "Enter n: "; cin >> n;
//	if (n != 0) {
//		pos();
//		cout << n << "\t";
//	}
//	return 0;
//}

//3.
//int cif(int n);
//
//int main() {
//
//	int n; cout << "Enter n: "; cin >> n;
//
//	cout << cif(n);
//
//	return 0;
//}
//
//int cif(int n) {
//	if (n / 10 >= 1) {
//		return 1 + cif(n / 10);
//	}
//
//	return 1;
//}

//4.
//int dv(int n);
//
//int main() {
//	int n; cout << "Enter n: "; cin >> n;
//
//	cout << dv(n);
//
//	return 0;
//}
//
//int dv(int n) {
//	if (n / 2 >= 1) {
//		cout << dv(n / 2);
//	}
//	return n % 2;
//}

// 5.
//int sm(int n, int m);
//
//int main() {
//	
//	int n; cout << "Enter n: "; cin >> n;
//	int m; cout << "Enter m: "; cin >> m;
//
//	cout << sm(n, m);
//
//	return 0;
//}
//
//int sm(int n, int m) {
//
//	if (n > 0 or m > 0) {
//		if (n > 0) {
//			return 1 + sm(n - 1, m); 
//		}
//		else if (m > 0) {
//			return 1 + sm(n, m - 1);
//		}
//
//	}
//	return 0;
//}

// 6.
//int mult(int, int);
//
//int main() {
//
//	int n; cout << "Enter n: "; cin >> n;
//	int m; cout << "Enter m: "; cin >> m;
//
//	cout << mult(m, n);
//	return 0;
//}
//
//int mult(int n, int m) {
//	if (m > 0) {
//		return n + mult(n, m - 1);
//	}
//	return 0;
//}

// 7.
//double rad(int);
//
//int main() {
//
//	int n; cout << "Enter n: "; cin >> n;
//
//	cout << rad(n) << endl << pow(2 + pow(2, 0.5), 0.5);
//
//	return 0;
//}
//
//double rad(int n) {
//	if (n > 1) {
//		return pow(2 + rad(n - 1), 0.5);
//	}
//	return pow(2, 0.5);
//}

//8.
//double root(double (*f)(double), int a, int b, double eps);
//double f(double x);
//
//int main() {
//
//	double eps = 0.1;
//	
//	cout << root(f, 0, 100, eps);
//
//
//	return 0;
//}
//
//double root(double (*f)(double), int a, int b, double eps) {
//
//	while (abs(a - b) >= eps) {
//		double m = (a + b) / 2.;
//		if (f(m) == 0.) {
//			return m;
//		}
//
//		else if (f(a) * f(m) < 0) {
//			return root(f, a, m, eps);
//		}
//		else if (f(m) * f(b) < 0) {
//			return root(f, m, b, eps);
//		} 
//	}
//}
//
//double f(double x) {
//	return x*x - 4; 
//}

// 9.
//int binom(int n, int k);
//
//int main() {
//
//	int n; cout << "Enter n: "; cin >> n;
//	int k; cout << "Enter k: "; cin >> k;
//
//	cout << binom(n, k);
//
//	return 0;
//}
//
//int binom(int n, int k) {
//	
//	if (k == 0 or k == n) {
//		return 1;
//	}
//	return binom(n - 1, k) + binom(n - 1, k - 1);
//}

// 10.
//int sm(int);
//
//int main() {
//
//	int n; cout << "Enter n: "; cin >> n;
//
//	cout << sm(n);
//
//	return 0;
//}
//
//int sm(int n) {
//
//	if (n - 10 > 0) {
//		return n % 10 + sm(n / 10);
//	}
//
//	return n % 10;
//}

// 11.
//bool funcA(int[], const unsigned);
//bool funcB(int[], const unsigned, int);
//bool funcC(int[], int[], unsigned, unsigned, const unsigned);
//
//int main() {
//
//	const unsigned size = 6;
//	int numbers[size]{ -90, -5, -17, -4, -2, 0 };
//
//	cout << "a) " << funcA(numbers, size) << endl;
//
//	int n; cout << "Enter n: "; cin >> n;
//
//	cout << "b) " << funcB(numbers, size, n) << endl;
//
//	
//	int numbers1[size]{ 10, 10, 10, 10, 10, 10 };
//
//	cout << "c) " << funcC(numbers, numbers1, size, 0, size) << endl;
//	
//	return 0;
//}
//
//bool funcA(int numbers[], unsigned size) {
//	if (numbers[size - 1] > 0) {
//		return true;
//	}
//	if (size == 1) return false;
//	return funcA(numbers, size - 1);
//}
//
//bool funcB(int numbers[], unsigned size, int n) {
//	if (numbers[size - 1] > n) {
//		return true;
//	}
//	if (size == 1) return false;
//	return funcB(numbers, size - 1, n);
//}
//
//bool funcC(int numbers[], int numbers1[], unsigned size, unsigned s, const unsigned size1) {
//	if (s == size1) return true;
//	if (numbers[s] == numbers1[size - 1]) {
//		return false;
//	}
//	else {
//		if (size == 1) {
//			return funcC(numbers, numbers1, size1, s + 1, size1);
//		}
//		else {
//			return funcC(numbers, numbers1, size - 1, s, size1);
//		}
//	}
//}

// 12.
//int mx(int[], unsigned, int);
//int mx_sec(int[], unsigned, int, int);
//int mx_cnt(int[], unsigned, int, unsigned);
//
//int main() {
//
//	const unsigned size = 5;
//	int numbers[size]{ 1, 7, 5, 7, 1 };
//
//	cout << "a) " << mx(numbers, size, 0) << endl;
//
//	cout << "b) " << mx_sec(numbers, size, mx(numbers, size, 0), 0) << endl;
//
//	cout << "c) " << mx_cnt(numbers, size, mx(numbers, size, 0), 0) << endl;
//
//	return 0;
//}
//
//int mx(int nums[], unsigned s, int MX) {
//	if (nums[s - 1] > MX) {
//		MX = nums[s - 1];
//	}
//	if (s == 1) return MX;
//	return mx(nums, s - 1, MX);
//}
//
//int mx_sec(int nums[], unsigned s, int MX, int mxSec) {
//	if (nums[s - 1] < MX and nums[s - 1] > mxSec) {
//		mxSec = nums[s - 1];
//	}
//	if (s == 1) return mxSec;
//	return mx_sec(nums, s - 1, MX, mxSec);
//}
//
//int mx_cnt(int nums[], unsigned s, int MX, unsigned cnt) {
//	if (nums[s - 1] == MX) {
//		cnt += 1;
//	}
//	if (s == 1) return cnt;
//	return mx_cnt(nums, s - 1, MX, cnt);
//}

// 13.
//void recursion_sort(int arr[], int start, int end);
//int max_element(int arr[], int start, int end, int mx);
//int index(int arr[], int start, int end);
//
//int main() {
//	const int size = 10;
//	int array[size]{ 2909090, 9, 45, 87, 1, 0, 567, 90000, 3, 18 };
//	
//	recursion_sort(array, 0, size);
//	
//	for (int i{}; i < size; i++) {
//		cout << array[i] << "\t";
//	}
//	
//}
//void recursion_sort(int arr[], int start, int end) {
//
//	int indx = index(arr, start, end);
//	int mx = max_element(arr, start, end, 0);
//	int current_value = arr[start];
//
//	arr[start] = mx;
//	arr[indx] = current_value;
//
//	if (start == end - 1) return;
//
//	return recursion_sort(arr, start + 1, end);
//}
//int max_element(int arr[], int start, int end, int mx) {
//
//	if (arr[start] > mx) {
//		mx = arr[start];
//	}
//
//	if (start == end - 1) {
//		return mx;
//	}
//
//	return max_element(arr, start + 1, end, mx);
//}
//int index(int arr[], int start, int end) {
//
//	if (arr[start] == max_element(arr, start, end, 0)) {
//		return start;
//	}
//
//	return index(arr, start + 1, end);
//}

// 14.
//int binary_search(int arr[], int start, int end, int mn);
//int func_for_binary_searchB(int arr[], int start, int end, int sm);
//int func_for_binary_searchC(int arr[], int start, int end, int mult, int W);
//
//int main() {
//	const int size = 11;
//	int array[size]{ -90, -65, -5, -2, 2, 5, 8, 12, 78, 90, 9090 };
//
//	cout << "a) " << binary_search(array, 0, size, 78) << endl;
//	
//	cout << "b) " << func_for_binary_searchB(array, 0, size, 0) << endl;
//
//	cout << "c) " << func_for_binary_searchC(array, 0, size, 1, 100);
//
//	return 0;
//}
//
//int binary_search(int arr[], int start, int end, int mn) {
//	
//	if (left <= right) {
//		int left = start;
//		int right = end - 1;
//		int mid = (left + right) / 2;
//		int guess = arr[mid];
//		if (mn == guess) {
//			return guess;
//		}
//		else if (mn < guess) {
//			right = mid + 1;
//			return binary_search(arr, left , right, mn);
//		}
//		else {
//			left = mid + 1;
//			return binary_search(arr, left, right + 1, mn);
//		}
//	}
//	
//}
//
//int func_for_binary_searchB(int arr[], int start, int end, int sm) {
//	if (arr[start] < 0) sm += binary_search(arr, start, end, arr[start]);
//	if (arr[start] >= 0) return sm;
//	return func_for_binary_searchB(arr, start + 1, end, sm);
//}
//
//int func_for_binary_searchC(int arr[], int start, int end, int mult, int W) {
//	if (pow(arr[start], 2) < W) mult *= binary_search(arr, start, end, arr[start]);
//	if (start == end - 1) return mult;
//	return func_for_binary_searchC(arr, start + 1, end, mult, W);
//}
