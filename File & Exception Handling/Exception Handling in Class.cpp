#include<iostream>
using namespace std;
class student
{
private:
string name;
int roll ;
public:
student(){};
student(string s,int x)
{
name =s;
roll=x;
}
void display()
{
try
{
if(roll%2==0)
{
cout<<" the name is"<<name<<endl;
cout<<"the rollno is "<<roll<<endl;
}
else
throw(roll);
}
catch(int r)
{
cout<<"invalid rollnumber"<<endl;
}
}
};
int main()
{
string s;
int x;
student ob[2];
for(int i=0;i<2;i++)
{cout<<"enter the name"<<endl;
cin>>s;
cout<<"enter the rollno"<<endl;
cin>>x;
ob[i]=student (s,x);
}
for(int i=0;i<2;i++)
{
ob[i].display();
}
}