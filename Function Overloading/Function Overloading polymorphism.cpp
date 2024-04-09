#include<iostream>
using namespace std;
class publication {
	public:
		string title;
		float price;
		void getdata() {
			cout<<"Title: ";
			cin>>title;
			cout<<"Price: ";
			cin>>price;
			}
		void display() {
			cout<<"Title: ";
			cout<<title<<endl;
			cout<<"Price: ";
			cout<<price<<endl;
			}
	};
class book:public publication {
		int count;
	public:
		void getdata() {
			cout<<"Enter Count: ";
			cin>>count;
			}
		void display() {
			cout<<count<<endl;
			}
	};
class tape:public publication {
		float min;
	public:
		void getdata() {
			cout<<"Enter Minimum: ";
			cin>>min;
			}
		void display() {
			cout<<min<<endl;
			}
	};
int main() {
	publication ob1;
	ob1.publication::getdata();
	ob1.display();
	book ob2;
	ob2.book::getdata();
	ob2.display();
	tape ob3;
	ob3.tape::getdata();
	ob3.display();
	}