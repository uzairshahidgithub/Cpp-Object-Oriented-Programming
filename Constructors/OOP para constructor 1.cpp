#include <iostream>
using namespace std;

class A {
public:
string Name;
int id;
int Sec;

   A(string n, int i, int x) {
   Name=n;
   id=i;
   Sec=x;
   }
   
   string fun1(){
        cout << Name << endl;
        }
   int fun2(){
        cout << id << endl;
        }
   int fun3(){
        cout << Sec << endl;
    }
};

int main() {
    string p;
    int q,r;
    
    cin>>p;
    cin>>q;
    cin>>r;
    
    A a(p,q,r);
    a. fun1();
    a. fun2();
    a. fun3();
}
    