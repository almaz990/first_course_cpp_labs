#include <iostream>
#include <stack>
#include <fstream>

struct wan
{
    std::string id;
    unsigned num;
};

void initStack(std::stack<wan> &train, unsigned size);
void printStack(std::stack<wan> train, unsigned size);
void sortStack(std::stack<wan> train, unsigned size);
std::stack<wan> fileInitStack();

int main()
{
    bool flag;
    std::cout << "Choose file init or dashboard init (1 or 0): " ;
    std::cin >> flag;
    if (flag)
    {
        std::stack<wan> train;

        initStack(train, std::size(train));
        sortStack(train, std::size(train));
    }
    else
    {
        sortStack(fileInitStack(), std::size(fileInitStack()));
    }
    
}

void initStack(std::stack<wan> &train, unsigned size)
{
    std::cout << "Enter a size of train: ";
    std::cin >> size;
    wan el;
    for (unsigned i = 0; i != size; ++i)
    {
        std::cout << "Enter type of the " << i + 1 << " element(f or s): ";
        std::cin >> el.id;
        el.num = i + 1;
        train.push(el);
    }
}

void printStack(std::stack<wan> train, unsigned size)
{
    for (unsigned i = 0; i != size; ++i)
    {
        std::cout << train.top().num << " element, type = " << train.top().id << std::endl;
        train.pop();
    }
}

void sortStack(std::stack<wan> train, unsigned size)
{
    std::stack<wan> train1;
    std::stack<wan> train2;
    for (unsigned i = 0; i != size; ++i)
    {
        if (train.top().id == "f")
        {
            train1.push(train.top());
        }
        else if (train.top().id == "s")
        {
            train2.push(train.top());
        }
        train.pop();
    }
    std::cout << "\nFirst direction:\n";
    printStack(train1, std::size(train1));
    std::cout << "\nSecond direction:\n";
    printStack(train2, std::size(train2));
}

std::stack<wan> fileInitStack()
{
    std::stack<wan> train;
    std::ifstream in("train.txt");
    if (in.is_open())
    {
        std::string f_id;
        unsigned i = 0;
        wan el;
        while (std::getline(in, f_id))
        {
            el.num = i + 1;
            el.id = f_id;
            train.push(el);
            i += 1;
        }
    }
    in.close();
    return train;
}