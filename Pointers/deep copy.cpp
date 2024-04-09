#include <iostream>
using namespace std;

class A {
private:
  int a,b;
  int*p;
public:
A(int x, int y, int z){
   a=x;
   b=y;
   p= new int;
   *p=z;
}

void show(){
 cout<<a;
 cout<<b;
 cout<<*p;
}

A(A &r){
 a=r.a;
 b=r.b;
 p= new int;
 *p= *(r.p);
}
~A(){
 delete 
}
};

int main(){
 A a1(5,6,3);
 A b1=a1;
 b1.show();
}