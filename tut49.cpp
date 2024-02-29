#include<iostream>
     using namespace std;
/*
syntax for initialization list in constructor :
constructor (Argument-list) : initialization-section
{
    assignment + other code; 
}

class Test{
    int a;
    int b;
    public:
     Test (int i, int j) : a(i), b(j) {constructor-body}
};*/

class Test{
    int a;
    int b;
    public:
     //Test (int i, int j) :b(j), a(i+b) --> Red fLag this will create problems because \
     a will be initialized first
     Test (int i, int j) : a(i), b(a+j){
        cout<< "Constructor executed"<<endl;
        cout<<" Value of a is " << a;
        cout<<endl<<"Value of b is "<<b;
     }
};
int main(){
   Test t(4,6);
    return 1;
}