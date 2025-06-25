#include <iostream>

class RationalNumber
{
private:
    int p, q, ceil;

public:
    RationalNumber(int p_p, int p_q) // 1 constructor
    {
        p = p_p;
        q = p_q;
    }
    RationalNumber(int p_ceil, int p_p, int p_q) // 3 constructor
    {
        p = p_p;
        q = p_q;
        ceil = p_ceil;
    }
    RationalNumber() // 2 constructor
    {
        p = 0;
        q = 1;
    }
    RationalNumber(const RationalNumber &r) // 4 constructor
    {
        p = r.p;
        q = r.q;
        ceil = r.ceil;
    }
    void setNumber();
    void getNumber();
    int getP();
    int getQ();
    int getInteger();
    int getNumerator();
    void setNormalNumber();
    void setNumerator(int set_p);
    void setDenominator(int set_q);
};

int main()
{
    setlocale(LC_ALL, "Rus");
    RationalNumber rational1(4, 3);
    RationalNumber rational2(5, 1, 7);
    // 1
    RationalNumber rational3{rational1};
    // 2
    rational1.getNumber();
    std::cout << std::endl;
    rational2.getNumber();
    std::cout << std::endl;
    rational3.getNumber();
    std::cout << std::endl;
    // 3
    rational1.setNumerator(5);
    // 4
    rational1.setDenominator(rational1.getQ() * 3);
    // 5
    rational2.setNumerator(rational2.getP() / 2);
    rational3.setNumerator(rational3.getP() * 10);
    rational3.setDenominator(rational3.getQ() * 10);
    // 6
    std::cout << "2)\n";
    rational1.getNumber();
    std::cout << std::endl;
    rational2.getNumber();
    std::cout << std::endl;
    rational3.getNumber();
    std::cout << std::endl;

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
    setNormalNumber();
    if (ceil and p < q)
    {
        p = ceil * q + p;
    }
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
    if (p == 0 or p == 1)
        return;
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

void RationalNumber::setNumerator(int set_p)
{
    p = set_p;
}

void RationalNumber::setDenominator(int set_q)
{
    q = set_q;
}