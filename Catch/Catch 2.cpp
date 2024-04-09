#include<iostream>
using namespace std;

//Using Catch Inheriting Class Publically 
class B{};
class A: private B{};


int main(){
A a;

try{
throw(a);}

catch(B b)
{cout<<"base";}

catch(A a)
{cout<<"derived";}

catch(...)
{cout<<"extra";}

}