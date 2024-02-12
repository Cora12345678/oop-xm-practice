//Employee Inheritance:

/*Create a base class Employee with attributes like name and salary.
Derive two classes, Manager and Developer, from Employee. Add specific attributes like department for the manager and programmingLanguage for the developer.
Implement methods in the base class to display general employee information and override them in the derived classes to display specific details.*/


#include<iostream>
using namespace std;
class employee
{
    public:
    string name;
    double salary;
    employee(string n,double s):name(n),salary(s){}
    virtual void display() const
    {
        cout<<endl;
        cout<<"the name of the employee is "<<name<<endl;
        cout<<"the salary of the employee is "<<salary<<endl;
    }
};
class manager:public employee
{
    public:
    string department;
    manager(string n,double s,string dep):employee(n,s),department(dep){}
    void display() const override
    {
        cout<<endl;
        employee::display();
        cout<<"the department of the manager is "<<department<<endl;
    }
};
class programmer:public employee
{
    public:
    string programming_language;
    programmer(string n,double s,string p_l):employee(n,s),programming_language(p_l){}
    void display () const override
    {
        cout<<endl;
        employee::display();
        cout<<"the programming language of programmer is "<<programming_language;
    }
};
int main()
{
    employee e1("John",23000);
    e1.display();
    manager m1("John",30000,"it");
    m1.display();
    programmer p1("John",50000,"C++");
    p1.display();
}