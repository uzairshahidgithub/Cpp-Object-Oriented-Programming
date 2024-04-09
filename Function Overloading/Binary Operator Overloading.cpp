#include<iostream>
using namespace std;

class com{
private:
    int real;
    int img;
 public:
   void fun(){
     cin>>real;
     cin>>img;
   }
 com operator/(com c2)
  {
     com c3;
     c3.real=real+c2.real;
     c3.img=img+c2.img;
     return c3;
  }
  
 void display(){
 cout<<real<<"and"<<-img<<" chal bas ";
 }
};

int main() { 
com c1,c2,c3;
c1.fun();
c2.fun();
c3=c1/c2;
c3.display();    
}