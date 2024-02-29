#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    //    Complex c1;
    //    Complex *ptr = &c1;

    Complex *ptr = new Complex[3];

    //    c1.setdata(1,54);
    //    c1.getdata();

    //  (*ptr).setdata(1,54); is exactly same as
    ptr->setdata(1, 54);
    (*ptr).getdata();

    // Array of objects
    Complex *ptr1 = new Complex[3];
    ptr1->setdata(1, 4);
    ptr->getdata();
    return 1;
}