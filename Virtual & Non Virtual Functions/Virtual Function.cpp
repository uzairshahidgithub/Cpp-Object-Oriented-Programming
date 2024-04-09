#include<iostream>
using namespace std;
class Employee
{
private:
    double tsalary;
public:
    Employee() {}
    Employee(double x)
    {
        tsalary=x;
    }
    virtual int salary()
    {
        cout << "Employee salary="<<tsalary << endl;
    }
};
class manager:public Employee
{
private:
    double m_salary;
    int bonus;
public:
    manager() {}
    manager( double y,int z)
    {   m_salary=y;
        bonus=z;
    }
    int salary()
    {
        cout << "manager salary="<<m_salary+bonus << endl;
    }
};
class developer: public Employee
{
private:
    double d_salary;
    int overtime;
public:
    developer() {}
    developer(double x,int y)
    {   d_salary=x;
        overtime=y;
    }
    int salary()
    {   if(overtime>30)
        {
            cout << "developer salary="<<d_salary+1000 << endl;
        }
        else if(overtime>60)
        {
            cout << "developer salary="<<d_salary+2000 << endl;
        }
    }
};
class runner:public Employee
{
private:
    double r_salary;
    int leaves;
public:
    runner() {}
    runner(double x,int y)
    {   r_salary=x;
        leaves=y;
    }
    int salary()
    {   if(leaves>3)
        {
            cout << "runner salary="<<r_salary-1000 << endl;
        }
        else if(leaves>5)
        {
            cout << "runner salary="<<r_salary-2000 << endl;
        }
    }
};
int main()
{   Employee *p;
    manager a(50000,5000);
    developer b(40000,70);
    runner c(30000,6);
    p=&c;
    p->salary();

}