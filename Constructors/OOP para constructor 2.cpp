#include<iostream>
using namespace std;
class A
{ public:
	string name;
	int marks;
	char sec;
	
A(string n,int m,char c)
{
	name=n;
	marks=m;
	sec=c;
}
	string fun1()
	{
		return name;
	}
	int fun2()
	{
		return marks;
	}
	char fun3()
	{
		return sec;
	}
};

int main()
{
	string p;
	int q;
	char r;
	
	cin>>p;
	cin>>q;
	cin>>r;
	
	A ob(p,q,r);
	cout<<ob.fun1()<<endl;
	cout<<ob.fun2()<<endl;
	cout<<ob.fun3()<<endl;
}