#include<iostream>
using namespace std;
class A
{ public :
int a,b;
int sum;
void display();
};
void A::display()
{
cin>>a;
cin>>b;
sum=a+b;
cout<<sum<<endl;
}


int main()
{
A ob;
ob.display();
}