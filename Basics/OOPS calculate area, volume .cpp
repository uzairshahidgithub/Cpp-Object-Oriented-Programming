#include<iostream>
using namespace std;
class A

{ public :
double len,wid,hgt;
	double area() {
	return len*wid;
}
double volume() {
	return len*wid*hgt;
}
};

int main()
{
A ob;
cout<<"enter the length "<<endl;       
	cin>>ob.len;
cout<<"enter the widt "<<endl;
	cin>>ob.wid;
cout<<"enter the hgt "<<endl;
	cin>>ob.hgt;
	
cout<<"the area is "<<ob.area()<<endl;
cout<<"the volume is "<<ob.volume();
}