#include <iostream>
using namespace std;

class A {
public:
int a,b;
A(int x, int y){
 a = x;
 b = y;
}

A(A&r){
a=r.a;
b=r.b;
}
void show(){
cout<<a;
cout<<b;
}
};

int main(){
 A a1(5,6);
 A b1 = a1;
 b1.show();
}