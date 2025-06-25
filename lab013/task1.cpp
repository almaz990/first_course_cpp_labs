#include <iostream>

class RationalNumber
{
private:
    int p, q;

public:
    void setNumber();
    void getNumber();
    int getP();
    int getQ();
};

int main()
{
    setlocale(LC_ALL, "Rus");

    RationalNumber first, second;
    first.setNumber();
    second.setNumber();
    std::cout << "\na): ";
    first.getNumber();
    std::cout << " ";
    second.getNumber();

    std::cout << "\tб): ";
    std::cout << first.getP() << " ";
    std::cout << second.getP();

    std::cout << "\nв): ";
    std::cout << first.getQ() + second.getQ();

    std::cout << "\tг): ";
    int mx = std::max(first.getP(), second.getP());
    if (first.getP() == mx) {
        first.getNumber();
    } else {
        second.getNumber();
    }
}

void RationalNumber::setNumber()
{
    std::cout << "Введите p и q (q > 0):\n";
    int set_p, set_q;
    std::cin >> set_p >> set_q;
    while (set_q == 0)
    {
        std::cout << "Введите q большее 0:\n";
        std::cin >> set_q;
    }
    p = set_p;
    q = set_q;
}

void RationalNumber::getNumber()
{
    std::cout << p << "/" << q;
}

int RationalNumber::getP()
{
    return p;
}

int RationalNumber::getQ()
{
    return q;
}