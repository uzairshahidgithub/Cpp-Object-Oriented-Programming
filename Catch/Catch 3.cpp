#include<iostream>
using namespace std;

//Using Catch
int main (){
 int id;
 cin>>id;
 try{if(id>505 || id>606)
 cout<<"";
 else
 throw (id);
 }
 catch (int i)
 {
 cout<<"";
 }
}