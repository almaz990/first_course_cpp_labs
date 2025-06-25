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
    int getInteger();
    int getNumerator();
    void setNormalNumber();
};

int main()
{
    setlocale(LC_ALL, "Rus");
    RationalNumber first, second;
    first.setNumber();
    second.setNumber();

    std::cout << "Целая часть дроби: ";
    std::cout << first.getInteger() << "\t";
    std::cout << second.getInteger() << "\n";

    std::cout << "Числитель неправильной дроби: ";
    std::cout << first.getNumerator() << "\t";
    std::cout << second.getNumerator() << "\n";

    std::cout << "Сокращение дроби: ";
    first.setNormalNumber();
    second.setNormalNumber();
    first.getNumber();
    std::cout << "\t";
    second.getNumber();
    std::cout << "\n";
}

void RationalNumber::setNumber()
{
    std::cout << "Введите p и q (q не 0):\n";
    int set_p, set_q;
    std::cin >> set_p >> set_q;
    while (set_q == 0)
    {
        std::cout << "Введите q не равное 0:\n";
        std::cin >> set_q;
    }
    p = set_p;
    q = set_q;
}

void RationalNumber::getNumber()
{
    char z = '-';
    if (p * q > 0)
    {
        z = '+';
    }
    if (p == 0)
    {
        std::cout << 0;
    }
    else if (abs(p) == abs(q))
    {
        if (z == '-')
        {
            std::cout << z << abs(p) / abs(q);    
        }
        else
        {
            std::cout << abs(p) / abs(q);
        }
    }
    else if (abs(p) > abs(q))
    {
        if (z == '-')
        {
            std::cout << z << abs(p) / abs(q) << " " << abs(p) % abs(q) << "/" << abs(q);    
        }
        else
        {
            std::cout << abs(p) / abs(q) << " " << abs(p) % abs(q) << "/" << abs(q);
        }
    }
    else
    {
        if (z == '-')
        {
            std::cout << z << abs(p) << "/" << abs(q);
        }
        else
        {
            std::cout << abs(p) << "/" << abs(q);
        }
    }


}

int RationalNumber::getP()
{
    return p;
}

int RationalNumber::getQ()
{
    return q;
}

int RationalNumber::getInteger()
{
    return p / q;
}

int RationalNumber::getNumerator()
{
    return p % q;
}

void RationalNumber::setNormalNumber()
{
    if (p == 0) return;
    int div = 1;
    for (int i = 1; i != std::min(abs(p), abs(q)) - 1; ++i)
    {
        if (abs(p) % i == 0 && abs(q) % i == 0)
        {
            div = std::max(div, i);
        }
    }
    p /= div;
    q /= div;
}