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
             { x = s_x; y = s_y; x1 = s_x1; y1 = s_y1; h = s_h; }

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
    void operator >>(Cylinder f)
    {
        std::cout << "Введите x и y через пробел: ";
        std::cin >> x >> y;
        std::cout << "Введите x1, y1 и h через пробел: ";
        std::cin >> x1 >> y1 >> h;
    }

    double AreaOfTheBase();
    double CircleLength();
    double CylinderVolume();
    double CylinderSideSurfaceArea();

};  

double Cylinder::AreaOfTheBase()
{
    return  3.14 * pow(x - x1, 2) + pow(y - y1, 2);
}

double Cylinder::CircleLength()
{
    return 3.14 * 2 * pow(pow(x - x1, 2) + pow(y - y1, 2), 0.5);
}

double Cylinder::CylinderVolume()
{
    return AreaOfTheBase() * h; 
}

double Cylinder::CylinderSideSurfaceArea()
{
    return CircleLength() * h;
}

int main()
{
    setlocale(LC_ALL, "rus");

    Cylinder x{0.0, 1.0, 3.5, 2.0, 5.7};
    std::cout << "Радиус: " << pow(pow(x.getX() - x.getX1(), 2) + pow(x.getY() - x.getY1(), 2), 0.5);
    std::cout << "\nПлощадь основания: " << x.AreaOfTheBase();
    std::cout << "\nДлина основания: " << x.CircleLength();
    std::cout << "\nОбъем цилиндра: " << x.CylinderVolume();
    std::cout << "\nПлощадь боковой поверхности: " << x.CylinderSideSurfaceArea();
    return 0;
}