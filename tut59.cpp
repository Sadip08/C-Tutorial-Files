#include<iostream>
using namespace std;
class first
{
private:
int data1;
public:
void setdata(int x)
{ data1=x;}
friend class second; //class second can access private data
};
class second
{
public:
void func1(first a)
{cout<<"\n data1="<<a.data1;}
void func2(first a)
{cout<<"\n data1="<<a.data1;}
}; 
int main()
{
first a;
second b;
a.setdata(15);
b.func1(a);
b.func2(a);
return 0;
}