#include <iostream>
using namespace std;

class A {
	private:
		int a;
	public:
		int b;
	A() { 
        a=2;
  		b=16; }

void display(){
  cout << a+b;
  }
};

int main(){
 	A ob;
 	A *b;
 	
 	b = &ob;
 	b -> display();
}