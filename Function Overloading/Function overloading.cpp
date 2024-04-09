#include<iostream>
using namespace std;
class A
{
public:
    double fun1(int i)
    {
        cout<<i<<endl;
    }
    int  fun1(double j)
    {
        cout<<j<<endl;
    }
};
int main()
{
    A a;
    a.fun1(1);
    a.fun1(3.4);
}