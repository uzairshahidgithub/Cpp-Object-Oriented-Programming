#include<iostream>
using namespace std;
template<typename A>
A fun1(A x,A y)
{
A temp;
temp=x;
x=y; 
y=temp;
cout<<x<<endl;
cout<<y<<endl;
}
int main()
{
cout<<fun1<int>(3,6) <<endl;
}