#include<iostream>
     using namespace std;
class simple{
    int data1;
    int data2;
    public:
        simple( int a, int b =9){
            data1 = a;
            data2 = b;
        }
        void printdata(){
            cout<<"The value of data is "<< data1<< "and "<<data2 << endl; 
        }
};
int main(){
  simple s3(2);
  s3.printdata();  
    return 1;
}