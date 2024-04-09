#include<iostream>
using namespace std;
int main()
{
int id;

try
{cout<<"enter the id name"<<endl;
cin>>id;
if(id>100 && id<200)
 cout<<"allowed"<<endl;
else
       throw(id);
}
catch(int i)
{
cout<<"not allowed"<<endl;
}
return 0;
}