#include<iostream>
using namespace std;
template <class A>
class Student {
protected:
    A Sec, Name;
public:
    Student(A s,A n) {
        Sec = s;
        Name  = n;
    }
    A fun1() {
        return sec;
    }
    A fun2() {
        return Name;
    }
};

template <class B>
class Child: public student<B>
{
private:
    B id;
public:
    Child(B ss, B nn, B i): student<B>(ss, nn) {
        id=I;
    }
    B fun3() {
        cout<<id;
    }
};

