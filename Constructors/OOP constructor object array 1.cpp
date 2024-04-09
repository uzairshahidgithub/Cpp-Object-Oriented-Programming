#include<iostream>
using namespace std;
class A
{ 
string name;
public:
A ()
{

}

A(string n)
{
	name=n;
}

string fun1() {
	return name;
}
};

int main()
{
	string p;
	A ob[5];
	
	for(int i=0;i<5;i++) {
	cin>>p;
	ob[i]=A(p);
}

for(int i=0;i<5;i++) {
cout<<ob[i].fun1();
 }
}