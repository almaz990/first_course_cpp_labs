#include <iostream>

class RationalNumber
{
private:
    int p, q, ceil;

public:
    RationalNumber(int p_p, int p_q);             // 1 constructor
    RationalNumber(int p_ceil, int p_p, int p_q); // 3 constructor
    RationalNumber();                             // 2 constructor
    RationalNumber(const RationalNumber &r);      // 4 constructor
    void setNumber();
    void getNumber();
    int getP();
    int getQ();
    int getInteger();
    int getNumerator();
    void setNormalNumber();
    void setNumerator(int set_p);
    void setDenominator(int set_q);
    int getCeil();
    // friend functions
    void operator+(RationalNumber f)
    {
        int o_p = p, o_q = q, o_c = ceil;
        int n_p = f.getP();
        if (abs(ceil) > 0)
        {
            p = abs(ceil) * q + p;
            if (ceil < 0)
            {
                p = p * -1;
            }
            ceil = 0;
        }
        if (abs(f.getCeil()) > 0)
        {
            n_p = abs(f.getCeil()) * f.getQ() + n_p;
            if ((f.getCeil()) < 0)
            {
                n_p = n_p * -1;
            }
        }
        if (q == f.getQ())
        {
            p = p + n_p;
            getNumber();
            p = o_p;
            q = o_q;
            ceil = o_c;
        }
        else
        {
            int old_q = q;
            q = q * f.getQ();
            p = p * f.getQ() + n_p * old_q;
            getNumber();
            p = o_p;
            q = o_q;
            ceil = o_c;
        }
    }
    void operator-(RationalNumber f)
    {
        int o_p = p, o_q = q, o_c = ceil;
        int n_p = f.getP();
        if (abs(ceil) > 0)
        {
            p = abs(ceil) * q + p;
            if (ceil < 0)
            {
                p = p * -1;
            }
            ceil = 0;
        }
        if (abs(f.getCeil()) > 0)
        {
            n_p = abs(f.getCeil()) * f.getQ() + n_p;
            if ((f.getCeil()) < 0)
            {
                n_p = n_p * -1;
            }
        }
        if (q == f.getQ())
        {
            p = p - n_p;
            getNumber();
            p = o_p;
            q = o_q;
            ceil = o_c;
        }
        else
        {
            int old_q = q;
            q = q * f.getQ();
            p = p * f.getQ() - n_p * old_q;
            getNumber();
            p = o_p;
            q = o_q;
            ceil = o_c;
        }
    }
    void operator*(RationalNumber f)
    {
        int o_p = p, o_q = q, o_c = ceil;
        int n_p = f.getP();
        if (abs(ceil) > 0)
        {
            p = abs(ceil) * q + p;
            if (ceil < 0)
            {
                p = p * -1;
            }
            ceil = 0;
        }
        if (abs(f.getCeil()) > 0)
        {
            n_p = abs(f.getCeil()) * f.getQ() + n_p;
            if ((f.getCeil()) < 0)
            {
                n_p = n_p * -1;
            }
        }
        p = p * n_p;
        q = q * f.getQ();
        getNumber();
        p = o_p;
        q = o_q;
        ceil = o_c;
    }
    void operator/(RationalNumber f)
    {
        int o_p = p, o_q = q, o_c = ceil;
        int n_p = f.getP();
        if (abs(ceil) > 0)
        {
            p = abs(ceil) * q + p;
            if (ceil < 0)
            {
                p = p * -1;
            }
            ceil = 0;
        }
        if (abs(f.getCeil()) > 0)
        {
            n_p = abs(f.getCeil()) * f.getQ() + n_p;
            if ((f.getCeil()) < 0)
            {
                n_p = n_p * -1;
            }
        }
        p = p * f.getQ();
        q = q * n_p;
        getNumber();
        p = o_p;
        q = o_q;
        ceil = o_c;
    }
    void operator==(RationalNumber f)
    {
        setNormalNumber();
        f.setNormalNumber();
        if (f.getCeil() == ceil && f.getP() == p && f.getQ() == q)
        {
            std::cout << true;
        }
        else
        {
            std::cout << false;
        }
    }
    void operator>(RationalNumber f)
    {
        int o_p = p, o_q = q, o_c = ceil;
        int n_p = f.getP();
        if (abs(ceil) > 0)
        {
            p = abs(ceil) * q + p;
            if (ceil < 0)
            {
                p = p * -1;
            }
            ceil = 0;
        }
        if (abs(f.getCeil()) > 0)
        {
            n_p = abs(f.getCeil()) * f.getQ() + n_p;
            if ((f.getCeil()) < 0)
            {
                n_p = n_p * -1;
            }
        }
        int old_q = q;
        q = q * f.getQ();
        p = p * f.getQ();
        n_p = n_p * old_q;
        if (p > n_p)
        {
            std::cout << true;
        }
        else
        {
            std::cout << false;
        }
    }
    void operator <(RationalNumber f)
    {
        int o_p = p, o_q = q, o_c = ceil;
        int n_p = f.getP();
        if (abs(ceil) > 0)
        {
            p = abs(ceil) * q + p;
            if (ceil < 0)
            {
                p = p * -1;
            }
            ceil = 0;
        }
        if (abs(f.getCeil()) > 0)
        {
            n_p = abs(f.getCeil()) * f.getQ() + n_p;
            if ((f.getCeil()) < 0)
            {
                n_p = n_p * -1;
            }
        }
        int old_q = q;
        q = q * f.getQ();
        p = p * f.getQ();
        n_p = n_p * old_q;
        if (p < n_p)
        {
            std::cout << true;
        }
        else
        {
            std::cout << false;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Rus");
    RationalNumber first{-1, 3, 4};
    RationalNumber second{1, 2, 3};
    std::cout << "Сумма: ";
    first + second;
    std::cout << "\n";
    std::cout << "Разность: ";
    first - second;
    std::cout << "\n";
    std::cout << "Умножение: ";
    first *second;
    std::cout << "\n";
    std::cout << "Деление: ";
    first / second;
    std::cout << "\n";
    std::cout << "Совпадение чисел: ";
    first == second;
    std::cout << "\n";
    std::cout << "1 больше 2 числа: ";
    first > second;
    std::cout << "\n";
    std::cout << "1 меньше 2 числа: ";
    first < second;
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
    if (p == 0 || p == 1)
        return;
    int div = 1;
    for (int i = 1; i != std::min(abs(p) + 1, abs(q)); ++i)
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

int RationalNumber::getCeil()
{
    return ceil;
}

RationalNumber::RationalNumber(const RationalNumber &r) // 4 constructor
{
    p = r.p;
    q = r.q;
    ceil = r.ceil;
}

RationalNumber::RationalNumber() // 2 constructor
{
    p = 0;
    q = 1;
}

RationalNumber::RationalNumber(int p_ceil, int p_p, int p_q) // 3 constructor
{
    p = p_p;
    q = p_q;
    ceil = p_ceil;
}

RationalNumber::RationalNumber(int p_p, int p_q) // 1 constructor
{
    p = p_p;
    q = p_q;
}
