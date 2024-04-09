#include<iostream>
using namespace std;
template<typename A>
A absolute(A x)
{
if (x<0)
{
return -x;
}
else
{
return x;
}
}
int main()
{
cout<<absolute<int>(-3) <<endl;
}