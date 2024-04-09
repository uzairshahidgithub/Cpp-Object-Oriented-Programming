#include <iostream>
using namespace std;

class A {
private:
    int stud;
    char c;

public:
    A() {} 

    A(int a, char b) {
        stud = a;
        c = b;
    }

    void fun() {
        cout << "Enter name of Student " << stud << ": " << c << endl;
    }
};

int main() {
    A ob[5]; 
    int x;
    char y;

    for (int i = 0; i < 5; i++) {
        cout << "Enter student number and a character: ";
        cin >> x >> y;
        ob[i] = A(x, y); 
    }

    A* a = ob; 

    for (int i = 0; i < 5; i++) {
        a->fun(); 
    }

    return 0;
}
