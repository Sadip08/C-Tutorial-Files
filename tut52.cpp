#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)// void setData(int a, float b) :id(a), price(b);
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main()
{
    int size = 2;
    // int *ptr = &size;
    // int *ptr = new int [34];
    // general store
    // veggies
    // hardware
    int p, q;
    Shop *ptr = new Shop[size];
    Shop *ptrtemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and Price of item " << i + 1;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
        cout << "Item number : " << j + 1 << endl;
        ptrtemp->getData();
        ptrtemp++;
    }
    return 1;
}