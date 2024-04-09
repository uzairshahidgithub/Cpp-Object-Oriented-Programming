#include<iostream>
using namespace std;
class A
{
public:
int a=12;
private:
int b=23;
protected:
int c=45;
};
class B
{
public:
int x=66;
private:
int y=34;
protected:
int z=23;
};
class C: protected A, protected B
{
public:
void fun()
{
cout<<a<<endl;
cout<<c<<endl;
cout<<x<<endl;
cout<<z<<endl;
}
};
int main()
{
C ob;
ob.fun();
}
