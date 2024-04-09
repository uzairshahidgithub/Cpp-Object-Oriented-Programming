#include<iostream>
using namespace std;
class  A
{
protected:
int salary=2000;
};
class B
{
protected:
int bonus=5000;
};
class c:public A,public B
{
public:
int total;
void fun()
{
total=salary+bonus;
cout<<total;
}
};
int main()
{
c ob;
ob.fun();

} 