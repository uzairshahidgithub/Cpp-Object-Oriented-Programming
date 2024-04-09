#include <iostream>
using namespace std;

class A {
public:
string name;

   A() {
   name="abc";
   }
   
   A(A&r,A&r1){
        name = r.name + r1.name;
        }
   string fun1(){
       cout<<name;
        }
};

int main() {
    A a;  
    a.fun1();
}
    