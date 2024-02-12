//Vehicle Inheritance:
/*Create a base class Vehicle with attributes like brand and model.
Derive two classes, Car and Motorcycle, from Vehicle. Add specific attributes to each derived class, such as numDoors for Car and hasFairing for Motorcycle.
Implement a method in the base class to display general vehicle information and override it in each derived class to display specific details.*/

#include<iostream>
using namespace std;
class Vehicle
{
    public:
    string brand,model;
    Vehicle(string b,string mod):brand(b),model(mod) {}
    virtual void display() const
    {
        cout<<"the brand of the car is "<<brand<<endl;
        cout<<"the model of the car is "<<model<<endl; 
    }
};
class Car: public Vehicle
{
    public:
    int num_doors;
    Car(string b,string mod,int n):Vehicle(b,mod),num_doors(n){}
    void display () const override
    {
       cout<<"the brand of the car is "<<brand<<endl;
       cout<<"the model of the car is "<<model<<endl;
       cout<<"the number of doors in car are "<<num_doors<<endl;  
    }
};
class Motor_cycle: public Vehicle
{
   public:
   bool has_fairing;
   Motor_cycle(string b,string mod,bool hs) :Vehicle(b,mod),has_fairing(hs){}
   void display() const override
   {
     cout<<"the brand of the motorcycle is "<<brand<<endl;
     cout<<"the model of the motorcycle is "<<model<<endl;
     cout << "has Fairing: " << (has_fairing ? "Yes" : "No") <<endl;
   }
};
int main()
{
    Car c1("civic","001",4);
    c1.display();
    Motor_cycle m1("Harley-Davidson", "Sportster", true);
    m1.display();
    return 0;
}