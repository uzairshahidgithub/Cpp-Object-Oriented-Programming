#include<iostream>
using namespace std;
class A
{
public:
int a=12;
private:
int b=23;
protected:
int c=45;
};
class B
{
public:
int x=66;
private:
int y=34;
protected:
int z=23;
};
class C: private A, private B
{

};
int main()
{
C ob;

}
