#include<iostream>
using namespace std;

class A{
   protected:
    string name;
    string section;
   public:
    string fun1(){
     cin<<name<<endl;
     cin<<section<<endl;
    }
    void display(){
     cout<<name<<endl;
     cout<<section<<endl;
    }
   };
   class dog: public animal{
    public:
    double size;
    cin>>size;
   };
   
   int main(){
    dog ob;
    ob.fun1();
    ob.fun2();
   }