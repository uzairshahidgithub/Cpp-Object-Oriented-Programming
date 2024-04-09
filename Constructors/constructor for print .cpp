#include <iostream>
using namespace std;

class A { 
   public:
     A(){
      cout<<"This is a parent class constructor"<<endl;
     }
};

class B : public A { 
   public:
     B(){
      cout<<"This is a Child class constructor"<<endl;
     }
};

int main(){
   B ob;
}