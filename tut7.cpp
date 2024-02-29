#include<iostream>
    using namespace std;
    int x = 90;
int main(){
   
    // global variable and local variable
    // int x = 60;
    //cout<<"The value of global x is "<<::x<<endl; ;
    //cout<<"The value of local x is "<<x;

    //type specifying
/*cout<<"THe size of 34.4 is "<< sizeof(34.4)<<endl;
cout<<"THe size of 34.4f is "<< sizeof(34.4f)<<endl;
cout<<"THe size of 34.4F is "<< sizeof(34.4F)<<endl;
cout<<"THe size of 34.4l is "<< sizeof(34.4l)<<endl;
cout<<"THe size of 34.4L is "<< sizeof(34.4L)<<endl;*/

// type casting
float x=  455;
float & y = x;
cout<<x <<endl;
cout<<y<<endl;

return 1;
}