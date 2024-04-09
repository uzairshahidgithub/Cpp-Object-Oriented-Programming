#include<iostream>
using namespace std;
template<class A>
class point_type
{protected:
A x_plane,y_plane;
public:
point_type(A x,A y)
{ x_plane=x;
y_plane=y;
}
void coordinate()
{cout << "X coordinate="<<x_plane << endl;
cout << "Y coordinate="<<y_plane << endl;}
};
template<class B>
class circle_type:public point_type<B>
{B  radius;
public:
circle_type(B a,B b,B d):point_type<B>(a,b)
{ 
radius=d;
}
void area()
{ cout << "Area is "<<3.14*radius*radius << endl;}
void circumference ()
{cout << "circumference is "<<2*3.14*radius << endl;}

};

 
int main()
{ circle_type<double>ob(3,4,5);
ob.coordinate();
ob.area();
ob.circumference();


}