#include<iostream>
#include<fstream>
using namespace std;
// The useful classes for working with files in C++ are:
// 1. fstreambase
// 2. ifstream -->derived from fstreambase
// 3. ofstream --> derived from fstreambase

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the Constructor
// 2. Using the member function open() of the class 

int main(){
    string st = "Harry Bhai";
    string st2;
    // Opening the file using Constructor
    // ofstream out("sample60.txt"); //write operation
    // out<<st;

    // opening files using constructor and reading it
    ifstream in("sample60b.txt");   //Read operation
   // in>>st2;      //reads characters till space at a time
    getline(in, st2);   //reads a single line
    cout<<st2;
      
    return 0;
}