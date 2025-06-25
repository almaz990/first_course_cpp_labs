#include <iostream>
#include <cmath>

class Cylinder
{
protected:
    double x,
        y;
    double x1,
        y1;
    double h;

public:
    Cylinder()
    {
        std::cout << "Введите x и y через пробел: ";
        std::cin >> x >> y;
        std::cout << "Введите x1, y1 и h через пробел: ";
        std::cin >> x1 >> y1 >> h;
    }
    Cylinder(double s_x, double s_y,
             double s_x1, double s_y1, double s_h)
    {
        x = s_x;
        y = s_y;
        x1 = s_x1;
        y1 = s_y1;
        h = s_h;
    }

    void setX(double s_x) { x = s_x; }
    void setY(double s_y) { y = s_y; }
    void setX1(double s_x1) { x1 = s_x1; }
    void setY1(double s_y1) { y1 = s_y1; }
    void setH(double s_h) { h = s_h; }

    double getX() { return x; }
    double getY() { return y; }
    double getX1() { return x1; }
    double getY1() { return y1; }
    double getH() { return h; }

    void operator<<(Cylinder f)
    {
        std::cout << "Координаты: " << x << " " << y << "\t" << x1 << " " << y1
                  << "\nВысота " << h;
    }
    void operator>>(Cylinder f)
    {
        std::cout << "Введите x и y через пробел: ";
        std::cin >> x >> y;
        std::cout << "Введите x1, y1 и h через пробел: ";
        std::cin >> x1 >> y1 >> h;
    }

    double AreaOfTheBase();
    double PerimeterOfTheBase();
    double Volume();
    double SideSurfaceArea();
};

double Cylinder::AreaOfTheBase()
{
    return 3.14 * pow(x - x1, 2) + pow(y - y1, 2);
}

double Cylinder::PerimeterOfTheBase()
{
    return 3.14 * 2 * pow(pow(x - x1, 2) + pow(y - y1, 2), 0.5);
}

double Cylinder::Volume()
{
    return AreaOfTheBase() * h;
}

double Cylinder::SideSurfaceArea()
{
    return PerimeterOfTheBase() * h;
}

class StraightTriangularPrism : public Cylinder
{

public:
    StraightTriangularPrism(double s_x, double s_y, double s_x1, double s_y1, double s_x2, double s_y2, double s_h) : Cylinder(s_x, s_y, s_x1, s_y1, s_h)
    {
        x2 = s_x2;
        y2 = s_y2;
    }

    double distance(double x, double y, double x1, double y1);
    double AreaOfTheBase();
    double PerimeterOfTheBase()
    {
        double a = distance(x, y, x1, y1);
        double b = distance(x1, y1, x2, y2);
        double c = distance(x2, y2, x, y);
        return a + b + c;
    }

protected:
    double x2,
        y2;
};

double StraightTriangularPrism::distance(double d_x, double d_y, double d_x1, double d_y1)
{
    return pow(pow(d_x - d_x1, 2) + pow(d_y - d_y1, 2), 0.5);
}

double StraightTriangularPrism::AreaOfTheBase()
{
    double a = distance(x, y, x1, y1);
    double b = distance(x1, y1, x2, y2);
    double c = distance(x2, y2, x, y);
    double p = (a + b + c) / 2.0;

    return pow(p * (p - a) * (p - b) * (p - c), 0.5);
}

class StraightPrismWithSquareBase : public StraightTriangularPrism
{
private:
    double x3, y3;

public:
    StraightPrismWithSquareBase(double s_x, double s_y, double s_x1, double s_y1, double s_x2, double s_y2, double s_x3, double s_y3, double s_h) : StraightTriangularPrism(s_x, s_y, s_x1, s_y1, s_h, s_x2, s_y2)
    {
        x3 = s_x3;
        y3 = s_y3;
    }
    double AreaOfTheBase();
    double PerimeterOfTheBase()
    {
        double a = distance(x, y, x1, y1);
        double b = distance(x1, y1, x2, y2);
        double c = distance(x2, y2, x3, y3);
        double d = distance(x3, y3, x, y);

        return a + b + c + d;
    }

    bool isParallelepiped();
    bool isStrightParallelepiped();
    bool isCube();
};

double StraightPrismWithSquareBase::AreaOfTheBase()
{
    double a = distance(x, y, x1, y1);
    double b = distance(x1, y1, x2, y2);
    double c = distance(x2, y2, x3, y3);
    double d = distance(x3, y3, x, y);

    double p = (a + b + c + d) / 2.0;

    return pow((p - a) * (p - b) * (p - c) * (p - d), 0.5);
}

bool StraightPrismWithSquareBase::isParallelepiped()
{
    if (PerimeterOfTheBase() > 0)
    {
        return true;
    }
    return false;
}


bool StraightPrismWithSquareBase::isStrightParallelepiped()
{
    double d = distance(x1, y1, x3, y3);
    double x4 = x, y4 = h;
    if ((pow(distance(x, y, x1, y1), 2) + pow(distance(x, y, x3, y3), 2) - d * d) / (2.0 * pow(distance(x, y, x1, y1), 2) * pow(distance(x, y, x3, y3), 2)) < 1e-10 &&
        (pow(distance(x2, y2, x1, y1), 2) + pow(distance(x2, y2, x3, y3), 2) - d * d) / (2.0 * pow(distance(x2, y2, x1, y1), 2) * pow(distance(x2, y2, x3, y3), 2)) < 1e-10 &&
        (pow(distance(x, y, x4, y4), 2) + pow(distance(x, y, x1, y1), 2) - pow(distance(x4, y4, x1, y1), 2)) / (2.0 * pow(distance(x, y, x1, y1), 2) * pow(distance(x, y, x4, y4), 2)) < 1e-10)
    {
        return true;
    }
    return false;
}


bool StraightPrismWithSquareBase::isCube()
{
    double x4 = x, y4 = h;
    if (isStrightParallelepiped() && distance(x, y, x4, y4) == distance(x, y, x1, y1) && PerimeterOfTheBase() / 4.0 == distance(x, y, x1, y1))
    {
        return true;
    }
    return false;
}

int main()
{
    setlocale(LC_ALL, "rus");
    StraightPrismWithSquareBase p{0.0, 0.0, 4.0, 0.0, 4.0, 4.0, 0.0, 4.0, 4.0};
    
    std::cout << "Является ли p параллелепипедом: " << p.isParallelepiped() << "\n";
    std::cout << "Является ли p прямоугольным параллелепипедом: " << p.isStrightParallelepiped() << "\n";
    std::cout << "Является ли p кубом: " << p.isCube() << "\n";

    return 0;
}