#include <iostream>
#include <string>
using namespace std;

struct Address {
    string street;
    string house;
    int flat;
};

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    string surname;
    string name;
    Address address;
    Date date;
};


int main() {
    Person array[5];
    setlocale(LC_ALL, "Rus");
    for(size_t i = 0; i != 5; ++i) {
        cout << "Введите данные для персонажа " << i + 1 << ":\n";
        cout << "Enter a surname: "; cin >> array[i].surname;
        cout << "Enter a name: "; cin >> array[i].name;
        cout << "Enter a address: "; cin >> array[i].address.street >> array[i].address.house >> array[i].address.flat;
        cout << "Enter a birthday: "; cin >> array[i].date.day >> array[i].date.month >> array[i].date.year;
    }
    Date curd;
    cout << "Введите текущую дату"; cin >> curd.day >> curd.month >> curd.year;


    cout << "a):\n";

    for (size_t i = 0; i != 5; ++i) {
        if (curd.day == array[i].date.day && curd.month == array[i].date.month && curd.year == array[i].date.year) {
            cout << array[i].surname << " " << array[i].name << endl;
            cout << array[i].address.street << " " << array[i].address.house << " " << array[i].address.flat << endl;
            cout << array[i].date.day << " " << array[i].date.month << " " << array[i].date.year << endl;
        }
    }

    cout << "b):\n";
    for (size_t i = 0; i != 5; ++i) {
        if (array[i].date.day >= curd.day && array[i].date.month == curd.month) {
            cout << "Возраст " << i + 1 << " человека = " << curd.year - array[i].date.year << endl;
        }
        else if (array[i].date.month > curd.month) {
            cout << "Возраст " << i + 1 << " человека = " << curd.year - array[i].date.year << endl;
        }
        else if (array[i].date.year != curd.year){
            cout << "Возраст " << i + 1 << " человека = " << curd.year - array[i].date.year - 1 << endl;
        }
        else {
            cout << "Возраст " << i + 1 << " человека = " << curd.year - array[i].date.year << endl;
        }
    }
    return 0;
}