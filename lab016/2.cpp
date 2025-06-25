#include <iostream>
#include <stack>

struct Point
{
    unsigned x1, y1;
};

void findWay(unsigned labirint[][8], const unsigned size);
void printWay(std::stack<Point> way);
void printLabirint(unsigned labirint[][8], const unsigned size);

int main()
{
    const unsigned size = 8;
    unsigned labirint[][8]{
        {1, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 1, 0, 0, 0},
        {1, 1, 1, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 1, 1, 1, 0, 0, 0},
        {0, 0, 1, 0, 0, 1, 1, 1},
        {0, 0, 1, 1, 1, 1, 0, 1}};
    printLabirint(labirint, size);
    findWay(labirint, size);
    
}

void findWay(unsigned labirint[][8], const unsigned size)
{
    std::stack<Point> way;
    Point k;
    k.x1 = 0;
    k.y1 = 0;
    way.push(k);

    for (unsigned x = 0; x != size; ++x)
    {
        for (unsigned y = 0; y != 8; ++y)
        {
            if (labirint[x][y] == 1)
            {
                if ((way.top().x1 == x && abs(way.top().y1 - y) == 1 || way.top().y1 == y && abs(way.top().x1 - x) == 1))
                {
                    labirint[k.x1][k.y1] = 3;
                    k.x1 = x;
                    k.y1 = y;
                    way.push(k);
                    x = 0;
                    y = 0;
                }
            }
        }
    }
    printWay(way);
    printLabirint(labirint, size);
}

void printWay(std::stack<Point> way)
{
    unsigned i = 0;
    while (way.empty() == 0)
    {
        std::cout << i << " : " << way.top().x1 << " " << way.top().y1 << "\n";
        way.pop();
        ++i;
    }
}

void printLabirint(unsigned labirint[][8], const unsigned size)
{
    for (unsigned i = 0; i != size; ++i)
    {
        for (unsigned j = 0; j != 8; ++j)
        {
            std::cout << labirint[i][j] << " ";
        }
        std::cout << "\n";
    }
}
