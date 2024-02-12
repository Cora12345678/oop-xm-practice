//Diamond Inheritance Problem:

/*Create a base class Shape with attributes like name and color.
Derive two classes, Circle and Rectangle, from Shape.
Further, derive a class ColoredShape from both Circle and Rectangle.
Address the diamond inheritance problem by using virtual inheritance.
Implement methods to display information for each class in the hierarchy.*/

#include <iostream>
using namespace std;

class Shapes
{
public:
    string name, color;
    Shapes(string n, string col) : name(n), color(col) {}
    virtual void display() const
    {
        cout << endl;
        cout << "the name of the shape is " << name << endl;
        cout << "the color of the shape is " << color << endl;
    }
};

class Circle : virtual public Shapes
{
public:
    float radius;
    Circle(string n, string col, float rad) : Shapes(n, col), radius(rad) {}
    void display() const override
    {
        Shapes::display();
        cout << "the radius of circle is " << radius << endl;
        cout << "the area of circle is " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : virtual public Shapes
{
public:
    float length, width;
    Rectangle(string n, string col, float len, float wid) : Shapes(n, col), length(len), width(wid) {}
    void display() const override
    {
        cout << endl;
        Shapes::display();
        cout << "the length of rectangle is " << length << endl;
        cout << "the width of rectangle is " << width << endl;
        cout << "the area of rectangle is " << length * width << endl;
    }
};

class coloured_shape : public Circle, public Rectangle
{
public:
    bool coloured;
    coloured_shape(string n, string col, float rad,float len,float wid, bool c_s) : Shapes(n, col), Circle(n, col, rad), Rectangle(n, col, len, wid), coloured(c_s) {}
    void display() const override
    {
        Shapes::display();
        cout << "the radius of circle is " << radius << endl;
        cout << "the area of circle is " << 3.14 * radius * radius << endl;
        cout << "the length of rectangle is " << length << endl;
        cout << "the width of rectangle is " << width << endl;
        cout << "the area of rectangle is " << length * width << endl;
    }
};

int main()
{
    coloured_shape shape("Circle", "Purple", 5.0,13,12, true);
    shape.display();

    return 0;
}
