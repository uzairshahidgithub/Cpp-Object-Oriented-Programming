#include<iostream>
#include<fstream>
using namespace std;
class A
{
string name;
int age;
public:
A()
{
cin>>name;
cin>>age;
}
void add()
{
fstream obj;
obj.open("file.txt",ios::app);
if(!obj)
{
cout<<"file not found"<<endl;
}
else
{
cout<<name<<endl;
cout<<age<<endl;
}
}
};
int main()
{
A a;
a.add();
}