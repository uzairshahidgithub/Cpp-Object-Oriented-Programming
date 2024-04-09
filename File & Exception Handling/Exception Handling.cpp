#include<iostream>
using namespace std;
double fun(double nu,double de)
{
try
{
if(de==0)
throw(de);
else 
return nu/de;}
catch(double x)
{
cout<<"cannot divided by 0"<<endl;
}
}
int main()
{
double n,d;
cin>>n;
cin>>d;
fun(n,d);

}