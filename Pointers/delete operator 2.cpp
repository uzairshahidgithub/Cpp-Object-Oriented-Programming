#include<iostream>
using namespace std;
 class A{
	private:
		int age;
	public:
		float m;
	A(int a,float b){
		age=a;
		m=b;
	}
	void show(){
		cout<<age;
	}
 };
 int main(){
	A*p=new A(56,63.5)
 	p-->show();
	p-->m;
	delete p;
 }

