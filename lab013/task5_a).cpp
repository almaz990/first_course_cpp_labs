#include <iostream>

class RationalNumber
{
private:
    int p, q, ceil;

public:
    RationalNumber(int p_p, int p_q); // 1 constructor
    RationalNumber(int p_ceil, int p_p, int p_q); // 3 constructor
    RationalNumber(); // 2 constructor
    RationalNumber(const RationalNumber &r); // 4 constructor
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
    //friend functions
    friend void Sum(RationalNumber f, RationalNumber s);
    friend void Diff(RationalNumber f, RationalNumber s);
    friend void Mult(RationalNumber f, RationalNumber s);
    friend void Div(RationalNumber f, RationalNumber s);
    friend bool Equal(RationalNumber f, RationalNumber s);
    
};

int main()
{
    setlocale(LC_ALL, "Rus");
    RationalNumber first{-1, 3, 4};
    RationalNumber second{1, 2, 3};
    std::cout << "Сумма: ";
    Sum(first, second);
    std::cout << "\n";
    std::cout << "Разность: ";
    Diff(first, second);
    std::cout << "\n";
    std::cout << "Умножение: ";
    Mult(first, second);
    std::cout << "\n";
    std::cout << "Деление: ";
    Div(first, second);
    std::cout << "\n";
    std::cout << "Совпадение чисел: ";
    std::cout << Equal(first, second);
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

void Sum(RationalNumber f, RationalNumber s)
{
    int o_p = f.p, o_q = f.q, o_c = f.ceil;
    int n_p = s.getP();
    if (abs(f.ceil) > 0)
    {
        f.p = abs(f.ceil) * f.q + f.p;
        if (f.ceil < 0)
        {
            f.p = f.p * -1;
        }
        f.ceil = 0;
    }
    if (abs(s.getCeil()) > 0)
    {
        n_p = abs(s.getCeil()) * s.getQ() + n_p;
        if ((s.getCeil()) < 0)
        {
            n_p = n_p * -1;
        }
    }
    if (f.q == s.getQ())
    {
        f.p = f.p + n_p;
        f.getNumber();
        f.p = o_p;
        f.q = o_q;
        f.ceil = o_c;
    }
    else
    {
        int old_q = f.q;
        f.q = f.q * s.getQ();
        f.p = f.p * s.getQ() + n_p * old_q;
        f.getNumber();
        f.p = o_p;
        f.q = o_q;
        f.ceil = o_c;
    }
}

int RationalNumber::getCeil()
{
    return ceil;
}

void Diff(RationalNumber f, RationalNumber s)
{
    int o_p = f.p, o_q = f.q, o_c = f.ceil;
    int n_p = s.getP();
    if (abs(f.ceil) > 0)
    {
        f.p = abs(f.ceil) * f.q + f.p;
        if (f.ceil < 0)
        {
            f.p = f.p * -1;
        }
        f.ceil = 0;
    }
    if (abs(s.getCeil()) > 0)
    {
        n_p = abs(s.getCeil()) * s.getQ() + n_p;
        if ((s.getCeil()) < 0)
        {
            n_p = n_p * -1;
        }
    }
    if (f.q == s.getQ())
    {
        f.p = f.p - n_p;
        f.getNumber();
        f.p = o_p;
        f.q = o_q;
        f.ceil = o_c;
    }
    else
    {
        int old_q = f.q;
        f.q = f.q * s.getQ();
        f.p = f.p * s.getQ() - n_p * old_q;
        f.getNumber();
        f.p = o_p;
        f.q = o_q;
        f.ceil = o_c;
    }
}

void Mult(RationalNumber f, RationalNumber s)
{
    int o_p = f.p, o_q = f.q, o_c = f.ceil;
    int n_p = s.getP();
    if (abs(f.ceil) > 0)
    {
        f.p = abs(f.ceil) * f.q + f.p;
        if (f.ceil < 0)
        {
            f.p = f.p * -1;
        }
        f.ceil = 0;
    }
    if (abs(s.getCeil()) > 0)
    {
        n_p = abs(s.getCeil()) * s.getQ() + n_p;
        if ((s.getCeil()) < 0)
        {
            n_p = n_p * -1;
        }
    }
    f.p = f.p * n_p;
    f.q = f.q * s.getQ();
    f.getNumber();
    f.p = o_p;
    f.q = o_q;
    f.ceil = o_c;
}

void Div(RationalNumber f, RationalNumber s)
{
    int o_p = f.p, o_q = f.q, o_c = f.ceil;
    int n_p = s.getP();
    if (abs(f.ceil) > 0)
    {
        f.p = abs(f.ceil) * f.q + f.p;
        if (f.ceil < 0)
        {
            f.p = f.p * -1;
        }
        f.ceil = 0;
    }
    if (abs(s.getCeil()) > 0)
    {
        n_p = abs(s.getCeil()) * s.getQ() + n_p;
        if ((s.getCeil()) < 0)
        {
            n_p = n_p * -1;
        }
    }
    f.p = f.p * s.getQ();
    f.q = f.q * n_p;
    f.getNumber();
    f.p = o_p;
    f.q = o_q;
    f.ceil = o_c;
}

bool Equal(RationalNumber f, RationalNumber s)
{
    f.setNormalNumber();
    s.setNormalNumber();
    if (s.getCeil() == f.ceil && s.getP() == f.p && s.getQ() == f.q)
    {
        return true;
    }
    return false;
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
