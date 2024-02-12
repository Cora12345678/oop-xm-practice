//Geometry Inheritance:

/*Create a base class Shape with attributes like name and color.
Derive two classes, Circle and Rectangle, from Shape. Add specific attributes like radius for the circle and length and width for the rectangle.
Implement a method in the base class to display general shape information and override it in each derived class to display specific details.*/

#include<iostream>
using namespace std;
class Shapes
{
    public:
    string name,color;
    Shapes(string n,string col):name(n),color(col){}
    virtual void display() const
    {
        cout<<"The name of the shape is "<<name<<endl;
        cout<<"The color of the shape is "<<color<<endl;
    }
};
class Circle:public Shapes
{
    public:
    float radius;
    Circle(string n,string col,float rad):Shapes(n,col),radius(rad){}
    void display() const override
    {
        Shapes::display();
        cout<<"the radius of circle is "<<radius<<endl;
        cout<<"the area of circle is "<<2*3.14*radius<<endl;;
    }
};
class Rectangle:public Shapes
{
    public:
    float length,width;
    Rectangle(string n,string col,float len,float wid):Shapes(n,col),length(len),width(wid){}
    void display() const override
    {
        cout<<endl;
        Shapes::display();
        cout<<"the length of circle is "<<length<<endl;
        cout<<"the width of circle is "<<width<<endl;
        cout<<"the area of circle is "<<length*width<<endl;;
    }
};
int main()
{
    Circle c1("circle","red",34.4);
    c1.display();
    Rectangle r1("rectangle","blue",23,45);
    r1.display();
    return 0;
}
