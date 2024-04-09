#include<iostream>
using namespace std;
class A
{ private:
  string name;
public:
   A(){
   }
   A(string n){
     name=n;
     cout<<name;
   }
   };
 class B: public A
 {
  string dep;
  char sec;
  public:
  B(){}
   B(string a, string d, char s): A(a) {
     dep=d;
     sec=s;
     cout<<dep;
     cout<<sec;
   }
   };
 class C :public B
 {
  string sub;
  public:
  C(){}
   C(string x, string y, char z, string a){
   B(x,y,z);
     sub=a;
     cout<<sub;
   } 
   };
   
   int main (){
     C ob("Hassan","BSCS",'A',"OOP");
   }