#include<iostream>
using namespace std;
class A
{ 
string name;
string model;
string colour;
public:
A ()
{

}
A (string x, string y, string z)
{
name=x;
model=y;
colour=z;
}
string fun1()
{
return name;
}
string fun2()
{
return model;
}
string fun3()
{
return colour;
}
};
int main()
{
string p,q,r;
A ob[5];
for(int i=0;i<5;i++)
{
cout<<"enter name of car "<<endl;
cin>>p;
cout<<"enter model of car"<<endl;
cin>>q;
cout<<"enter colour of car "<<endl;
cin>>r;
ob[i]=A(p,q,r);
}
for(int i=0;i<5;i++)
{
cout<<ob[i].fun1()<<endl;
cout<<ob[i].fun2()<<endl;
cout<<ob[i].fun3()<<endl;
}

}


