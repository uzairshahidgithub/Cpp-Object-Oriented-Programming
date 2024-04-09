#include<iostream>
using namespace std;

class A {
public:
    int play() {
        cout<<"Loading"<<endl;
    }
};

class B {
public:
    int play() {
        cout<<"Move forward"<<endl;
    }
};

class C : public A, public B
        {
        public:
            int play() {
                cout<<"uzair"<<endl;
            }
        };

int main() {
    C ob;
    ob.B::play();
}