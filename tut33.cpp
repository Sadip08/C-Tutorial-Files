#include <iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    //bankdeposit() {}
    bankdeposit(int p, int y, float r); // r can be a value like 0.04
    bankdeposit(int p, int y, int r);   // r can be a value like 14
    void show();
};
bankdeposit ::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

bankdeposit ::bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void bankdeposit::show()
{
    cout << endl
         << "Principal amount was " << principal << endl
         << "Return value after " << years << " years is " << returnvalue << endl;
}
int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y, r :" << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();
    cout << "Enter the value of p, y, r :" << endl;
    cin >> p >> y >> R;
    bd2 = bankdeposit(p, y, R);
    bd2.show();
   
    bd3.show();
    return 1;
}