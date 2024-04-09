#include<iostream>
using namespace std;
class A
{ public :
 	string title;
	string author;
	int id;
	int price;
	int pub;
	
	void input()
{
	cout<<"Enter Id"<<endl;
	cin>>id;
		cin.ignore();
	cout<<"enter the title of book "<<endl;
		getline(cin,title);
	cout<<"enter the author of book "<<endl;
		getline(cin,author);
	cout<<"enter the price of book "<<endl;
	cin>>price;
	cout<<"enter the year "<<endl;
	cin>>pub;
}
void output() {
	cout<<"Book ID : "<<id<<endl;
	cout<<"the title is "<<title<<endl;
	cout<<"the author is "<<author<<endl;
	cout<<"the prize of book is "<<price<<endl;
}
};

int main()
{
A ob[3];
for(int i=0;i<3;i++)
{
ob[i].input();
}
for(int i=0;i<3;i++)
{
ob[i].output();
}
int high=0;
for(int i=1;i<3;i++)
{
if(ob[i].price > ob[high].price)
{
high=i;
}
}
cout<<"=========HIGHEST PRICE BOOK========="<<endl;
cout<<"The book title is "<<ob[high].title<<endl;
cout<<"The author of book is "<<ob[high].author<<endl;
cout<<"The price of book "<<ob[high].price<<endl;
int year1=0;
for(int i=1;i<5;i++)
{
if(ob[i].pub > ob[year1].pub)
{
year1=i;
}
}
cout<<"============LATEST BOOK============="<<endl;
cout<<"the lastest book is  "<<ob[year1].pub;
}


    