#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() const {
        cout << "Drawing a generic shape." <<endl;
    }
};

class Circle :  public Shape {
public:
    void draw() const override {
        cout << "Drawing a circle." <<endl;
    }
};

int main() {
    Shape* shapePtr = new Shape();// if write Shape pointer points to base class function if write Circle pointer points to derived class function
    shapePtr->draw(); 
    delete shapePtr;

    return 0;
}
