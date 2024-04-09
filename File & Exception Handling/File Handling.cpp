#include <fstream>
#include <iostream>
using namespace std;

// File Handling of Object

class A {
 string name;
 int age;
 public:
 A()
 {
   cin>>name;
   cin>>age;
   cout<<name;
   cout<<age;
 }
 
 void add(){
 fstream ob;
 ob.open("Uzair.txt",ios::app);
 if(!ob){
 cout<<"Error"<<endl;}
 else{
 ob<<"Name:"<<name<<endl;
 ob<<"Age:"<<age<<endl;
 }
 }
};

int main() {
 A ob2;
 ob2.add();
}
    