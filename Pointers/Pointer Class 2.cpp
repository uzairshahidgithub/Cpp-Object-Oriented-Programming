#include <iostream>
using namespace std;

class A {
	private:
		int id;
	public:
		A(int a)
			{
  				id=a;
			}

	void fun()	{
  		cout << id <<endl;
	}
};

int main(){
 A ob[3]={A(1),A(2),A(3)};
 
 	A*a;
 	a=ob;
 	
 for(int i=0; i<3; i++) {
 	a->fun();
 	a++; 
  }
}