#include<iostream>
using namespace std;
 class A{
	private:
		int age;
		float m;
	public:
		A()
		{}
		
		A(int i,float b){
		int age;
		float m;	
			}
				
	void fun1(){
		cout<<age;
		cout<<m;
	}	
 };
 
 int main(){
		A *p = new A[3];
		int a;
		float b;
		
		for(int i=0; i<3; i++){
			cin>>a;
			cin>>b;
			p[i]=A(a,b);
		}
		
		for(int i=0; i<3; i++){
			p->fun1();
			p++;
		}
}

