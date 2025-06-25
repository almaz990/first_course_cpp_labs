#include <iostream>
#include <cmath>

class PointOnThePlane
{
private:
    double x,
        y;

public:
    PointOnThePlane()
    {
        std::cout << "Введите x и y через пробел: ";
        std::cin >> x;
        std::cin >> y;
    }
    PointOnThePlane(double s_x, double s_y)
    {
        x = s_x;
        y = s_y;
    }

    void setX(double s_x);
    void setY(double s_y);

    double getX();
    double getY();

    void operator<<(PointOnThePlane f)
    {
        std::cout << "Координаты: " << x << " " << y << "\n";
    }
    void operator>>(PointOnThePlane f)
    {
        std::cout << "Введите x и y через пробел: ";
        std::cin >> x >> y;
    }

    double distance(PointOnThePlane s);
};
void PointOnThePlane::setX(double s_x)
{
    x = s_x;
}

void PointOnThePlane::setY(double s_y)
{
    y = s_y;
}

double PointOnThePlane::getY()
{
    return y;
}

double PointOnThePlane::getX()
{
    return x;
}

double PointOnThePlane::distance(PointOnThePlane s)
{
    return pow(pow(x - s.x, 2) + pow(y - s.y, 2), 0.5);
}

int main()
{
    setlocale(LC_ALL, "Rus");
    PointOnThePlane x1{1.1, 2.2};
    PointOnThePlane x2{3.5, 6.5};
    std::cout << "Расстояние между x1 и x2: " << x1.distance(x2);
    return 0;
}