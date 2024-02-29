#include<iostream>
#include<fstream>
using namespace std;

int main() {

    ofstream f_out;
    f_out.open("file.txt");
    f_out<<"Hello!";
    f_out.close();

    ifstream f_in;
    f_in.open("file.txt");

    char ch;

    while(!f_in.eof()) {

        f_in>>ch;
        cout<<ch;
    }

    f_in.close();

    return 0;
}

