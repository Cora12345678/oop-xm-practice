#include <iostream>

class SimpleClass {
public:
    // Constructor
    SimpleClass() {
        std::cout << "SimpleClass object created!" << std::endl;
    }

    // Destructor
    ~SimpleClass() {
        std::cout << "SimpleClass object destroyed!" << std::endl;
    }
};

int main() {
    // Creating an object on the stack
    SimpleClass obj;

    // Object goes out of scope, destructor is automatically called

    return 0;
}
