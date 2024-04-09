#include<iostream>
using namespace std;

int main()
{
    int x= 5;
    double y=3;
    string z = " Uzair ";
    
    int *ptrInt=&x;
    double *ptrdou=&y;
    string *ptrStr=&z;
    
    cout<<ptrInt<<endl;
    cout<<ptrdou<<endl;
    cout<<ptrStr<<endl;
    
    (*ptrInt)++;
    
    cout<<*ptrInt<<endl;
    cout<<*ptrdou<<endl;
    cout<<*ptrStr<<endl;
    
    
    ptrInt++;
    }
    
    