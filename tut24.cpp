#include<iostream>
     using namespace std;

class  Employee{
   static int count;
    int id;
    public:
        void setData(){
            cout<<"Enter the id"<<endl;
            cin>>id;
            
        }
        void getData(){
            cout<<"The id of this employee is "<<id
            << " And This is employee number"<<count++<<endl;
        }
        static void getCount(void){
            //cout<<id; //throws an error
            cout<<"The value of count is "<<count<<endl;
        }
};  
//Count is the static data member of class employee
int Employee :: count;      //Default value is 0
int main(){
    Employee harry, hari, many;
    
   
    //harry.id = 1;
    //harry.count = 1; // cannot do this as id and count are private

     harry.setData();
     harry.getData();
     Employee::getCount();

     hari.setData();
     hari.getData();
     Employee::getCount();

     many.setData();
     many.getData();
     Employee::getCount();
     
    return 1;
}