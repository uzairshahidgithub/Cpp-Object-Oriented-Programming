#include <iostream>
using namespace std;

class Wall {
public:
int l,h;

   Wall(int ll, int hh) {
   l=ll;
   h=hh;
   }
   
   Wall(Wall&r,Wall&r1,Wall&r2){
        l=r.l,r1.l,r2.l;
        h=r.h,r1.h,r2.h;
        }
   int fun1(){
       return l*h;
        }
};

int main() {
    Wall a(5,6);
    Wall b=a;
    
   cout<<b.fun1();
}
    