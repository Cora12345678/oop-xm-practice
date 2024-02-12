#include<iostream>
using namespace std;
class Shapes
{
    public:
    virtual void draw() const 
    {
        cout<<"shape is drawn "<<endl;
    }
};
class Circle:public Shapes
{
    public:
    void draw() const override
    {
        cout<<"Circle is drawn "<<endl;
    }
    void draw (int radius) const
    {
        cout<<"the radius of circle is "<<radius<<endl;
        cout<<"area of circle is "<<2*3.14*radius<<endl;
    }
};
class Rectangle:public Shapes
{
   public:
    void draw() const override
    {
        cout<<"Rectangle is drawn "<<endl;
    }
    void draw (double length,double width) const
    {
        cout<<"the length of rectangle is "<<length<<endl;
        cout<<"the width of rectangle is "<<width<<endl;
        cout<<"area of rectangle is "<<length*width<<endl;
    } 
};
class Triangle:public Shapes
{
   public:
    void draw() const override
    {
        cout<<"Triangle is drawn "<<endl;
    }
    void draw (double height,double width) const
    {
        cout<<"the height of triangle is "<<height<<endl;
        cout<<"the width of triangle is "<<width<<endl;
        cout<<"area of triangle is "<<0.5*(height*width)<<endl;
    } 
};
int main()
{
    Shapes *ptr = new Shapes;
    ptr->draw();
    Circle *ptr1 = new Circle;
    ptr->draw();
    ptr1->draw(6);
    Rectangle *ptr2 = new Rectangle;
    ptr->draw();
    ptr2->draw(20,10);
    Triangle *ptr3 = new Triangle;
    ptr->draw();
    ptr3->draw(50,20);
    return 0;
}