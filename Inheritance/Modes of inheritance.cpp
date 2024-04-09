#include<iostream>
using namespace std;
class base
{
protected:
int a=45;
public:
int b=23;
private:
int c=67;
};
class Derive: public base
{

};
int main()
{
Derive ob;
cout<<ob.b;
}