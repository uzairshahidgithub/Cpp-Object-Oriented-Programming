#include<iostream>
using namespace std;

class publication {
public:
    string  title;
    float  price;
    void fun() {
        cout<<"Enter Title: ";
        cin>>title;
        cout<<"Entered Successfully --> "<<title<<endl;
        cout<<"Enter Price: ";
        cin>>price;
        cout<<"Entered Successfully --> "<<price<<endl;
    }
};

class book : protected publication {
public:
    int  count;
    void fun2() {
        publication::fun();
        cout<<"Enter Count: ";
        cin>>count;
        cout<<"Entered Successfully --> "<<count<<endl;
    }
};

class tape : private publication {
public:
    int  time;
    void fun3() {
        publication::fun();
        cout<<"Enter Time: ";
        cin>>time;
        cout<<"Entered Successfully --> "<<time;
    }
};

int main() {
    tape ob;
    ob.fun3();
}