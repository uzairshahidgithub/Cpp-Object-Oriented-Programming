#include<iostream>
using namespace std;
class vehicle
{
private:
int wheels;
protected:
string passengers;
public;
void input(int a,int b)
{
wheels=a;
passengers=b;
}
};
class heavyvehicle:protected vehicle
{
private:
int diesel;
protected:
int load;
public:
void read(int x,int y)
{
diesel=x;
load=y;
}
void write()
{

}
};
class bus : private heavyvehicle
{
private:
char a[20];
public:
void fetch(char z)
{
a[20]=x;
}
void display()
{

}
};
int main()
{
}
