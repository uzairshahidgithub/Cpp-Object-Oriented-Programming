#include<iostream>
using namespace std;
class A
{ public:
	string name;
	int marks;
	char sec;

A(){
	cin>>name;
	cin>>marks;
	cin>>sec;
	
	cout<<name<<endl;
	cout << marks << endl;
	cout << sec<< endl;
 }
};

int main() {
	A ob[6];
}