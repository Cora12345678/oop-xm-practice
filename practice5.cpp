//Multilevel Inheritance with Multiple Inheritance:

/*Create a base class Person with attributes like name and age.
Derive two classes, Employee and Student, from Person.
Further, derive a class Manager from Employee and Scholar from Student.
Add specific attributes to each derived class, such as salary for Manager and researchTopic for Scholar.
Implement methods to display information for all classes involved in the hierarchy.*/


#include<iostream>
using namespace std;
class Person
{
    public:
    string name;
    float age;
    Person(string n,float a):name(n),age(a){}
    virtual void display() const
    {
        cout<<endl;
        cout<<"the name of the person is "<<name<<endl;
        cout<<"the age of the person is "<<age<<endl;
    }
};
class Employee:public Person
{
    public:
    string post;
    Employee(string n,float a,string p): Person(n,a),post(p){}
    void display () const override
    {
       cout<<endl;
       Person::display();
       cout<<"the post of the employee is "<<post<<endl; 
    }
};
class Student:public Person
{
    public:
    string specialize;
    Student(string n,float a,string spe): Person(n,a),specialize(spe){}
    void display () const override
    {
       cout<<endl;
       Person::display();
       cout<<"the specialization of the student is "<<specialize<<endl; 
    }
};
class Manager:public Employee
{
    public:
    double salary;
    Manager(string n,float a,string spe,double s):Employee(n,a,spe),salary(s){}
    void display() const override
    {
        cout<<endl;
        Employee::display();
        cout<<"the salary of the manager is "<<salary<<endl;
    }
};
class Scholar :public Student
{
    public:
    bool scholar;
    Scholar(string n,float a,string spe,bool sc):Student(n,a,spe),scholar(sc){}
    void display() const override
    {
        cout<<endl;
        Student::display();
        cout<<"the student is scholar or not "<<(scholar?"yes":"no")<<endl;
    }
};
int main()
{
    Person p1("cora",19);
    p1.display();
    Person p2("belle",18);
    p2.display();
    Employee e1("cora",19,"manager");
    e1.display();
    Student s1("belle",18,"it");
    s1.display();
    Manager m1("cora",19,"manager",50000);
    m1.display();
    Scholar sc1("belle",18,"it",true);
    sc1.display();
    return 0;
}