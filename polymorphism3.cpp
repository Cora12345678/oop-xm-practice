//Basic Inheritance:

/*Define a base class "Vehicle" with attributes like "make" and "model." Create a derived class "Car" that inherits from "Vehicle" and adds a specific attribute like "num_doors."
Function Overloading:

In the "Vehicle" class, create a method called "display_info" that prints basic information about the vehicle. Overload this method in the "Car" class to include information about the number of doors.
Polymorphism with Inheritance:

Implement a method called "start_engine" in both the "Vehicle" and "Car" classes. In the "Vehicle" class, print a generic message. In the "Car" class, override this method to print a message specific to starting a car's engine.*/


#include<iostream>
using namespace std;
class Vehicle
{
    private:
    string make,model;
    public:
    virtual void display_info() const
    {
        cout<<"car company information"<<endl;
    }
    virtual void start_engine() const
    {
        cout<<"condition of engine of vehicle "<<endl;
    }
    void start_engine(string message) const
    {
        cout<<"engine condition of vehicle is good "<<endl;
    }
};
class Car:public Vehicle
{
    private:
    int num_doors;
    public:
    void display_info() const override
    {
        cout<<"Toyota company information "<<endl;
    }
    void display_info(int num_doors) const
    {
        cout<<"no. of doors in the vehicle are "<<num_doors<<endl;
    }
    void start_engine() const override
    {
        cout<<"condition of engine of vehicle "<<endl;
    }
    void start_engine(string message) const
    {
        cout<<"engine condition of vehicle is good "<<endl;
    }
};
int main()
{
    Car *ptr = new Car;
    ptr->display_info();
    ptr->display_info(4);
    ptr->start_engine();
    ptr->start_engine("print");
    delete ptr;
    return 0;
}