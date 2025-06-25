#include <iostream>
#include <string>

using namespace std;

struct Student {
    string surname;
    string name;
    string patr;
    string group;
    int marks[4];
};

int main() {
    setlocale(LC_ALL, "Rus");
    Student array[3];

    for (size_t i = 0; i != 3; ++i) {
        cout << "Введите инициалы, номер группы " << i + 1 <<  " студента:\n";
        cin >> array[i].surname >> array[i].name >> array[i].patr >> array[i].group;
        cout << "Введите 4 оценки студента:\n";
        for (size_t j = 0; j != 4; ++j) {
            cin >> array[i].marks[j];
        }
    }

    cout << "a):\n";

    for (size_t i = 0; i != 3; ++i) {
        cout << "Наилучшая оценка " << i + 1 << " студента = ";
        int mx = 0;
        for (size_t j = 0; j != 4; ++j) {
            mx = max(mx, array[i].marks[j]);
        }
        cout << mx << endl;
    }

    cout << "b):\n";

    cout << "Введите количество студентов: ";
    size_t size;
    cin >> size;
    Student* arr = new Student[size];

    for (size_t i = 0; i != size; ++i) {
    cout << "Введите инициалы, номер группы " << i + 1 <<  " студента:\n";
    cin >> arr[i].surname >> arr[i].name >> arr[i].patr >> arr[i].group;
    cout << "Введите 4 оценки студента:\n";
        for (size_t j = 0; j != 4; ++j) {
            cin >> arr[i].marks[j];
        }
    }
    double eps = 0.00001;
    for (size_t i = 0; i != size; ++i) {
        cout << "Средний балл ";
        double average = 0.0;
        for (size_t j = 0; j != 4; ++j) {
            average += arr[i].marks[j];
        }
        double res = average / 4.0;
        if (abs(res - 5.0) <= eps) {
            cout << " " << arr[i].surname << " " << arr[i].name << " " << arr[i].patr;
            cout << " = " << res << endl;
        } else {
            cout << i + 1 << " студента = " << res << endl;
        }
    }    
}