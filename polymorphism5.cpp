//Multiple Inheritance:
/*Program Statement:
Design a program with three classes: Employee, Person, and Manager.
Employee and Person are base classes, and Manager is derived from both. Include appropriate attributes and functions.*/


#include<iostream>
using namespace std;
class Employee
{
    private:
    string company,work;
    public:
    Employee(string comp,string w):company(comp),work(w){}
    virtual void display_info
}