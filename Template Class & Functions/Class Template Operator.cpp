#include<iostream>
using namespace std;
template<class T>
class A
{
private:
T num1;
T num2;
public:
A(T n1,T n2)
{
num1=n1;
num2=n2;
}
void sum()
{
cout<<"the sum is :"<<num1+num2<<endl;
}
void sub()
{
cout<<"the subtraction is :"<<num1-num2<<endl;
}
void mult()
{
cout<<"the multiplication is :"<<num1*num2<<endl;
}
void div()
{
cout<<"the Division is :"<<num1/num2<<endl;
}
void compare()
{
if(num1>num2)
{
cout<<1<<endl;
}
else
{
cout<<-1;
}
}
};
int main()
{
A<int>ob(10,5);
ob.sum();
ob.sub();
ob.mult();
ob.div();
ob.compare();
}