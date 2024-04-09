#include<iostream>
using namespace std;

class A {
private:
    int n;
public:
    A() {
        cout<<"Enter Number: ";
        cin>>n;
    }
    void operator --() {
        n--;
    }
    void display1() {
        cout<<n;
    }
};

class B {
private:
    int x;
public:
    B() {
        cout<<endl;
        cout<<"Enter Number: ";
        cin>>x;
    }
    void operator ++() {
        x++;
    }
    void display2() {
        cout<<x;
    }
};

int main() {
    A a;
    --a;
    a.display1();
    
    B b;
    ++b;
    b.display2();
}