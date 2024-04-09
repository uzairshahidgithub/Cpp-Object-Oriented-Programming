#include<iostream>
using namespace std;

class stud
{ string name,dep,sec;
	public:
	stud(string n, string d,string s)
{
	name=n;
	dep=d;
	sec=s;
}

stud(stud&r,stud&r1,stud&r2) {
name=r.name+r1.name+r2.name;	
}

string fun() {
return name;
}

string fun2() {
return dep;
}

string fun3() {
return sec;
}

};

int main()
{
stud ob("Uzair","BSCS","A");

cout<<ob.fun();
cout<<ob.fun2();
cout<<ob.fun3();
}