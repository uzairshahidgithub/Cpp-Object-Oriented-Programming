#include<fstream>
#include<iostream>
using namespace std;
int main() {
    fstream ob;
    ob.open("file.txt", ios::out);
    if(! ob) {
            cout << "file is created but not found" << endl;
        }
        else
            cout <<     "file is created successfully" << endl;
    ob.close();
}