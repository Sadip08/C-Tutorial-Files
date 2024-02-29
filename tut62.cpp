#include<iostream>
#include<fstream>
     using namespace std;
int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"This is me\n";
    out<<"This is me as well";
    out.close();

    ifstream in;
    string st1,st2;
    in.open("sample60b.txt");
    // in>>st1>>st2;
    // cout<<st1<<st2;

    while(in.eof()==0){
        getline(in,st2);
        cout<<st2<<endl;
    }
    in.close();
    return 1;
}