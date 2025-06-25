
#include <iostream>
#include <string>
using namespace std;
// 1.
//int main() {
//
//	string name; cout << "Enter a name : "; cin >> name;
//
//	string username; cout << "Enter a username: "; cin >> username;
//
//	string patr; cout << "Enter a patronymic: "; cin >> patr;
//
//	cout << "\n" << "First output: ";
//	string full_name = username + " " + name + " " + patr;
//	cout << full_name << "\n\n";
//
//	cout << "Second output: ";
//	string initials = username.substr(0, 1) + ". " + name.substr(0, 1) + ". " + patr.substr(0, 1) + ".";
//	cout << initials << "\n\n";
//
//	cout << "Second output: ";
//	string username_with_initials = username + " " + name.substr(0, 1) + ". " + patr.substr(0, 1) + ".";
//	cout << username_with_initials << "\n\n";
//
//	return 0;
//}

// 2.
//int main() {
//	setlocale(LC_ALL, "Rus");
//	string str{}; cout << "Enter str: "; cin >> str;
//	
//	int count_S{}, count_s{}, count_S_with_s{}, count_nums{}, count_upper_alpha{};
//
//	for (unsigned i{ 0 }; i < str.length(); i++) {
//		char s = str[i];
//		if (s == 'S') {
//			count_S += 1;
//			count_S_with_s += 1;
//		} if (s == 's') {
//			count_s += 1;
//			count_S_with_s += 1;
//		}
//		if (isdigit(s) > 0) {
//			count_nums += 1;
//		}
//		if (isalpha(s) > 0 and isupper(s) > 0) {
//			count_upper_alpha += 1;
//		}
//	}
//	string str_new = str;
//	for (unsigned i{ 0 }; i < str.length() - 1; i++) {
//		char temp = str[i];
//		if (isdigit(temp) > 0 and temp != '5') {
//			str_new[i] = '5';
//		}
//		else if (isalpha(temp) > 0 and islower(temp) > 0) {
//			str_new[i] = toupper(temp);
//		}
//	}
//	
//	printf("�������� ������ = %s,\n%s%d,\n%s%d,\n%s%d,\n%s%d,\n%s%d\n%s%s", str.c_str(), "���������� S = ", count_S, "���������� s = ", count_s, "���������� s � S = ", count_S_with_s, "���������� ���� = ", count_nums, "���������� ��������� ���� = ", count_upper_alpha, "����� ������ = ", str_new.c_str());
//
//
//	return 0;
//}

//3.
//
//void func_a(string& str) {
//	for (unsigned i{ 0 }; i < str.length() - 1; i++) {
//		if (str.substr(i, 3) == "min") {
//			str.replace(i, 3, "MAX");
//		}
//	}
//}
//string func_b(string str) {
//	string curr = "";
//	string res = str;
//	for (size_t i = 0; i != str.size(); ++i) {
//		if (str[i] == ' ') {
//			curr = "";
//			continue;
//		}
//		else {
//			curr += str[i];
//		}
//		if (curr.size() == 5) {
//			res.replace(str.find(curr), curr.size(), "ku-ku");
//			curr = "";
//		}
//	}
//	return res;
//}
//string func_c(string str) {
//	string new_str = str;
//	string str_to_replace = "ku-ku";
//	string str_for_replace = "ku-ka-re-ku";
//	size_t start = new_str.find(str_to_replace);
//	if (start == str.npos) {
//		new_str.insert(new_str.length() / 2, " ku - ku ku - ku ku - ku ");
//	}
//	while (start != _Meta_npos) {
//		new_str.replace(start, str_to_replace.length(), str_for_replace);
//		start = new_str.find(str_to_replace, start + str_to_replace.length());
//	}
//
//	return new_str;
//}
//string func_d(string str) {
//	string new_str = str;
//	string str_to_erase = "ku-ku";
//	size_t start = new_str.find(str_to_erase);
//
//	while (start != _Meta_npos) {
//		new_str.erase(start, str_to_erase.length());
//		start = new_str.find(str_to_erase);
//	}
//	return new_str;
//}
//void func_e(string& str) {
//	string str_to_delete = "ku-ku";
//	size_t start = str.rfind("ku-ku");
//	if (start != str.npos) {
//		str.erase(start + str_to_delete.length());
//	}
//}
//int func_f(string str) {
//	const string separate = " ,;:.\"!?'*\n";
//	int count = 0;
//	size_t start = str.find_first_not_of(separate);
//	while (start != _Meta_npos) {
//		size_t end = str.find_first_of(separate, start + 1);
//		if (end != _Meta_npos) {
//			count += 1;
//		}
//		else {
//			count += 1;
//			break;
//		}
//		start = str.find_first_not_of(separate, end + 1);
//	}
//	return count;
//}
//bool func_g(string str) {
//	bool flag = false;
//	size_t l_skobka = str.find('(');
//	int count_l{}, count_r{};
//
//	for (unsigned i{}; i < str.length(); i++) {
//		if (str[i] == '(') count_l += 1;
//		if (str[i] == ')') count_r += 1;
//	}
//
//	if (count_l == count_r) {
//		while (l_skobka != _Meta_npos) {
//			size_t r_skobka = str.find(')', l_skobka + 1);
//			if (r_skobka == _Meta_npos) {
//				flag = false;
//				break;
//			}
//			else {
//				if (r_skobka - l_skobka > 0) {
//					flag = true;
//				}
//			}
//			l_skobka = str.find('(', r_skobka + 1);
//		}
//	}
//	else {
//		flag = false;
//	}
//
//	return flag;
//}
//void func_h(string& str) {
//	string l_skb = "(";
//	string r_skb = ")";
//	size_t start = str.find(l_skb);
//
//	while (start != _Meta_npos) {
//		size_t end = str.find(r_skb, start + 1);
//		if (end == _Meta_npos) {
//			break;
//		}
//		str.erase(start, end - start + 1);
//		start = str.find(l_skb);
//	}
//	
//}
//
//int main() {
//	string str;
//
//	cout << "Enter str: ";
//	getline(cin,str);
//
//	cout << "\nBefore: " << str << endl;
//	
//	cout << "Result: "; func_h(str); cout << str;
//}


//4.
int func_switch(char c) {
	switch(c) {
	case 'I': return 1; break;
	case 'V': return 5; break;
	case 'X': return 10; break;
	case 'L': return 50; break;
	case 'C': return 100; break;
	case 'D': return 500; break;
	case 'M': return 1000; break;
	case ' ': return 0; break;
	}
}
int func_for_number(string str) {
	int sm{};
	for (unsigned i{}; i < str.length(); i++) {
		if (func_switch(str[i]) < func_switch(str[i + 1])) {
			sm -= func_switch(str[i]);
		} else if (func_switch(str[i]) >= func_switch(str[i + 1])) {
			sm += func_switch(str[i]);
		}
	}
	return sm;
}
int main() {
	string n = "MMDCCLXXXIV"; //2784
	cout << func_for_number(n);
}
