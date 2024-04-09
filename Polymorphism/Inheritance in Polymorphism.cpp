#include<iostream>
using namespace std;

class publication {
public:
    string  title;
    float  price;
    void fun() {
        cout<<"Enter Title";
        cin>>title;
        cout<<title<<endl;
        cout<<"Enter Price";
        cin>>price;
        cout<<price<<endl;
    }
};

class book : public publication {
public:
    int  count;
    void fun() {
        cout<<"Enter Count";
        cin>>count;
        cout<<count<<endl;
    }
};

class tape : public publication {
public:
    int  time;
    void fun() {
        cout<<"Enter Time";
        cin>>time;
        cout<<time;
    }
};

int main() {
    tape ob;
    ob.publication::fun();

}