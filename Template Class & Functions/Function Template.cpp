#include<iostream>
using namespace std;
template<typename A>
A fun1(A x,A y)
{
return x+y;
}
int main()
{
cout<<fun1<int>(5,6)<<endl;
cout<<fun1<float>(4.6,7.8)<<endl;
}