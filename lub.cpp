#include<iostream>
     using namespace std;
    class A{
        public:
       void show(){
            cout<<"\n Base class";
        }
       virtual ~A(){cout<<"Destructed A\n";}
    };
    class B : public A{
        public:
      void  show(){
            cout<<"/n Derived class";
        }
         ~B(){cout<<"Destructed B\n";}
    };

int main(){
    A* bptr = new B;
    bptr ->show();
    delete bptr;
    return 1;
}