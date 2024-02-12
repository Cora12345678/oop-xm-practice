// Diamond Inheritance:
/*Program Statement:
Create a program with a diamond inheritance structure involving four classes: Shape, TwoDShape, ThreeDShape, and Sphere.
Demonstrate how virtual inheritance can be used to address the diamond problem.*/

#include <iostream>
using namespace std;
class Shape
{
private:
    string name;

public:
    Shape(string n) : name(n)
    {
        cout << "the name of the shape is " << name << endl;
    }
};
class TwoDShape : virtual public Shape // use of virtual so it dont duplicate and show a symmetric output
{
private:
    float x_axis, y_axis;

public:
    TwoDShape(string n, float x, float y) : Shape(n), x_axis(x), y_axis(y)
    {
        cout << "x-axis of the shape is " << x_axis << endl;
        cout << "y-axis of the shape is " << y_axis << endl;
    }
};
class ThreeDShape : virtual public Shape // use of virtual so it dont duplicate and show a symmetric output
{
private:
    float size;

public:
    ThreeDShape(string n, float s) : Shape(n), size(s)
    {
        cout << "the size of the shape is " << size << endl;
    }
};
class Draw : public TwoDShape, public ThreeDShape
{
public:
    Draw(string n, float x, float y, float s) : Shape(n), TwoDShape(n, x, y), ThreeDShape(n, s)
    {
        cout << "Shape is drawn " << endl;
    }
};
int main()
{
    Draw *ptr = new Draw("circle", 34, 56, 7);
    cout << endl;
    Shape *ptr1 = new Shape("rectangle");
    cout << endl;
    TwoDShape *ptr2 = new TwoDShape("triangle", 45, 56);
    cout << endl;
    ThreeDShape *ptr3 = new ThreeDShape("square", 2);
    return 0;
}