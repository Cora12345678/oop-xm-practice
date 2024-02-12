#include <iostream>

class Vector {
private:
    int elements[5];

public:
    Vector() {
        for (int i = 0; i < 5; ++i) {
            elements[i] = i + 1;
        }
    }

    // Overloaded array subscript operator
    int operator[](int index) const {
        if (index >= 0 && index < 5) {
            return elements[index];
        } else {
            std::cerr << "Index out of bounds!" << std::endl;
            return -1; // You can handle the error as needed
        }
    }
};

int main() {
    Vector vector;
    std::cout << "Element at index 2: " << vector[2] << std::endl;

    return 0;
}
