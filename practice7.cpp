//Problem: Shape Hierarchy
/*Define a hierarchy of shapes in C++. Consider the following shapes: Circle, Rectangle, and Triangle. Each shape should have attributes such as name, color, and methods for calculating area and displaying information.

Create an abstract base class Shape with pure virtual functions for calculateArea() and displayInfo().
Derive three classes: Circle, Rectangle, and Triangle from the Shape class.
Implement the necessary methods in each derived class to calculate the area and display information for that specific shape.
Create an additional class called ColoredShape which inherits from Shape and has an additional attribute for the color of the shape.
Write a program that demonstrates the use of these classes. Create instances of each shape, set their attributes, and display their information, including the calculated area. Also, create instances of colored shapes and demonstrate the functionality of the ColoredShape class.*/


#include <iostream>
#include <cmath>
using namespace std;

// Abstract base class Shape
class Shape {
public:
    string name;
    string color;

    Shape(string n, string col) : name(n), color(col) {}

    // Pure virtual functions
    virtual double calculateArea() const = 0;
    virtual void displayInfo() const {
        cout << "Shape: " << name << "\nColor: " << color << "\n";
    }
};

// Circle class derived from Shape
class Circle : public Shape {
public:
    double radius;

    Circle(string n, string col, double rad) : Shape(n, col), radius(rad) {}

    double calculateArea() const override {
        return 3.14 * radius * radius;
    }

    void displayInfo() const override {
        Shape::displayInfo();
        cout << "Radius: " << radius << "\nArea: " << calculateArea() << endl;
    }
};

// Rectangle class derived from Shape
class Rectangle : public Shape {
public:
    double length;
    double width;

    Rectangle(string n, string col, double len, double wid) : Shape(n, col), length(len), width(wid) {}

    double calculateArea() const override {
        return length * width;
    }

    void displayInfo() const override {
        Shape::displayInfo();
        cout << "Length: " << length << "\nWidth: " << width << "\nArea: " << calculateArea() << endl;
    }
};

// Triangle class derived from Shape
class Triangle : public Shape {
public:
    double base;
    double height;

    Triangle(string n, string col, double b, double h) : Shape(n, col), base(b), height(h) {}

    double calculateArea() const override {
        return 0.5 * base * height;
    }

    void displayInfo() const override {
        Shape::displayInfo();
        cout << "Base: " << base << "\nHeight: " << height << "\nArea: " << calculateArea() << endl;
    }
};

// ColoredShape class derived from Shape
class ColoredShape : public Shape {
public:
    bool isColored;

    ColoredShape(string n, string col, bool colored) : Shape(n, col), isColored(colored) {}

    // Provide an implementation for calculateArea
    double calculateArea() const override {
        // You can provide any default value or throw an exception, as it may not have a meaningful area
        cout << "Cannot calculate area for a colored shape." << endl;
        return 0.0;
    }

    void displayInfo() const override {
        Shape::displayInfo();
        cout << "Is Colored: " << (isColored ? "Yes" : "No") << endl;
    }
};

int main() {
    // Create instances of Circle, Rectangle, and Triangle
    Circle circle("Circle", "Red", 5.0);
    Rectangle rectangle("Rectangle", "Blue", 4.0, 6.0);
    Triangle triangle("Triangle", "Green", 3.0, 4.0);

    // Display information and area for each shape
    circle.displayInfo();
    rectangle.displayInfo();
    triangle.displayInfo();

    // Create instances of ColoredShape
    ColoredShape coloredCircle("Colored Circle", "Yellow", true);
    ColoredShape coloredRectangle("Colored Rectangle", "Purple", false);

    // Display information for colored shapes
    coloredCircle.displayInfo();
    coloredRectangle.displayInfo();

    return 0;
}
