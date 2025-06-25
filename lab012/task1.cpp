#include <iostream>
#include <string>
using namespace std;

struct Building {
    string street;
    int house;
    double square;
    double rent;
};

double cost(Building building) {
    double sm = building.square * building.rent;
    return sm;
}

int main() {
    setlocale(LC_ALL, "Rus");
    Building building1{ "Кремлевская", 18, 200., 10000. };
    Building building;

    cout << "Enter a street: "; cin >> building.street;
    cout << "Enter a number of the house: "; cin >> building.house;
    cout << "Enter a square: "; cin >> building.square;
    cout << "Enter a rent: "; cin >> building.rent;

    double c = cost(building);
    double c1 = cost(building1);

    if (c >= c1) {
        cout << building.street << ", " << building.house;
    }
    else {
        cout << building1.street << ", " << building1.house;
    }
    return 0;
}