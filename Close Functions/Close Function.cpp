#include<fstream>
#include<iostream>
using namespace std;
int main() {
    fstream ob;
    ob.open("file.txt", ios::in);
    if(! ob) {
            cout << "file is created but not found" << endl;
        }
    else{
    cout << "file is created successfully" << endl;
    string s;
    //getline(cin,s);
    while(getline (cin,s)&&!s.empty()){
    ob<<s;
    ob.close();
    }
    }