#include<iostream>
using namespace std;
class employee
{
protected:
int basic_salary;
public:
employee (int b)
{
basic_salary=b;
cout<<"base class"<<endl;
}
virtual int calsalary()
{

}
};
class manager : public employee
{
private:
int bonus;
public:
manager (int b,int bb):employee(b)
{
bonus=bb;
}
int calsalary()
{
cout<<"total salary "<<endl;
cout<<bonus+basic_salary<<endl;
}
};
class developor: public employee
{
private:
int overtime;
public:
developor(int b,int bb,): employee (b), overtime(bb)
{
int calsalary()
{
if(overtime>30 && overtime<60)
{
return basic_salary+1000;
}
}
}
};
class runner :public employee
{
private:
int leave;
public:
runner(int b,int bb):employee(b), leave(bb)
{

}
int calsalary()
{
if(leave>3)
{
return basic_salary-1000;
if else (leave>5)
return basic_salary-2000;
}
}
};
int main()
{
employee *p;
runner r(70000,4);
p=&r;
cout<<p->calsalary();

}