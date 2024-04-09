#include<iostream>
using namespace std;
class Base
{ protected:
   int A=1;
  private:
   int B=2;
  public:
   int C=3;
};

class Derived
{ protected:
   int X=4;
  private:
   int Y=5;
  public:
   int Z=6;
};

class Multiple: public Base , public Derived
{ 
 public:
  int display(){
    cout<<A;
    cout<<X;
  }
};

int main()
{
   Multiple ob;
   cout<<ob.display();
   }