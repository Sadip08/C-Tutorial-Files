#include<iostream>
#include<fstream>

     using namespace std;


int main(){
ofstream hout("sample60.txt");

string name;
cout<<"Enter the name";
cin>>name;
hout<<"My name is " + name;
hout.close();

ifstream hin("sample60.txt");
string content;
getline(hin,content);
cout<<"The content of the file: "<<content;

hin.close();
    return 1;
}