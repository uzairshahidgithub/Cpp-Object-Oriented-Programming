#include<iostream>
using namespace std;
int main(){
	int *p1;
	float *p2;
	
	p1 = new int;
	p2 = new float;
	
	*p1=33;
	*p2=55;
	
	cout<<*p1;
	cout<<*p2;
 delete p1;
 delete p2;
}	