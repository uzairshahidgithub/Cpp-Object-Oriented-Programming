#include<iostream>
using namespace std;
class publication 
{ public:
string title;
float price;
void getdata()
{
cin>>title;
cin>>price;
}
void display()
{
cout<<title<<endl;
cout<<price<<endl;
}
};
class book:public publication
{
int count;
public:
void getdata()
{
cin>>count;
}
void display()
{
cout<<count<<endl;
}
};
class tape:public publication
{
float min;
public:
void getdata()
{
cin>>min;
}
void display()
{
cout<<min<<endl;
}
};
int main()
{
tape ob;
ob.publication::getdata();

}