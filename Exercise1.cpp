#include<iostream>
    //  using namespace std;

// Create 2 classes:
//  1. SimpleCalculator - Takes input of 2 numbers using a  utility
//     function and performs +, -, *, / amd displays the results using another function.
//     2. ScientificCalculator - Takes input of 2 numbeers using a utility function and performs any four
//     scientific operation of your choice and displays the results using another function.

class SimpCalc{
    protected:
        int x,y;
    public:
        void setdata(){
            std::cout<<"Enter any two numbers: "<<std::endl;
            std::cin>>x>>y;
        }
        int add(){
           return (x+y); 
        }
        int subtract(){
           return (x-y); 
        }
        long multiply(){
           return (x*y); 
        }
        float divide(){
           return float(x/y); 
        }
        void display(){
            std::cout<<"The sum of "<<x<<" & "<<y<<" : "<<add()<<std::endl;
            std::cout<<"The difference of "<<x<<" & "<<y<<" : "<<subtract()<<std::endl;
            std::cout<<"The product of "<<x<<" & "<<y<<" : "<<multiply()<<std::endl;
            std::cout<<"The quotient of "<<x<<" & "<<y<<" : "<<divide()<<std::endl;
            }
};
class scicalc : public SimpCalc{

};
//     Create another class HybridCalculator and inherit it using these 2 classes:
//     Q1. What type of Inheritance are you using?
//     Q2. Which mode of Inheritance are you using?
//     Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
//     Q4. How is code reusability implenented?
    

int main(){
   
    return 1;
}