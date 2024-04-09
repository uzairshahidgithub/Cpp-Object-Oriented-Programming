#include<iostream>
using namespace std;
class A
{
public:
virtual int peri(int l,int b)
{
return l+b;
}
};
class B:public A
{
public:
int peri(int l,int b)
{ cin>>l;
cin>>b;
return l+b;
}
};
class C: public A
{public:
int peri(int l,int b)
{
return l+b;
}
};
int main()
{
A *p;
B  b;
p = &b;
int x,q;
cout<<p->peri(x,q);

}