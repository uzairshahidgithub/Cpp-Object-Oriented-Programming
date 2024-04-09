#include<iostream>
using namespace std;
class shape
{protected:
int length;
public:
shape(int l)
{
length=l;
cout<<"this is shape class"<<endl;
}
virtual void area()=0;
};
class square: public shape
{
public:
square(int l): shape (l)
{ 
cout<<"square"<<endl;
}
void area()
{
cout<<4*length<<endl;
}
};
class triangle: public shape
{
private:
int width;
public:
triangle (int l,int w):shape(l),width(w)
{
cout<<"triangle"<<endl;
}
void area()
{
cout<<0.5*length*width<<endl;
}
};
class rectangle: public shape 
{
private:
int breath;
public :
rectangle (int l,int w):shape(l), breath(w)
{
cout<<"rectangle"<<endl;
}
void area()
{
cout<<length*breath<<endl;
}
};
int main()
{
square s(7);
s.area();
shape *p;
triangle t(5,6);
p=&t;
p->area();
}