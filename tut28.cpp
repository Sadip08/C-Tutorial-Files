#include <iostream>
using namespace std;

class Y;

class x
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(x, Y);
};
class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(x, Y);
};

void add(x o1, Y o2)
{
    cout << "Summong data of X and Y objects gives me " << (o1.data + o2.num);
}
int main()
{
    x a;
    a.setValue(3);

    Y b;
    b.setValue(5);

    add(a, b);
    return 1;
}